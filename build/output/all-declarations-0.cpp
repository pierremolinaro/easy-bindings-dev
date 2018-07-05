#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-0.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//     L E X I Q U E                                                                                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "strings/unicode_character_cpp.h"
#include "galgas2/scanner_actions.h"
#include "galgas2/cLexiqueIntrospection.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cTokenFor_easyBindings_5F_lexique::cTokenFor_easyBindings_5F_lexique (void) :
mLexicalAttribute_floatValue (),
mLexicalAttribute_tokenString (),
mLexicalAttribute_uint_33__32_value () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_Lexique_easyBindings_5F_lexique::C_Lexique_easyBindings_5F_lexique (C_Compiler * inCallerCompiler,
                                                                      const C_String & inSourceFileName
                                                                      COMMA_LOCATION_ARGS) :
C_Lexique (inCallerCompiler, inSourceFileName COMMA_THERE) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_Lexique_easyBindings_5F_lexique::C_Lexique_easyBindings_5F_lexique (C_Compiler * inCallerCompiler,
                                                                      const C_String & inSourceString,
                                                                      const C_String & inStringForError
                                                                      COMMA_LOCATION_ARGS) :
C_Lexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                 I N D E X I N G    D I R E C T O R Y                                                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_String C_Lexique_easyBindings_5F_lexique::indexingDirectory (void) const {
  return "" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                        Lexical error message list                                                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gLexicalMessage_easyBindings_5F_lexique_attributeError = "in an attribute name, a letter, a digit or a dot should follow the '@' character" ;

static const char * gLexicalMessage_easyBindings_5F_lexique_decimalNumberTooLarge = "decimal number too large" ;

static const char * gLexicalMessage_easyBindings_5F_lexique_floatNumberConversionError = "invalid float number" ;

static const char * gLexicalMessage_easyBindings_5F_lexique_incorrectStringEnd = "string does not end with '\"'" ;

static const char * gLexicalMessage_easyBindings_5F_lexique_internalError = "internal error" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//          Syntax error messages, for every terminal symbol                                                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//--- Syntax error message for terminal '$identifier$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_identifier = "an identifier (beginning with a lower-case letter)" ;

//--- Syntax error message for terminal '$Identifier$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_Identifier = "an identifier (beginning with a upper-case letter)" ;

//--- Syntax error message for terminal '$@attribute$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique__40_attribute = "an attribute @..." ;

//--- Syntax error message for terminal '$bindingName$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_bindingName = "a binding name (identifier prefixed by '$')" ;

//--- Syntax error message for terminal '$literal_integer$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_literal_5F_integer = "a 32-bit unsigned decimal number" ;

//--- Syntax error message for terminal '$literal_double$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_literal_5F_double = "a float number" ;

//--- Syntax error message for terminal '$literal_string$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_literal_5F_string = "a character string constant \"...\"" ;

//--- Syntax error message for terminal '$comment$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_comment = "a comment" ;

//--- Syntax error message for terminal '$action$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_action = "the 'action' keyword" ;

//--- Syntax error message for terminal '$all$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_all = "the 'all' keyword" ;

//--- Syntax error message for terminal '$array$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_array = "the 'array' keyword" ;

//--- Syntax error message for terminal '$arrayController$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_arrayController = "the 'arrayController' keyword" ;

//--- Syntax error message for terminal '$binding$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_binding = "the 'binding' keyword" ;

//--- Syntax error message for terminal '$calledBy$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_calledBy = "the 'calledBy' keyword" ;

//--- Syntax error message for terminal '$class$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_class = "the 'class' keyword" ;

//--- Syntax error message for terminal '$classForSwift$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_classForSwift = "the 'classForSwift' keyword" ;

//--- Syntax error message for terminal '$column$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_column = "the 'column' keyword" ;

//--- Syntax error message for terminal '$customObjectController$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_customObjectController = "the 'customObjectController' keyword" ;

//--- Syntax error message for terminal '$default$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_default = "the 'default' keyword" ;

//--- Syntax error message for terminal '$dependsFrom$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_dependsFrom = "the 'dependsFrom' keyword" ;

//--- Syntax error message for terminal '$document$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_document = "the 'document' keyword" ;

//--- Syntax error message for terminal '$enum$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_enum = "the 'enum' keyword" ;

//--- Syntax error message for terminal '$entity$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_entity = "the 'entity' keyword" ;

//--- Syntax error message for terminal '$extern$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_extern = "the 'extern' keyword" ;

//--- Syntax error message for terminal '$externDelegate$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_externDelegate = "the 'externDelegate' keyword" ;

//--- Syntax error message for terminal '$externFunc$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_externFunc = "the 'externFunc' keyword" ;

//--- Syntax error message for terminal '$filter$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_filter = "the 'filter' keyword" ;

//--- Syntax error message for terminal '$include$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_include = "the 'include' keyword" ;

//--- Syntax error message for terminal '$inverse$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_inverse = "the 'inverse' keyword" ;

//--- Syntax error message for terminal '$mainxib$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_mainxib = "the 'mainxib' keyword" ;

//--- Syntax error message for terminal '$no$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_no = "the 'no' keyword" ;

//--- Syntax error message for terminal '$none$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_none = "the 'none' keyword" ;

//--- Syntax error message for terminal '$one$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_one = "the 'one' keyword" ;

//--- Syntax error message for terminal '$outlet$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_outlet = "the 'outlet' keyword" ;

//--- Syntax error message for terminal '$prefs$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_prefs = "the 'prefs' keyword" ;

//--- Syntax error message for terminal '$property$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_property = "the 'property' keyword" ;

//--- Syntax error message for terminal '$root$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_root = "the 'root' keyword" ;

//--- Syntax error message for terminal '$selectionController$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_selectionController = "the 'selectionController' keyword" ;

//--- Syntax error message for terminal '$self$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_self = "the 'self' keyword" ;

//--- Syntax error message for terminal '$signature$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_signature = "the 'signature' keyword" ;

//--- Syntax error message for terminal '$sort$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_sort = "the 'sort' keyword" ;

//--- Syntax error message for terminal '$struct$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_struct = "the 'struct' keyword" ;

//--- Syntax error message for terminal '$to$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_to = "the 'to' keyword" ;

//--- Syntax error message for terminal '$toMany$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_toMany = "the 'toMany' keyword" ;

//--- Syntax error message for terminal '$toOne$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_toOne = "the 'toOne' keyword" ;

//--- Syntax error message for terminal '$transient$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_transient = "the 'transient' keyword" ;

//--- Syntax error message for terminal '$version$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_version = "the 'version' keyword" ;

//--- Syntax error message for terminal '$versionShouldChange$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_versionShouldChange = "the 'versionShouldChange' keyword" ;

//--- Syntax error message for terminal '$xcodeproject$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_xcodeproject = "the 'xcodeproject' keyword" ;

//--- Syntax error message for terminal '$yes$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_yes = "the 'yes' keyword" ;

//--- Syntax error message for terminal '$enabled$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_enabled = "the '$enabled' keyword" ;

//--- Syntax error message for terminal '$hidden$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_hidden = "the '$hidden' keyword" ;

//--- Syntax error message for terminal '$tableValue$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_tableValue = "the '$tableValue' keyword" ;

//--- Syntax error message for terminal '$run$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_run = "the '$run' keyword" ;

//--- Syntax error message for terminal '$:$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique__3A_ = "the ':' delimitor" ;

//--- Syntax error message for terminal '$,$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique__2C_ = "the ',' delimitor" ;

//--- Syntax error message for terminal '$;$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique__3B_ = "the ';' delimitor" ;

//--- Syntax error message for terminal '$!$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique__21_ = "the '!' delimitor" ;

//--- Syntax error message for terminal '$[$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique__5B_ = "the '[' delimitor" ;

//--- Syntax error message for terminal '$]$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique__5D_ = "the ']' delimitor" ;

//--- Syntax error message for terminal '${$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique__7B_ = "the '{' delimitor" ;

//--- Syntax error message for terminal '$}$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique__7D_ = "the '}' delimitor" ;

//--- Syntax error message for terminal '$($' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique__28_ = "the '(' delimitor" ;

//--- Syntax error message for terminal '$)$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique__29_ = "the ')' delimitor" ;

//--- Syntax error message for terminal '$.$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique__2E_ = "the '.' delimitor" ;

//--- Syntax error message for terminal '$|$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique__7C_ = "the '|' delimitor" ;

//--- Syntax error message for terminal '$&$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique__26_ = "the '&' delimitor" ;

//--- Syntax error message for terminal '$<$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique__3C_ = "the '<' delimitor" ;

//--- Syntax error message for terminal '$>$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique__3E_ = "the '>' delimitor" ;

//--- Syntax error message for terminal '$<=$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique__3C__3D_ = "the '<=' delimitor" ;

//--- Syntax error message for terminal '$>=$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique__3E__3D_ = "the '>=' delimitor" ;

//--- Syntax error message for terminal '$!=$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique__21__3D_ = "the '!=' delimitor" ;

//--- Syntax error message for terminal '$==$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique__3D__3D_ = "the '==' delimitor" ;

//--- Syntax error message for terminal '$^$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique__5E_ = "the '^' delimitor" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                getMessageForTerminal                                                                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_String C_Lexique_easyBindings_5F_lexique::getMessageForTerminal (const int16_t inTerminalIndex) const {
  C_String result = "<unknown>" ;
  if ((inTerminalIndex >= 0) && (inTerminalIndex < 75)) {
    static const char * syntaxErrorMessageArray [75] = {kEndOfSourceLexicalErrorMessage,
        gSyntaxErrorMessage_easyBindings_5F_lexique_identifier,
        gSyntaxErrorMessage_easyBindings_5F_lexique_Identifier,
        gSyntaxErrorMessage_easyBindings_5F_lexique__40_attribute,
        gSyntaxErrorMessage_easyBindings_5F_lexique_bindingName,
        gSyntaxErrorMessage_easyBindings_5F_lexique_literal_5F_integer,
        gSyntaxErrorMessage_easyBindings_5F_lexique_literal_5F_double,
        gSyntaxErrorMessage_easyBindings_5F_lexique_literal_5F_string,
        gSyntaxErrorMessage_easyBindings_5F_lexique_comment,
        gSyntaxErrorMessage_easyBindings_5F_lexique_action,
        gSyntaxErrorMessage_easyBindings_5F_lexique_all,
        gSyntaxErrorMessage_easyBindings_5F_lexique_array,
        gSyntaxErrorMessage_easyBindings_5F_lexique_arrayController,
        gSyntaxErrorMessage_easyBindings_5F_lexique_binding,
        gSyntaxErrorMessage_easyBindings_5F_lexique_calledBy,
        gSyntaxErrorMessage_easyBindings_5F_lexique_class,
        gSyntaxErrorMessage_easyBindings_5F_lexique_classForSwift,
        gSyntaxErrorMessage_easyBindings_5F_lexique_column,
        gSyntaxErrorMessage_easyBindings_5F_lexique_customObjectController,
        gSyntaxErrorMessage_easyBindings_5F_lexique_default,
        gSyntaxErrorMessage_easyBindings_5F_lexique_dependsFrom,
        gSyntaxErrorMessage_easyBindings_5F_lexique_document,
        gSyntaxErrorMessage_easyBindings_5F_lexique_enum,
        gSyntaxErrorMessage_easyBindings_5F_lexique_entity,
        gSyntaxErrorMessage_easyBindings_5F_lexique_extern,
        gSyntaxErrorMessage_easyBindings_5F_lexique_externDelegate,
        gSyntaxErrorMessage_easyBindings_5F_lexique_externFunc,
        gSyntaxErrorMessage_easyBindings_5F_lexique_filter,
        gSyntaxErrorMessage_easyBindings_5F_lexique_include,
        gSyntaxErrorMessage_easyBindings_5F_lexique_inverse,
        gSyntaxErrorMessage_easyBindings_5F_lexique_mainxib,
        gSyntaxErrorMessage_easyBindings_5F_lexique_no,
        gSyntaxErrorMessage_easyBindings_5F_lexique_none,
        gSyntaxErrorMessage_easyBindings_5F_lexique_one,
        gSyntaxErrorMessage_easyBindings_5F_lexique_outlet,
        gSyntaxErrorMessage_easyBindings_5F_lexique_prefs,
        gSyntaxErrorMessage_easyBindings_5F_lexique_property,
        gSyntaxErrorMessage_easyBindings_5F_lexique_root,
        gSyntaxErrorMessage_easyBindings_5F_lexique_selectionController,
        gSyntaxErrorMessage_easyBindings_5F_lexique_self,
        gSyntaxErrorMessage_easyBindings_5F_lexique_signature,
        gSyntaxErrorMessage_easyBindings_5F_lexique_sort,
        gSyntaxErrorMessage_easyBindings_5F_lexique_struct,
        gSyntaxErrorMessage_easyBindings_5F_lexique_to,
        gSyntaxErrorMessage_easyBindings_5F_lexique_toMany,
        gSyntaxErrorMessage_easyBindings_5F_lexique_toOne,
        gSyntaxErrorMessage_easyBindings_5F_lexique_transient,
        gSyntaxErrorMessage_easyBindings_5F_lexique_version,
        gSyntaxErrorMessage_easyBindings_5F_lexique_versionShouldChange,
        gSyntaxErrorMessage_easyBindings_5F_lexique_xcodeproject,
        gSyntaxErrorMessage_easyBindings_5F_lexique_yes,
        gSyntaxErrorMessage_easyBindings_5F_lexique_enabled,
        gSyntaxErrorMessage_easyBindings_5F_lexique_hidden,
        gSyntaxErrorMessage_easyBindings_5F_lexique_tableValue,
        gSyntaxErrorMessage_easyBindings_5F_lexique_run,
        gSyntaxErrorMessage_easyBindings_5F_lexique__3A_,
        gSyntaxErrorMessage_easyBindings_5F_lexique__2C_,
        gSyntaxErrorMessage_easyBindings_5F_lexique__3B_,
        gSyntaxErrorMessage_easyBindings_5F_lexique__21_,
        gSyntaxErrorMessage_easyBindings_5F_lexique__5B_,
        gSyntaxErrorMessage_easyBindings_5F_lexique__5D_,
        gSyntaxErrorMessage_easyBindings_5F_lexique__7B_,
        gSyntaxErrorMessage_easyBindings_5F_lexique__7D_,
        gSyntaxErrorMessage_easyBindings_5F_lexique__28_,
        gSyntaxErrorMessage_easyBindings_5F_lexique__29_,
        gSyntaxErrorMessage_easyBindings_5F_lexique__2E_,
        gSyntaxErrorMessage_easyBindings_5F_lexique__7C_,
        gSyntaxErrorMessage_easyBindings_5F_lexique__26_,
        gSyntaxErrorMessage_easyBindings_5F_lexique__3C_,
        gSyntaxErrorMessage_easyBindings_5F_lexique__3E_,
        gSyntaxErrorMessage_easyBindings_5F_lexique__3C__3D_,
        gSyntaxErrorMessage_easyBindings_5F_lexique__3E__3D_,
        gSyntaxErrorMessage_easyBindings_5F_lexique__21__3D_,
        gSyntaxErrorMessage_easyBindings_5F_lexique__3D__3D_,
        gSyntaxErrorMessage_easyBindings_5F_lexique__5E_
    } ;
    result = syntaxErrorMessageArray [inTerminalIndex] ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                      U N I C O D E    S T R I N G S                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//--- Unicode string for '$_21_$'
static const utf32 kUnicodeString_easyBindings_5F_lexique__21_ [] = {
  TO_UNICODE ('!'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_21__3D_$'
static const utf32 kUnicodeString_easyBindings_5F_lexique__21__3D_ [] = {
  TO_UNICODE ('!'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26_$'
static const utf32 kUnicodeString_easyBindings_5F_lexique__26_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_28_$'
static const utf32 kUnicodeString_easyBindings_5F_lexique__28_ [] = {
  TO_UNICODE ('('),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_29_$'
static const utf32 kUnicodeString_easyBindings_5F_lexique__29_ [] = {
  TO_UNICODE (')'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2C_$'
static const utf32 kUnicodeString_easyBindings_5F_lexique__2C_ [] = {
  TO_UNICODE (','),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2E_$'
static const utf32 kUnicodeString_easyBindings_5F_lexique__2E_ [] = {
  TO_UNICODE ('.'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3A_$'
static const utf32 kUnicodeString_easyBindings_5F_lexique__3A_ [] = {
  TO_UNICODE (':'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3B_$'
static const utf32 kUnicodeString_easyBindings_5F_lexique__3B_ [] = {
  TO_UNICODE (';'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3C_$'
static const utf32 kUnicodeString_easyBindings_5F_lexique__3C_ [] = {
  TO_UNICODE ('<'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3C__3D_$'
static const utf32 kUnicodeString_easyBindings_5F_lexique__3C__3D_ [] = {
  TO_UNICODE ('<'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3D__3D_$'
static const utf32 kUnicodeString_easyBindings_5F_lexique__3D__3D_ [] = {
  TO_UNICODE ('='),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3E_$'
static const utf32 kUnicodeString_easyBindings_5F_lexique__3E_ [] = {
  TO_UNICODE ('>'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3E__3D_$'
static const utf32 kUnicodeString_easyBindings_5F_lexique__3E__3D_ [] = {
  TO_UNICODE ('>'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5B_$'
static const utf32 kUnicodeString_easyBindings_5F_lexique__5B_ [] = {
  TO_UNICODE ('['),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5D_$'
static const utf32 kUnicodeString_easyBindings_5F_lexique__5D_ [] = {
  TO_UNICODE (']'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5E_$'
static const utf32 kUnicodeString_easyBindings_5F_lexique__5E_ [] = {
  TO_UNICODE ('^'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$action$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_action [] = {
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$all$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_all [] = {
  TO_UNICODE ('a'),
  TO_UNICODE ('l'),
  TO_UNICODE ('l'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$array$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_array [] = {
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('y'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$arrayController$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_arrayController [] = {
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('y'),
  TO_UNICODE ('C'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('l'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$binding$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_binding [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('g'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$calledBy$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_calledBy [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('a'),
  TO_UNICODE ('l'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('d'),
  TO_UNICODE ('B'),
  TO_UNICODE ('y'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$class$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_class [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('s'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$classForSwift$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_classForSwift [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('s'),
  TO_UNICODE ('F'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('S'),
  TO_UNICODE ('w'),
  TO_UNICODE ('i'),
  TO_UNICODE ('f'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$column$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_column [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('o'),
  TO_UNICODE ('l'),
  TO_UNICODE ('u'),
  TO_UNICODE ('m'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$customObjectController$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_customObjectController [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('u'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('m'),
  TO_UNICODE ('O'),
  TO_UNICODE ('b'),
  TO_UNICODE ('j'),
  TO_UNICODE ('e'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE ('C'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('l'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$default$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_default [] = {
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('f'),
  TO_UNICODE ('a'),
  TO_UNICODE ('u'),
  TO_UNICODE ('l'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$dependsFrom$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_dependsFrom [] = {
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('p'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE ('s'),
  TO_UNICODE ('F'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('m'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$document$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_document [] = {
  TO_UNICODE ('d'),
  TO_UNICODE ('o'),
  TO_UNICODE ('c'),
  TO_UNICODE ('u'),
  TO_UNICODE ('m'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$enabled$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_enabled [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('a'),
  TO_UNICODE ('b'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$entity$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_entity [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('y'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$enum$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_enum [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('u'),
  TO_UNICODE ('m'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$extern$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_extern [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('x'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$externDelegate$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_externDelegate [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('x'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('n'),
  TO_UNICODE ('D'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('g'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$externFunc$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_externFunc [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('x'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('n'),
  TO_UNICODE ('F'),
  TO_UNICODE ('u'),
  TO_UNICODE ('n'),
  TO_UNICODE ('c'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$filter$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_filter [] = {
  TO_UNICODE ('f'),
  TO_UNICODE ('i'),
  TO_UNICODE ('l'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$hidden$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_hidden [] = {
  TO_UNICODE ('h'),
  TO_UNICODE ('i'),
  TO_UNICODE ('d'),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$include$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_include [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('c'),
  TO_UNICODE ('l'),
  TO_UNICODE ('u'),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$inverse$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_inverse [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('v'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$mainxib$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_mainxib [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('x'),
  TO_UNICODE ('i'),
  TO_UNICODE ('b'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$no$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_no [] = {
  TO_UNICODE ('n'),
  TO_UNICODE ('o'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$none$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_none [] = {
  TO_UNICODE ('n'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$one$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_one [] = {
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$outlet$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_outlet [] = {
  TO_UNICODE ('o'),
  TO_UNICODE ('u'),
  TO_UNICODE ('t'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$prefs$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_prefs [] = {
  TO_UNICODE ('p'),
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('f'),
  TO_UNICODE ('s'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$property$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_property [] = {
  TO_UNICODE ('p'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('p'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('t'),
  TO_UNICODE ('y'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$root$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_root [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('o'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$run$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_run [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('u'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$selectionController$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_selectionController [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE ('C'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('l'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$self$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_self [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$signature$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_signature [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('i'),
  TO_UNICODE ('g'),
  TO_UNICODE ('n'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('u'),
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$sort$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_sort [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$struct$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_struct [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('u'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$tableValue$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_tableValue [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('b'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('V'),
  TO_UNICODE ('a'),
  TO_UNICODE ('l'),
  TO_UNICODE ('u'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$to$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_to [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$toMany$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_toMany [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('M'),
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('y'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$toOne$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_toOne [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('O'),
  TO_UNICODE ('n'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$transient$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_transient [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('s'),
  TO_UNICODE ('i'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$version$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_version [] = {
  TO_UNICODE ('v'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('s'),
  TO_UNICODE ('i'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$versionShouldChange$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_versionShouldChange [] = {
  TO_UNICODE ('v'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('s'),
  TO_UNICODE ('i'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE ('S'),
  TO_UNICODE ('h'),
  TO_UNICODE ('o'),
  TO_UNICODE ('u'),
  TO_UNICODE ('l'),
  TO_UNICODE ('d'),
  TO_UNICODE ('C'),
  TO_UNICODE ('h'),
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('g'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$xcodeproject$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_xcodeproject [] = {
  TO_UNICODE ('x'),
  TO_UNICODE ('c'),
  TO_UNICODE ('o'),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('p'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('j'),
  TO_UNICODE ('e'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$yes$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_yes [] = {
  TO_UNICODE ('y'),
  TO_UNICODE ('e'),
  TO_UNICODE ('s'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7B_$'
static const utf32 kUnicodeString_easyBindings_5F_lexique__7B_ [] = {
  TO_UNICODE ('{'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7C_$'
static const utf32 kUnicodeString_easyBindings_5F_lexique__7C_ [] = {
  TO_UNICODE ('|'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7D_$'
static const utf32 kUnicodeString_easyBindings_5F_lexique__7D_ [] = {
  TO_UNICODE ('}'),
  TO_UNICODE (0)
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//             Key words table 'delimitorsList'                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const int32_t ktable_size_easyBindings_5F_lexique_delimitorsList = 20 ;

static const C_unicode_lexique_table_entry ktable_for_easyBindings_5F_lexique_delimitorsList [ktable_size_easyBindings_5F_lexique_delimitorsList] = {
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__21_, 1, C_Lexique_easyBindings_5F_lexique::kToken__21_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__26_, 1, C_Lexique_easyBindings_5F_lexique::kToken__26_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__28_, 1, C_Lexique_easyBindings_5F_lexique::kToken__28_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__29_, 1, C_Lexique_easyBindings_5F_lexique::kToken__29_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__2C_, 1, C_Lexique_easyBindings_5F_lexique::kToken__2C_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__2E_, 1, C_Lexique_easyBindings_5F_lexique::kToken__2E_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__3A_, 1, C_Lexique_easyBindings_5F_lexique::kToken__3A_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__3B_, 1, C_Lexique_easyBindings_5F_lexique::kToken__3B_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__3C_, 1, C_Lexique_easyBindings_5F_lexique::kToken__3C_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__3E_, 1, C_Lexique_easyBindings_5F_lexique::kToken__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__5B_, 1, C_Lexique_easyBindings_5F_lexique::kToken__5B_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__5D_, 1, C_Lexique_easyBindings_5F_lexique::kToken__5D_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__5E_, 1, C_Lexique_easyBindings_5F_lexique::kToken__5E_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__7B_, 1, C_Lexique_easyBindings_5F_lexique::kToken__7B_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__7C_, 1, C_Lexique_easyBindings_5F_lexique::kToken__7C_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__7D_, 1, C_Lexique_easyBindings_5F_lexique::kToken__7D_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__21__3D_, 2, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__3C__3D_, 2, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__3D__3D_, 2, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__3E__3D_, 2, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_)
} ;

int16_t C_Lexique_easyBindings_5F_lexique::search_into_delimitorsList (const C_String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_easyBindings_5F_lexique_delimitorsList, ktable_size_easyBindings_5F_lexique_delimitorsList) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//             Key words table 'lowerCaseKeyWordList'                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const int32_t ktable_size_easyBindings_5F_lexique_lowerCaseKeyWordList = 42 ;

static const C_unicode_lexique_table_entry ktable_for_easyBindings_5F_lexique_lowerCaseKeyWordList [ktable_size_easyBindings_5F_lexique_lowerCaseKeyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_no, 2, C_Lexique_easyBindings_5F_lexique::kToken_no),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_to, 2, C_Lexique_easyBindings_5F_lexique::kToken_to),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_all, 3, C_Lexique_easyBindings_5F_lexique::kToken_all),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_one, 3, C_Lexique_easyBindings_5F_lexique::kToken_one),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_yes, 3, C_Lexique_easyBindings_5F_lexique::kToken_yes),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_enum, 4, C_Lexique_easyBindings_5F_lexique::kToken_enum),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_none, 4, C_Lexique_easyBindings_5F_lexique::kToken_none),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_root, 4, C_Lexique_easyBindings_5F_lexique::kToken_root),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_self, 4, C_Lexique_easyBindings_5F_lexique::kToken_self),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_sort, 4, C_Lexique_easyBindings_5F_lexique::kToken_sort),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_array, 5, C_Lexique_easyBindings_5F_lexique::kToken_array),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_class, 5, C_Lexique_easyBindings_5F_lexique::kToken_class),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_prefs, 5, C_Lexique_easyBindings_5F_lexique::kToken_prefs),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_toOne, 5, C_Lexique_easyBindings_5F_lexique::kToken_toOne),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_action, 6, C_Lexique_easyBindings_5F_lexique::kToken_action),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_column, 6, C_Lexique_easyBindings_5F_lexique::kToken_column),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_entity, 6, C_Lexique_easyBindings_5F_lexique::kToken_entity),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_extern, 6, C_Lexique_easyBindings_5F_lexique::kToken_extern),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_filter, 6, C_Lexique_easyBindings_5F_lexique::kToken_filter),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_outlet, 6, C_Lexique_easyBindings_5F_lexique::kToken_outlet),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_struct, 6, C_Lexique_easyBindings_5F_lexique::kToken_struct),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_toMany, 6, C_Lexique_easyBindings_5F_lexique::kToken_toMany),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_binding, 7, C_Lexique_easyBindings_5F_lexique::kToken_binding),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_default, 7, C_Lexique_easyBindings_5F_lexique::kToken_default),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_include, 7, C_Lexique_easyBindings_5F_lexique::kToken_include),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_inverse, 7, C_Lexique_easyBindings_5F_lexique::kToken_inverse),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_mainxib, 7, C_Lexique_easyBindings_5F_lexique::kToken_mainxib),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_version, 7, C_Lexique_easyBindings_5F_lexique::kToken_version),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_calledBy, 8, C_Lexique_easyBindings_5F_lexique::kToken_calledBy),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_document, 8, C_Lexique_easyBindings_5F_lexique::kToken_document),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_property, 8, C_Lexique_easyBindings_5F_lexique::kToken_property),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_signature, 9, C_Lexique_easyBindings_5F_lexique::kToken_signature),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_transient, 9, C_Lexique_easyBindings_5F_lexique::kToken_transient),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_externFunc, 10, C_Lexique_easyBindings_5F_lexique::kToken_externFunc),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_dependsFrom, 11, C_Lexique_easyBindings_5F_lexique::kToken_dependsFrom),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_xcodeproject, 12, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_classForSwift, 13, C_Lexique_easyBindings_5F_lexique::kToken_classForSwift),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_externDelegate, 14, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_arrayController, 15, C_Lexique_easyBindings_5F_lexique::kToken_arrayController),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_selectionController, 19, C_Lexique_easyBindings_5F_lexique::kToken_selectionController),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_versionShouldChange, 19, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_customObjectController, 22, C_Lexique_easyBindings_5F_lexique::kToken_customObjectController)
} ;

int16_t C_Lexique_easyBindings_5F_lexique::search_into_lowerCaseKeyWordList (const C_String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_easyBindings_5F_lexique_lowerCaseKeyWordList, ktable_size_easyBindings_5F_lexique_lowerCaseKeyWordList) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//             Key words table 'reservedBindingNameKeyWordList'                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const int32_t ktable_size_easyBindings_5F_lexique_reservedBindingNameKeyWordList = 4 ;

static const C_unicode_lexique_table_entry ktable_for_easyBindings_5F_lexique_reservedBindingNameKeyWordList [ktable_size_easyBindings_5F_lexique_reservedBindingNameKeyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_run, 3, C_Lexique_easyBindings_5F_lexique::kToken_run),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_hidden, 6, C_Lexique_easyBindings_5F_lexique::kToken_hidden),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_enabled, 7, C_Lexique_easyBindings_5F_lexique::kToken_enabled),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_tableValue, 10, C_Lexique_easyBindings_5F_lexique::kToken_tableValue)
} ;

int16_t C_Lexique_easyBindings_5F_lexique::search_into_reservedBindingNameKeyWordList (const C_String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_easyBindings_5F_lexique_reservedBindingNameKeyWordList, ktable_size_easyBindings_5F_lexique_reservedBindingNameKeyWordList) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                          getCurrentTokenString                                                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_String C_Lexique_easyBindings_5F_lexique::getCurrentTokenString (const cToken * inTokenPtr) const {
  const cTokenFor_easyBindings_5F_lexique * ptr = (const cTokenFor_easyBindings_5F_lexique *) inTokenPtr ;
  C_String s ;
  if (ptr == NULL) {
    s.appendCString("$$") ;
  }else{
    switch (ptr->mTokenCode) {
    case kToken_:
      s.appendCString("$$") ;
      break ;
    case kToken_identifier:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("identifier") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_Identifier:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("Identifier") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__40_attribute:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("@attribute") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_bindingName:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("bindingName") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_literal_5F_integer:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("literal_integer") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendUnsigned (ptr->mLexicalAttribute_uint_33__32_value) ;
      break ;
    case kToken_literal_5F_double:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("literal_double") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendDouble (ptr->mLexicalAttribute_floatValue) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_literal_5F_string:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("literal_string") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_comment:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("comment") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_action:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("action") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_all:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("all") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_array:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("array") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_arrayController:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("arrayController") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_binding:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("binding") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_calledBy:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("calledBy") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_class:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("class") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_classForSwift:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("classForSwift") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_column:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("column") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_customObjectController:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("customObjectController") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_default:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("default") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_dependsFrom:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("dependsFrom") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_document:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("document") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_enum:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("enum") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_entity:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("entity") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_extern:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("extern") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_externDelegate:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("externDelegate") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_externFunc:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("externFunc") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_filter:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("filter") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_include:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("include") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_inverse:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("inverse") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_mainxib:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("mainxib") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_no:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("no") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_none:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("none") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_one:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("one") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_outlet:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("outlet") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_prefs:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("prefs") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_property:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("property") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_root:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("root") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_selectionController:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("selectionController") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_self:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("self") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_signature:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("signature") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_sort:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("sort") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_struct:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("struct") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_to:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("to") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_toMany:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("toMany") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_toOne:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("toOne") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_transient:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("transient") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_version:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("version") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_versionShouldChange:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("versionShouldChange") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_xcodeproject:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("xcodeproject") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_yes:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("yes") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_enabled:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("enabled") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_hidden:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("hidden") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_tableValue:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("tableValue") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_run:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("run") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3A_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (":") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2C_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (",") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (";") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__21_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("!") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__5B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("[") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__5D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("]") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("{") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("}") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__28_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("(") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__29_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (")") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (".") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7C_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("|") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__26_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("&") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3C_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("<") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (">") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3C__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("<=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3E__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (">=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__21__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("!=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3D__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("==") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__5E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("^") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    default:
      break ;
    }
  }
  return s ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                           Template Delimiters                                                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                           Template Replacements                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//            Terminal Symbols as end of script in template mark                                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//            Unicode test functions                                                                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
 
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//               P A R S E    L E X I C A L    T O K E N                                                               *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool C_Lexique_easyBindings_5F_lexique::parseLexicalToken (void) {
  cTokenFor_easyBindings_5F_lexique token ;
  mLoop = true ;
  token.mTokenCode = -1 ;
  while ((token.mTokenCode < 0) && (UNICODE_VALUE (mCurrentChar) != '\0')) {
    token.mLexicalAttribute_floatValue = 0.0 ;
    token.mLexicalAttribute_tokenString.setLengthToZero () ;
    token.mLexicalAttribute_uint_33__32_value = 0 ;
    mTokenStartLocation = mCurrentLocation ;
    try{
      if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z'))) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32Char (TO_UNICODE ('_'))) {
          }else{
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
        if (token.mTokenCode == -1) {
          token.mTokenCode = search_into_lowerCaseKeyWordList (token.mLexicalAttribute_tokenString) ;
        }
        if (token.mTokenCode == -1) {
          token.mTokenCode = kToken_identifier ;
        }
        enterToken (token) ;
      }else if (testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z'))) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
          }else{
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
        token.mTokenCode = kToken_Identifier ;
        enterToken (token) ;
      }else if (testForInputUTF32Char (TO_UNICODE ('@'))) {
        if (testForCharWithFunction (isUnicodeLetter) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
          do {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            if (testForCharWithFunction (isUnicodeLetter) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32Char (TO_UNICODE ('.'))) {
            }else{
              mLoop = false ;
            }
          }while (mLoop) ;
          mLoop = true ;
        }else{
          lexicalError (gLexicalMessage_easyBindings_5F_lexique_attributeError COMMA_LINE_AND_SOURCE_FILE) ;
        }
        token.mTokenCode = kToken__40_attribute ;
        enterToken (token) ;
      }else if (testForInputUTF32Char (TO_UNICODE ('$'))) {
        do {
          if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          }else{
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
        if (token.mTokenCode == -1) {
          token.mTokenCode = search_into_reservedBindingNameKeyWordList (token.mLexicalAttribute_tokenString) ;
        }
        if (token.mTokenCode == -1) {
          token.mTokenCode = kToken_bindingName ;
        }
        enterToken (token) ;
      }else if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        do {
          if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
          }else{
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
        if (testForInputUTF32Char (TO_UNICODE ('.'))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('.')) ;
          do {
            if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
            }else{
              mLoop = false ;
            }
          }while (mLoop) ;
          mLoop = true ;
          ::scanner_routine_convertStringToDouble (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_floatValue, gLexicalMessage_easyBindings_5F_lexique_floatNumberConversionError) ;
          token.mTokenCode = kToken_literal_5F_double ;
          enterToken (token) ;
        }else{
          ::scanner_routine_convertDecimalStringIntoUInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_easyBindings_5F_lexique_decimalNumberTooLarge, gLexicalMessage_easyBindings_5F_lexique_internalError) ;
          token.mTokenCode = kToken_literal_5F_integer ;
          enterToken (token) ;
        }
      }else if (testForInputUTF32Char (TO_UNICODE ('\"'))) {
        do {
          if (testForInputUTF32Char (TO_UNICODE (' ')) || testForInputUTF32Char (TO_UNICODE ('!')) || testForInputUTF32CharRange (TO_UNICODE ('#'), TO_UNICODE (65533))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          }else{
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
        if (testForInputUTF32Char (TO_UNICODE ('\"'))) {
          token.mTokenCode = kToken_literal_5F_string ;
          enterToken (token) ;
        }else{
          lexicalError (gLexicalMessage_easyBindings_5F_lexique_incorrectStringEnd COMMA_LINE_AND_SOURCE_FILE) ;
        }
      }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__3E__3D_, 2, true)) {
        token.mTokenCode = kToken__3E__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__3D__3D_, 2, true)) {
        token.mTokenCode = kToken__3D__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__3C__3D_, 2, true)) {
        token.mTokenCode = kToken__3C__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__21__3D_, 2, true)) {
        token.mTokenCode = kToken__21__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__7D_, 1, true)) {
        token.mTokenCode = kToken__7D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__7C_, 1, true)) {
        token.mTokenCode = kToken__7C_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__7B_, 1, true)) {
        token.mTokenCode = kToken__7B_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__5E_, 1, true)) {
        token.mTokenCode = kToken__5E_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__5D_, 1, true)) {
        token.mTokenCode = kToken__5D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__5B_, 1, true)) {
        token.mTokenCode = kToken__5B_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__3E_, 1, true)) {
        token.mTokenCode = kToken__3E_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__3C_, 1, true)) {
        token.mTokenCode = kToken__3C_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__3B_, 1, true)) {
        token.mTokenCode = kToken__3B_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__3A_, 1, true)) {
        token.mTokenCode = kToken__3A_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__2E_, 1, true)) {
        token.mTokenCode = kToken__2E_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__2C_, 1, true)) {
        token.mTokenCode = kToken__2C_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__29_, 1, true)) {
        token.mTokenCode = kToken__29_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__28_, 1, true)) {
        token.mTokenCode = kToken__28_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__26_, 1, true)) {
        token.mTokenCode = kToken__26_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__21_, 1, true)) {
        token.mTokenCode = kToken__21_ ;
        enterToken (token) ;
      }else if (testForInputUTF32Char (TO_UNICODE ('#'))) {
        do {
          if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE ('\t')) || testForInputUTF32Char (TO_UNICODE ('\v')) || testForInputUTF32Char (TO_UNICODE ('\f')) || testForInputUTF32CharRange (TO_UNICODE (14), TO_UNICODE (65533))) {
          }else{
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
        enterDroppedTerminal (kToken_comment) ;
      }else if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE (' '))) {
      }else if (testForInputUTF32Char (TO_UNICODE ('\0'))) { // End of source text ? 
        token.mTokenCode = kToken_ ; // Empty string code
      }else{ // Unknown input character
        unknownCharacterLexicalError (LINE_AND_SOURCE_FILE) ;
        token.mTokenCode = -1 ; // No token
        advance () ; // ... go throught unknown character
      }
    }catch (const C_lexicalErrorException &) {
      token.mTokenCode = -1 ; // No token
      advance () ; // ... go throught unknown character
    }
  }
  if (UNICODE_VALUE (mCurrentChar) == '\0') {
    token.mTokenCode = 0 ;
    enterToken (token) ;
  }
  return token.mTokenCode > 0 ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                         E N T E R    T O K E N                                                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void C_Lexique_easyBindings_5F_lexique::enterToken (cTokenFor_easyBindings_5F_lexique & ioToken) {
  cTokenFor_easyBindings_5F_lexique * ptr = NULL ;
  macroMyNew (ptr, cTokenFor_easyBindings_5F_lexique ()) ;
  ptr->mTokenCode = ioToken.mTokenCode ;
  // ptr->mIsOptional = ioToken.mIsOptional ;
  ptr->mStartLocation = mTokenStartLocation ;
  ptr->mEndLocation = mTokenEndLocation ;
  ptr->mTemplateStringBeforeToken = ioToken.mTemplateStringBeforeToken ;
  ioToken.mTemplateStringBeforeToken = "" ;
  ptr->mLexicalAttribute_floatValue = ioToken.mLexicalAttribute_floatValue ;
  ptr->mLexicalAttribute_tokenString = ioToken.mLexicalAttribute_tokenString ;
  ptr->mLexicalAttribute_uint_33__32_value = ioToken.mLexicalAttribute_uint_33__32_value ;
  enterTokenFromPointer (ptr) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//               A T T R I B U T E   A C C E S S                                                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

double C_Lexique_easyBindings_5F_lexique::attributeValue_floatValue (void) const {
  cTokenFor_easyBindings_5F_lexique * ptr = (cTokenFor_easyBindings_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_floatValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_String C_Lexique_easyBindings_5F_lexique::attributeValue_tokenString (void) const {
  cTokenFor_easyBindings_5F_lexique * ptr = (cTokenFor_easyBindings_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_tokenString ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

uint32_t C_Lexique_easyBindings_5F_lexique::attributeValue_uint_33__32_value (void) const {
  cTokenFor_easyBindings_5F_lexique * ptr = (cTokenFor_easyBindings_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_uint_33__32_value ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//         A S S I G N    F R O M    A T T R I B U T E                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ldouble C_Lexique_easyBindings_5F_lexique::synthetizedAttribute_floatValue (void) const {
  cTokenFor_easyBindings_5F_lexique * ptr = (cTokenFor_easyBindings_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_easyBindings_5F_lexique) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_double value (ptr->mLexicalAttribute_floatValue) ;
  GALGAS_ldouble result (value, currentLocation) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring C_Lexique_easyBindings_5F_lexique::synthetizedAttribute_tokenString (void) const {
  cTokenFor_easyBindings_5F_lexique * ptr = (cTokenFor_easyBindings_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_easyBindings_5F_lexique) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_string value (ptr->mLexicalAttribute_tokenString) ;
  GALGAS_lstring result (value, currentLocation) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_luint C_Lexique_easyBindings_5F_lexique::synthetizedAttribute_uint_33__32_value (void) const {
  cTokenFor_easyBindings_5F_lexique * ptr = (cTokenFor_easyBindings_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_easyBindings_5F_lexique) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_uint value (ptr->mLexicalAttribute_uint_33__32_value) ;
  GALGAS_luint result (value, currentLocation) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                         I N T R O S P E C T I O N                                                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringlist C_Lexique_easyBindings_5F_lexique::symbols (LOCATION_ARGS) {
  GALGAS_stringlist result = GALGAS_stringlist::constructor_emptyList (THERE) ;
  result.addAssign_operation (GALGAS_string ("identifier") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("Identifier") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("@attribute") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("bindingName") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("literal_integer") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("literal_double") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("literal_string") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("comment") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("action") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("all") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("array") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("arrayController") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("binding") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("calledBy") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("class") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("classForSwift") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("column") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("customObjectController") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("default") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("dependsFrom") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("document") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("enum") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("entity") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("extern") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("externDelegate") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("externFunc") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("filter") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("include") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("inverse") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("mainxib") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("no") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("none") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("one") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("outlet") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("prefs") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("property") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("root") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("selectionController") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("self") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("signature") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("sort") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("struct") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("to") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("toMany") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("toOne") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("transient") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("version") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("versionShouldChange") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("xcodeproject") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("yes") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("enabled") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("hidden") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("tableValue") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("run") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (":") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (",") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (";") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("[") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("]") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("{") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("}") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("(") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (")") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (".") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("|") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("&") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("<") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (">") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("<=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (">=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("==") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("^") COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void getKeywordLists_easyBindings_5F_lexique (TC_UniqueArray <C_String> & ioList) {
  ioList.appendObject ("easyBindings_lexique:delimitorsList") ;
  ioList.appendObject ("easyBindings_lexique:lowerCaseKeyWordList") ;
  ioList.appendObject ("easyBindings_lexique:reservedBindingNameKeyWordList") ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void getKeywordsForIdentifier_easyBindings_5F_lexique (const C_String & inIdentifier,
                                                              bool & ioFound,
                                                              TC_UniqueArray <C_String> & ioList) {
  if (inIdentifier == "easyBindings_lexique:delimitorsList") {
    ioFound = true ;
    ioList.appendObject ("!") ;
    ioList.appendObject ("&") ;
    ioList.appendObject ("(") ;
    ioList.appendObject (")") ;
    ioList.appendObject (",") ;
    ioList.appendObject (".") ;
    ioList.appendObject (":") ;
    ioList.appendObject (";") ;
    ioList.appendObject ("<") ;
    ioList.appendObject (">") ;
    ioList.appendObject ("[") ;
    ioList.appendObject ("]") ;
    ioList.appendObject ("^") ;
    ioList.appendObject ("{") ;
    ioList.appendObject ("|") ;
    ioList.appendObject ("}") ;
    ioList.appendObject ("!=") ;
    ioList.appendObject ("<=") ;
    ioList.appendObject ("==") ;
    ioList.appendObject (">=") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
  if (inIdentifier == "easyBindings_lexique:lowerCaseKeyWordList") {
    ioFound = true ;
    ioList.appendObject ("no") ;
    ioList.appendObject ("to") ;
    ioList.appendObject ("all") ;
    ioList.appendObject ("one") ;
    ioList.appendObject ("yes") ;
    ioList.appendObject ("enum") ;
    ioList.appendObject ("none") ;
    ioList.appendObject ("root") ;
    ioList.appendObject ("self") ;
    ioList.appendObject ("sort") ;
    ioList.appendObject ("array") ;
    ioList.appendObject ("class") ;
    ioList.appendObject ("prefs") ;
    ioList.appendObject ("toOne") ;
    ioList.appendObject ("action") ;
    ioList.appendObject ("column") ;
    ioList.appendObject ("entity") ;
    ioList.appendObject ("extern") ;
    ioList.appendObject ("filter") ;
    ioList.appendObject ("outlet") ;
    ioList.appendObject ("struct") ;
    ioList.appendObject ("toMany") ;
    ioList.appendObject ("binding") ;
    ioList.appendObject ("default") ;
    ioList.appendObject ("include") ;
    ioList.appendObject ("inverse") ;
    ioList.appendObject ("mainxib") ;
    ioList.appendObject ("version") ;
    ioList.appendObject ("calledBy") ;
    ioList.appendObject ("document") ;
    ioList.appendObject ("property") ;
    ioList.appendObject ("signature") ;
    ioList.appendObject ("transient") ;
    ioList.appendObject ("externFunc") ;
    ioList.appendObject ("dependsFrom") ;
    ioList.appendObject ("xcodeproject") ;
    ioList.appendObject ("classForSwift") ;
    ioList.appendObject ("externDelegate") ;
    ioList.appendObject ("arrayController") ;
    ioList.appendObject ("selectionController") ;
    ioList.appendObject ("versionShouldChange") ;
    ioList.appendObject ("customObjectController") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
  if (inIdentifier == "easyBindings_lexique:reservedBindingNameKeyWordList") {
    ioFound = true ;
    ioList.appendObject ("run") ;
    ioList.appendObject ("hidden") ;
    ioList.appendObject ("enabled") ;
    ioList.appendObject ("tableValue") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static cLexiqueIntrospection lexiqueIntrospection_easyBindings_5F_lexique
__attribute__ ((used))
__attribute__ ((unused)) (getKeywordLists_easyBindings_5F_lexique, getKeywordsForIdentifier_easyBindings_5F_lexique) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

uint32_t C_Lexique_easyBindings_5F_lexique::styleIndexForTerminal (const int32_t inTerminalIndex) const {
  static const uint32_t kTerminalSymbolStyles [75] = {0,
    2 /* easyBindings_lexique_1_identifier */,
    3 /* easyBindings_lexique_1_Identifier */,
    4 /* easyBindings_lexique_1__40_attribute */,
    5 /* easyBindings_lexique_1_bindingName */,
    7 /* easyBindings_lexique_1_literal_5F_integer */,
    8 /* easyBindings_lexique_1_literal_5F_double */,
    9 /* easyBindings_lexique_1_literal_5F_string */,
    11 /* easyBindings_lexique_1_comment */,
    1 /* easyBindings_lexique_1_action */,
    1 /* easyBindings_lexique_1_all */,
    1 /* easyBindings_lexique_1_array */,
    1 /* easyBindings_lexique_1_arrayController */,
    1 /* easyBindings_lexique_1_binding */,
    1 /* easyBindings_lexique_1_calledBy */,
    1 /* easyBindings_lexique_1_class */,
    1 /* easyBindings_lexique_1_classForSwift */,
    1 /* easyBindings_lexique_1_column */,
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
    1 /* easyBindings_lexique_1_none */,
    1 /* easyBindings_lexique_1_one */,
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
    1 /* easyBindings_lexique_1_version */,
    1 /* easyBindings_lexique_1_versionShouldChange */,
    1 /* easyBindings_lexique_1_xcodeproject */,
    1 /* easyBindings_lexique_1_yes */,
    6 /* easyBindings_lexique_1_enabled */,
    6 /* easyBindings_lexique_1_hidden */,
    6 /* easyBindings_lexique_1_tableValue */,
    6 /* easyBindings_lexique_1_run */,
    10 /* easyBindings_lexique_1__3A_ */,
    10 /* easyBindings_lexique_1__2C_ */,
    10 /* easyBindings_lexique_1__3B_ */,
    10 /* easyBindings_lexique_1__21_ */,
    10 /* easyBindings_lexique_1__5B_ */,
    10 /* easyBindings_lexique_1__5D_ */,
    10 /* easyBindings_lexique_1__7B_ */,
    10 /* easyBindings_lexique_1__7D_ */,
    10 /* easyBindings_lexique_1__28_ */,
    10 /* easyBindings_lexique_1__29_ */,
    10 /* easyBindings_lexique_1__2E_ */,
    10 /* easyBindings_lexique_1__7C_ */,
    10 /* easyBindings_lexique_1__26_ */,
    10 /* easyBindings_lexique_1__3C_ */,
    10 /* easyBindings_lexique_1__3E_ */,
    10 /* easyBindings_lexique_1__3C__3D_ */,
    10 /* easyBindings_lexique_1__3E__3D_ */,
    10 /* easyBindings_lexique_1__21__3D_ */,
    10 /* easyBindings_lexique_1__3D__3D_ */,
    10 /* easyBindings_lexique_1__5E_ */
  } ;
  return (inTerminalIndex >= 0) ? kTerminalSymbolStyles [inTerminalIndex] : 0 ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_String C_Lexique_easyBindings_5F_lexique::styleNameForIndex (const uint32_t inStyleIndex) const {
  C_String result ;
  if (inStyleIndex < 12) {
    static const char * kStyleArray [12] = {
      "",
      "keywordsStyle",
      "idfStyle",
      "IdfStyle",
      "attributeStyle",
      "bindingNameStyle",
      "reservedBindingNameStyle",
      "integerStyle",
      "floatStyle",
      "stringStyle",
      "delimitersStyle",
      "commentStyle"
    } ;
    result = kStyleArray [inStyleIndex] ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_start_5F_symbol_i0_ (const GALGAS_bool constinArgument_inIsUserDefined,
                                                                                      GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                      GALGAS_location & outArgument_outEndOfFile,
                                                                                      C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outEndOfFile.drop () ; // Release 'out' argument
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_include COMMA_SOURCE_FILE ("grammar-syntax.galgas", 63)) ;
      GALGAS_lstring var_filePath_2676 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("grammar-syntax.galgas", 64)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("grammar-syntax.galgas", 65)) ;
      GALGAS_lstring var_sourceFile_2707 = GALGAS_lstring::constructor_new (var_filePath_2676.getter_string (HERE).getter_absolutePathFromPath (GALGAS_string::constructor_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("grammar-syntax.galgas", 67)).getter_stringByDeletingLastPathComponent (SOURCE_FILE ("grammar-syntax.galgas", 67)) COMMA_SOURCE_FILE ("grammar-syntax.galgas", 67)), var_filePath_2676.getter_location (HERE)  COMMA_SOURCE_FILE ("grammar-syntax.galgas", 66)) ;
      GALGAS_location joker_3000 ; // Joker input parameter
      cGrammar_easyBindings_5F_grammar::_performSourceFileParsing_ (inCompiler, var_sourceFile_2707, constinArgument_inIsUserDefined, ioArgument_ioDeclarationAST, joker_3000  COMMA_SOURCE_FILE ("grammar-syntax.galgas", 70)) ;
    } break ;
    case 3: {
      nt_enum_5F_declaration_ (constinArgument_inIsUserDefined, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 4: {
      nt_entity_5F_declaration_ (constinArgument_inIsUserDefined, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 5: {
      nt_class_5F_declaration_ (constinArgument_inIsUserDefined, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 6: {
      nt_preferences_5F_declaration_ (constinArgument_inIsUserDefined, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 7: {
      nt_document_5F_declaration_ (constinArgument_inIsUserDefined, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 8: {
      nt_outlet_5F_class_5F_declaration_ (constinArgument_inIsUserDefined, ioArgument_ioDeclarationAST.mProperty_mOutletClassDeclarationList, inCompiler) ;
    } break ;
    case 9: {
      nt_binding_5F_specification_ (constinArgument_inIsUserDefined, ioArgument_ioDeclarationAST.mProperty_mBindingSpecificationListMap, inCompiler) ;
    } break ;
    case 10: {
      nt_xcode_5F_project_ (ioArgument_ioDeclarationAST.mProperty_mXcodeProject, inCompiler) ;
    } break ;
    case 11: {
      nt_main_5F_xib_ (ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mMainXibDescriptorList, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outEndOfFile = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("grammar-syntax.galgas", 93)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_start_5F_symbol_i0_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_include COMMA_SOURCE_FILE ("grammar-syntax.galgas", 63)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("grammar-syntax.galgas", 64)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("grammar-syntax.galgas", 65)) ;
    } break ;
    case 3: {
      nt_enum_5F_declaration_parse (inCompiler) ;
    } break ;
    case 4: {
      nt_entity_5F_declaration_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_class_5F_declaration_parse (inCompiler) ;
    } break ;
    case 6: {
      nt_preferences_5F_declaration_parse (inCompiler) ;
    } break ;
    case 7: {
      nt_document_5F_declaration_parse (inCompiler) ;
    } break ;
    case 8: {
      nt_outlet_5F_class_5F_declaration_parse (inCompiler) ;
    } break ;
    case 9: {
      nt_binding_5F_specification_parse (inCompiler) ;
    } break ;
    case 10: {
      nt_xcode_5F_project_parse (inCompiler) ;
    } break ;
    case 11: {
      nt_main_5F_xib_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i1_ (GALGAS_externSwiftDelegateList & ioArgument_ioExternSwiftDelegateList,
                                                                                                  C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_externDelegate COMMA_SOURCE_FILE ("extern-delegate.galgas", 20)) ;
  GALGAS_lstring var_externDelegateName_1124 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("extern-delegate.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("extern-delegate.galgas", 22)) ;
  ioArgument_ioExternSwiftDelegateList.addAssign_operation (var_externDelegateName_1124  COMMA_SOURCE_FILE ("extern-delegate.galgas", 23)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i1_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_externDelegate COMMA_SOURCE_FILE ("extern-delegate.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("extern-delegate.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("extern-delegate.galgas", 22)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i2_ (GALGAS_externSwiftFunctionList & ioArgument_ioExternSwiftFunctionList,
                                                                                              C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_externFunc COMMA_SOURCE_FILE ("extern-swift-func.galgas", 21)) ;
  GALGAS_lstring var_externFunctionName_1139 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("extern-swift-func.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_calledBy COMMA_SOURCE_FILE ("extern-swift-func.galgas", 23)) ;
  GALGAS_lstring var_callerName_1196 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("extern-swift-func.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("extern-swift-func.galgas", 25)) ;
  ioArgument_ioExternSwiftFunctionList.addAssign_operation (var_externFunctionName_1139, var_callerName_1196  COMMA_SOURCE_FILE ("extern-swift-func.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i2_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_externFunc COMMA_SOURCE_FILE ("extern-swift-func.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("extern-swift-func.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_calledBy COMMA_SOURCE_FILE ("extern-swift-func.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("extern-swift-func.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("extern-swift-func.galgas", 25)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_class_5F_declaration_i3_ (const GALGAS_bool constinArgument_inIsUserDefined,
                                                                                           GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                           C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("property-class.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("property-class.galgas", 29)) ;
  GALGAS_lstring var_classPropertyName_1397 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("property-class.galgas", 30)) ;
  GALGAS_stringset var_stringDefaultValues_1432 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("property-class.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("property-class.galgas", 32)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_defaultValue_1502 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("property-class.galgas", 34)) ;
    const enumGalgasBool test_1 = var_stringDefaultValues_1432.getter_hasKey (var_defaultValue_1502.getter_string (HERE) COMMA_SOURCE_FILE ("property-class.galgas", 35)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_defaultValue_1502.getter_location (SOURCE_FILE ("property-class.galgas", 36)), GALGAS_string ("value already defined"), fixItArray2  COMMA_SOURCE_FILE ("property-class.galgas", 36)) ;
    }
    var_stringDefaultValues_1432.addAssign_operation (var_defaultValue_1502.getter_string (HERE)  COMMA_SOURCE_FILE ("property-class.galgas", 38)) ;
    switch (select_easyBindings_5F_syntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("property-class.galgas", 40)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("property-class.galgas", 42)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("property-class.galgas", 43)) ;
  ioArgument_ioDeclarationAST.mProperty_mDeclarationList.addAssign_operation (GALGAS_propertyClassDeclaration::constructor_new (constinArgument_inIsUserDefined, var_classPropertyName_1397, GALGAS_propertyClassDefaultValues::constructor_string (var_stringDefaultValues_1432  COMMA_SOURCE_FILE ("property-class.galgas", 47))  COMMA_SOURCE_FILE ("property-class.galgas", 44))  COMMA_SOURCE_FILE ("property-class.galgas", 44)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_class_5F_declaration_i3_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("property-class.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("property-class.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("property-class.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("property-class.galgas", 32)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("property-class.galgas", 34)) ;
    switch (select_easyBindings_5F_syntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("property-class.galgas", 40)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("property-class.galgas", 42)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("property-class.galgas", 43)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_class_5F_declaration_i4_ (const GALGAS_bool constinArgument_inIsUserDefined,
                                                                                           GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                           C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property-class.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("transient-property-class.galgas", 23)) ;
  GALGAS_bool var_isClass_1174 ;
  switch (select_easyBindings_5F_syntax_2 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("transient-property-class.galgas", 26)) ;
    var_isClass_1174 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_struct COMMA_SOURCE_FILE ("transient-property-class.galgas", 29)) ;
    var_isClass_1174 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_propertyTypeName_1320 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property-class.galgas", 32)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property-class.galgas", 33)) ;
  ioArgument_ioDeclarationAST.mProperty_mDeclarationList.addAssign_operation (GALGAS_transientPropertyTypeDeclaration::constructor_new (constinArgument_inIsUserDefined, var_propertyTypeName_1320, var_isClass_1174  COMMA_SOURCE_FILE ("transient-property-class.galgas", 34))  COMMA_SOURCE_FILE ("transient-property-class.galgas", 34)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_class_5F_declaration_i4_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property-class.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("transient-property-class.galgas", 23)) ;
  switch (select_easyBindings_5F_syntax_2 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("transient-property-class.galgas", 26)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_struct COMMA_SOURCE_FILE ("transient-property-class.galgas", 29)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property-class.galgas", 32)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property-class.galgas", 33)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_enum_5F_declaration_i5_ (const GALGAS_bool constinArgument_inIsUserDefined,
                                                                                          GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                          C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("enumeration.galgas", 21)) ;
  GALGAS_lstring var_enumName_1153 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("enumeration.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("enumeration.galgas", 23)) ;
  GALGAS_lstringlist var_enumConstants_1183 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("enumeration.galgas", 24)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_constantName_1266 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("enumeration.galgas", 26)) ;
    var_enumConstants_1183.addAssign_operation (var_constantName_1266  COMMA_SOURCE_FILE ("enumeration.galgas", 27)) ;
    switch (select_easyBindings_5F_syntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("enumeration.galgas", 29)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("enumeration.galgas", 31)) ;
  ioArgument_ioDeclarationAST.mProperty_mDeclarationList.addAssign_operation (GALGAS_enumDeclaration::constructor_new (constinArgument_inIsUserDefined, var_enumName_1153, var_enumConstants_1183  COMMA_SOURCE_FILE ("enumeration.galgas", 32))  COMMA_SOURCE_FILE ("enumeration.galgas", 32)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_enum_5F_declaration_i5_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("enumeration.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("enumeration.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("enumeration.galgas", 23)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("enumeration.galgas", 26)) ;
    switch (select_easyBindings_5F_syntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("enumeration.galgas", 29)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("enumeration.galgas", 31)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_toMany_5F_relationship_i6_ (GALGAS_toManyRelationshipList & ioArgument_ioToManyRelationshipList,
                                                                                             GALGAS_stringset & ioArgument_ioSignatureList,
                                                                                             C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("relationships.galgas", 31)) ;
  GALGAS_bool var_usedForSignature_1574 = GALGAS_bool (false) ;
  GALGAS_bool var_cascading_1602 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_4 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attributeName_1669 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("relationships.galgas", 36)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_attributeName_1669.getter_string (HERE).objectCompare (GALGAS_string ("signature"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        const enumGalgasBool test_2 = var_usedForSignature_1574.boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          fixItArray3.appendObject (C_FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (var_attributeName_1669.getter_location (SOURCE_FILE ("relationships.galgas", 39)), GALGAS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("relationships.galgas", 39)) ;
        }
        var_usedForSignature_1574 = GALGAS_bool (true) ;
      }else if (kBoolFalse == test_1) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_attributeName_1669.getter_string (HERE).objectCompare (GALGAS_string ("cascading"))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const enumGalgasBool test_5 = var_cascading_1602.boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <C_FixItDescription> fixItArray6 ;
            fixItArray6.appendObject (C_FixItDescription (kFixItRemove, "")) ;
            inCompiler->emitSemanticError (var_attributeName_1669.getter_location (SOURCE_FILE ("relationships.galgas", 44)), GALGAS_string ("duplicated attribute"), fixItArray6  COMMA_SOURCE_FILE ("relationships.galgas", 44)) ;
          }
          var_cascading_1602 = GALGAS_bool (true) ;
        }else if (kBoolFalse == test_4) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          appendFixItActions (fixItArray7, kFixItReplace, GALGAS_string ("@signature")) ;
          appendFixItActions (fixItArray7, kFixItReplace, GALGAS_string ("@cascading")) ;
          inCompiler->emitSemanticError (var_attributeName_1669.getter_location (SOURCE_FILE ("relationships.galgas", 48)), GALGAS_string ("unknow attribute"), fixItArray7  COMMA_SOURCE_FILE ("relationships.galgas", 48)) ;
        }
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_destinationEntityName_2230 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("relationships.galgas", 51)) ;
  GALGAS_lstring var_relationshipName_2269 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("relationships.galgas", 52)) ;
  const enumGalgasBool test_8 = var_usedForSignature_1574.boolEnum () ;
  if (kBoolTrue == test_8) {
    ioArgument_ioSignatureList.addAssign_operation (var_relationshipName_2269.getter_string (HERE)  COMMA_SOURCE_FILE ("relationships.galgas", 54)) ;
  }
  GALGAS_lstring var_inserseRelationshipName_2393 ;
  switch (select_easyBindings_5F_syntax_5 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_inverse COMMA_SOURCE_FILE ("relationships.galgas", 58)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("relationships.galgas", 59)) ;
    var_inserseRelationshipName_2393 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("relationships.galgas", 60)) ;
  } break ;
  case 2: {
    var_inserseRelationshipName_2393 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), var_relationshipName_2269.getter_location (HERE)  COMMA_SOURCE_FILE ("relationships.galgas", 62)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("relationships.galgas", 64)) ;
  ioArgument_ioToManyRelationshipList.addAssign_operation (var_destinationEntityName_2230, var_relationshipName_2269, var_inserseRelationshipName_2393, var_cascading_1602  COMMA_SOURCE_FILE ("relationships.galgas", 65)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_toMany_5F_relationship_i6_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("relationships.galgas", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("relationships.galgas", 36)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("relationships.galgas", 51)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("relationships.galgas", 52)) ;
  switch (select_easyBindings_5F_syntax_5 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_inverse COMMA_SOURCE_FILE ("relationships.galgas", 58)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("relationships.galgas", 59)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("relationships.galgas", 60)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("relationships.galgas", 64)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_toOne_5F_relationship_i7_ (GALGAS_toOneRelationshipList & ioArgument_ioToOneRelationshipList,
                                                                                            C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("relationships.galgas", 75)) ;
  GALGAS_bool var_cascading_2945 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_6 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attributeName_3012 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("relationships.galgas", 79)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_attributeName_3012.getter_string (HERE).objectCompare (GALGAS_string ("cascading"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        const enumGalgasBool test_2 = var_cascading_2945.boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          fixItArray3.appendObject (C_FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (var_attributeName_3012.getter_location (SOURCE_FILE ("relationships.galgas", 82)), GALGAS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("relationships.galgas", 82)) ;
        }
        var_cascading_2945 = GALGAS_bool (true) ;
      }else if (kBoolFalse == test_1) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        appendFixItActions (fixItArray4, kFixItReplace, GALGAS_string ("@cascading")) ;
        inCompiler->emitSemanticError (var_attributeName_3012.getter_location (SOURCE_FILE ("relationships.galgas", 86)), GALGAS_string ("unknow attribute"), fixItArray4  COMMA_SOURCE_FILE ("relationships.galgas", 86)) ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_destinationEntityName_3359 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("relationships.galgas", 89)) ;
  GALGAS_lstring var_relationshipName_3407 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("relationships.galgas", 90)) ;
  GALGAS_propertyMultiplicity var_inverseRelationMultiplicity_3461 ;
  GALGAS_lstring var_inverseRelationshipName_3498 ;
  switch (select_easyBindings_5F_syntax_7 (inCompiler)) {
  case 1: {
    var_inverseRelationMultiplicity_3461 = GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("relationships.galgas", 94)) ;
    var_inverseRelationshipName_3498 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 95)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_inverse COMMA_SOURCE_FILE ("relationships.galgas", 97)) ;
    switch (select_easyBindings_5F_syntax_8 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("relationships.galgas", 99)) ;
      var_inverseRelationMultiplicity_3461 = GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("relationships.galgas", 100)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("relationships.galgas", 102)) ;
      var_inverseRelationMultiplicity_3461 = GALGAS_propertyMultiplicity::constructor_collection (SOURCE_FILE ("relationships.galgas", 103)) ;
    } break ;
    default:
      break ;
    }
    var_inverseRelationshipName_3498 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("relationships.galgas", 105)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("relationships.galgas", 107)) ;
  ioArgument_ioToOneRelationshipList.addAssign_operation (var_destinationEntityName_3359, var_relationshipName_3407, var_inverseRelationshipName_3498, var_inverseRelationMultiplicity_3461, var_cascading_2945  COMMA_SOURCE_FILE ("relationships.galgas", 108)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_toOne_5F_relationship_i7_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("relationships.galgas", 75)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("relationships.galgas", 79)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("relationships.galgas", 89)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("relationships.galgas", 90)) ;
  switch (select_easyBindings_5F_syntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_inverse COMMA_SOURCE_FILE ("relationships.galgas", 97)) ;
    switch (select_easyBindings_5F_syntax_8 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("relationships.galgas", 99)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("relationships.galgas", 102)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("relationships.galgas", 105)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("relationships.galgas", 107)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_class_5F_declaration_i8_ (const GALGAS_bool constinArgument_inIsUserDefined,
                                                                                           GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                           C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("class.galgas", 26)) ;
  GALGAS_lstring var_entityName_1365 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("class.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("class.galgas", 28)) ;
  GALGAS_secondaryPropertyList var_secondaryPropertyList_1422 = GALGAS_secondaryPropertyList::constructor_emptyList (SOURCE_FILE ("class.galgas", 29)) ;
  GALGAS_simpleStoredPropertyList var_simpleStoredAttributeList_1483 = GALGAS_simpleStoredPropertyList::constructor_emptyList (SOURCE_FILE ("class.galgas", 30)) ;
  GALGAS_toOneRelationshipList var_toOneRelationshipList_1537 = GALGAS_toOneRelationshipList::constructor_emptyList (SOURCE_FILE ("class.galgas", 31)) ;
  GALGAS_toManyRelationshipList var_toManyRelationshipList_1593 = GALGAS_toManyRelationshipList::constructor_emptyList (SOURCE_FILE ("class.galgas", 32)) ;
  GALGAS_stringset var_signatureList_1627 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("class.galgas", 33)) ;
  GALGAS_externSwiftFunctionList var_externSwiftFunctionList_1685 = GALGAS_externSwiftFunctionList::constructor_emptyList (SOURCE_FILE ("class.galgas", 34)) ;
  GALGAS_externSwiftDelegateList var_externSwiftDelegateList_1743 = GALGAS_externSwiftDelegateList::constructor_emptyList (SOURCE_FILE ("class.galgas", 35)) ;
  GALGAS_lstringlist var_actionDeclarationList_1787 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("class.galgas", 36)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_9 (inCompiler)) {
    case 2: {
      nt_simple_5F_stored_5F_declaration_ (var_simpleStoredAttributeList_1483, var_signatureList_1627, inCompiler) ;
    } break ;
    case 3: {
      nt_transient_5F_declaration_ (var_secondaryPropertyList_1422, inCompiler) ;
    } break ;
    case 4: {
      nt_extern_5F_swift_5F_func_ (var_externSwiftFunctionList_1685, inCompiler) ;
    } break ;
    case 5: {
      nt_extern_5F_swift_5F_delegate_ (var_externSwiftDelegateList_1743, inCompiler) ;
    } break ;
    case 6: {
      nt_action_5F_declaration_ (var_actionDeclarationList_1787, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("class.galgas", 49)) ;
  ioArgument_ioDeclarationAST.mProperty_mDeclarationList.addAssign_operation (GALGAS_classDeclaration::constructor_new (constinArgument_inIsUserDefined, var_entityName_1365, var_simpleStoredAttributeList_1483, var_secondaryPropertyList_1422, var_externSwiftFunctionList_1685, var_externSwiftDelegateList_1743, var_actionDeclarationList_1787  COMMA_SOURCE_FILE ("class.galgas", 50))  COMMA_SOURCE_FILE ("class.galgas", 50)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_class_5F_declaration_i8_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("class.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("class.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("class.galgas", 28)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_9 (inCompiler)) {
    case 2: {
      nt_simple_5F_stored_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_transient_5F_declaration_parse (inCompiler) ;
    } break ;
    case 4: {
      nt_extern_5F_swift_5F_func_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_extern_5F_swift_5F_delegate_parse (inCompiler) ;
    } break ;
    case 6: {
      nt_action_5F_declaration_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("class.galgas", 49)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_entity_5F_declaration_i9_ (const GALGAS_bool constinArgument_inIsUserDefined,
                                                                                            GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                            C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_entity COMMA_SOURCE_FILE ("entity.galgas", 28)) ;
  GALGAS_lstring var_entityName_1419 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.galgas", 29)) ;
  GALGAS_lstring var_superEntityName_1448 ;
  switch (select_easyBindings_5F_syntax_10 (inCompiler)) {
  case 1: {
    var_superEntityName_1448 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("entity.galgas", 32)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("entity.galgas", 34)) ;
    var_superEntityName_1448 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.galgas", 35)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("entity.galgas", 37)) ;
  GALGAS_secondaryPropertyList var_secondaryPropertyList_1615 = GALGAS_secondaryPropertyList::constructor_emptyList (SOURCE_FILE ("entity.galgas", 38)) ;
  GALGAS_simpleStoredPropertyList var_simpleStoredAttributeList_1676 = GALGAS_simpleStoredPropertyList::constructor_emptyList (SOURCE_FILE ("entity.galgas", 39)) ;
  GALGAS_toOneRelationshipList var_toOneRelationshipList_1730 = GALGAS_toOneRelationshipList::constructor_emptyList (SOURCE_FILE ("entity.galgas", 40)) ;
  GALGAS_toManyRelationshipList var_toManyRelationshipList_1786 = GALGAS_toManyRelationshipList::constructor_emptyList (SOURCE_FILE ("entity.galgas", 41)) ;
  GALGAS_stringset var_signatureList_1820 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("entity.galgas", 42)) ;
  GALGAS_lstringlist var_actionDeclarationList_1864 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("entity.galgas", 43)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_11 (inCompiler)) {
    case 2: {
      nt_simple_5F_stored_5F_declaration_ (var_simpleStoredAttributeList_1676, var_signatureList_1820, inCompiler) ;
    } break ;
    case 3: {
      nt_transient_5F_declaration_ (var_secondaryPropertyList_1615, inCompiler) ;
    } break ;
    case 4: {
      nt_toMany_5F_relationship_ (var_toManyRelationshipList_1786, var_signatureList_1820, inCompiler) ;
    } break ;
    case 5: {
      nt_toOne_5F_relationship_ (var_toOneRelationshipList_1730, inCompiler) ;
    } break ;
    case 6: {
      nt_action_5F_declaration_ (var_actionDeclarationList_1864, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("entity.galgas", 56)) ;
  ioArgument_ioDeclarationAST.mProperty_mDeclarationList.addAssign_operation (GALGAS_entityDeclaration::constructor_new (constinArgument_inIsUserDefined, var_entityName_1419, var_superEntityName_1448, var_simpleStoredAttributeList_1676, var_toOneRelationshipList_1730, var_toManyRelationshipList_1786, var_secondaryPropertyList_1615, var_signatureList_1820, var_actionDeclarationList_1864  COMMA_SOURCE_FILE ("entity.galgas", 57))  COMMA_SOURCE_FILE ("entity.galgas", 57)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_entity_5F_declaration_i9_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_entity COMMA_SOURCE_FILE ("entity.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.galgas", 29)) ;
  switch (select_easyBindings_5F_syntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("entity.galgas", 34)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.galgas", 35)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("entity.galgas", 37)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_11 (inCompiler)) {
    case 2: {
      nt_simple_5F_stored_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_transient_5F_declaration_parse (inCompiler) ;
    } break ;
    case 4: {
      nt_toMany_5F_relationship_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_toOne_5F_relationship_parse (inCompiler) ;
    } break ;
    case 6: {
      nt_action_5F_declaration_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("entity.galgas", 56)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_document_5F_declaration_i10_ (const GALGAS_bool constinArgument_inIsUserDefined,
                                                                                               GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                               C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_document COMMA_SOURCE_FILE ("document.galgas", 26)) ;
  GALGAS_lstring var_documentName_1350 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("document.galgas", 28)) ;
  GALGAS_lstring var_rootEntityName_1407 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("document.galgas", 30)) ;
  GALGAS_secondaryPropertyList var_secondaryPropertyList_1464 = GALGAS_secondaryPropertyList::constructor_emptyList (SOURCE_FILE ("document.galgas", 31)) ;
  GALGAS_outletDeclarationList var_outletDeclarationList_1518 = GALGAS_outletDeclarationList::constructor_emptyList (SOURCE_FILE ("document.galgas", 32)) ;
  GALGAS_regularBindingList var_bindingList_1559 = GALGAS_regularBindingList::constructor_emptyList (SOURCE_FILE ("document.galgas", 33)) ;
  GALGAS_lstringlist var_actionDeclarationList_1603 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("document.galgas", 34)) ;
  GALGAS_simpleStoredPropertyList var_simpleStoredPropertyList_1663 = GALGAS_simpleStoredPropertyList::constructor_emptyList (SOURCE_FILE ("document.galgas", 35)) ;
  GALGAS_stringset var_signatureList_1697 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("document.galgas", 36)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_12 (inCompiler)) {
    case 2: {
      nt_simple_5F_stored_5F_declaration_ (var_simpleStoredPropertyList_1663, var_signatureList_1697, inCompiler) ;
    } break ;
    case 3: {
      nt_action_5F_declaration_ (var_actionDeclarationList_1603, inCompiler) ;
    } break ;
    case 4: {
      nt_transient_5F_declaration_ (var_secondaryPropertyList_1464, inCompiler) ;
    } break ;
    case 5: {
      nt_outlet_5F_declaration_ (var_outletDeclarationList_1518, inCompiler) ;
    } break ;
    case 6: {
      nt_array_5F_controller_5F_declaration_ (var_secondaryPropertyList_1464, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("document.galgas", 49)) ;
  var_secondaryPropertyList_1464.addAssign_operation (GALGAS_transientAST::constructor_new (GALGAS_string ("String").getter_here (inCompiler COMMA_SOURCE_FILE ("document.galgas", 52)), GALGAS_bool (false), GALGAS_string ("documentFilePath").getter_here (inCompiler COMMA_SOURCE_FILE ("document.galgas", 54)), GALGAS_observablePropertyList::constructor_emptyList (SOURCE_FILE ("document.galgas", 55))  COMMA_SOURCE_FILE ("document.galgas", 51))  COMMA_SOURCE_FILE ("document.galgas", 51)) ;
  ioArgument_ioDeclarationAST.mProperty_mDeclarationList.addAssign_operation (GALGAS_documentDeclaration::constructor_new (constinArgument_inIsUserDefined, var_documentName_1350, var_rootEntityName_1407, var_outletDeclarationList_1518, var_simpleStoredPropertyList_1663, var_actionDeclarationList_1603, var_secondaryPropertyList_1464  COMMA_SOURCE_FILE ("document.galgas", 58))  COMMA_SOURCE_FILE ("document.galgas", 58)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_document_5F_declaration_i10_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_document COMMA_SOURCE_FILE ("document.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("document.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("document.galgas", 30)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_12 (inCompiler)) {
    case 2: {
      nt_simple_5F_stored_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_action_5F_declaration_parse (inCompiler) ;
    } break ;
    case 4: {
      nt_transient_5F_declaration_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_outlet_5F_declaration_parse (inCompiler) ;
    } break ;
    case 6: {
      nt_array_5F_controller_5F_declaration_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("document.galgas", 49)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_preferences_5F_declaration_i11_ (const GALGAS_bool /* constinArgument_inIsUserDefined */,
                                                                                                  GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                  C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("preferences.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("preferences.galgas", 30)) ;
  GALGAS_stringset var_signatureList_1511 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("preferences.galgas", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_13 (inCompiler)) {
    case 2: {
      nt_action_5F_declaration_ (ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mActionDeclarationList, inCompiler) ;
    } break ;
    case 3: {
      nt_simple_5F_stored_5F_declaration_ (ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mSimpleStoredAttributeList, var_signatureList_1511, inCompiler) ;
    } break ;
    case 4: {
      nt_outlet_5F_declaration_ (ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mOutletDeclarationList, inCompiler) ;
    } break ;
    case 5: {
      nt_transient_5F_declaration_ (ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mSecondaryPropertyList, inCompiler) ;
    } break ;
    case 6: {
      nt_extern_5F_swift_5F_func_ (ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mExternSwiftFunctionList, inCompiler) ;
    } break ;
    case 7: {
      nt_stored_5F_array_5F_declaration_ (ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mStoredArrayList, inCompiler) ;
    } break ;
    case 8: {
      nt_array_5F_controller_5F_declaration_ (ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mSecondaryPropertyList, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mSignatureList.plusAssign_operation(var_signatureList_1511, inCompiler  COMMA_SOURCE_FILE ("preferences.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("preferences.galgas", 51)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_preferences_5F_declaration_i11_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("preferences.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("preferences.galgas", 30)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_13 (inCompiler)) {
    case 2: {
      nt_action_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_simple_5F_stored_5F_declaration_parse (inCompiler) ;
    } break ;
    case 4: {
      nt_outlet_5F_declaration_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_transient_5F_declaration_parse (inCompiler) ;
    } break ;
    case 6: {
      nt_extern_5F_swift_5F_func_parse (inCompiler) ;
    } break ;
    case 7: {
      nt_stored_5F_array_5F_declaration_parse (inCompiler) ;
    } break ;
    case 8: {
      nt_array_5F_controller_5F_declaration_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("preferences.galgas", 51)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i12_ (const GALGAS_bool constinArgument_inIsUserDefined,
                                                                                                      GALGAS_outletClassDeclarationList & ioArgument_ioOutletClassDeclarationList,
                                                                                                      C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_extern COMMA_SOURCE_FILE ("outlet-class.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_outlet COMMA_SOURCE_FILE ("outlet-class.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("outlet-class.galgas", 27)) ;
  GALGAS_lstring var_outletClassName_1270 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-class.galgas", 28)) ;
  GALGAS_bool var_hasRunAction_1293 = GALGAS_bool (false) ;
  GALGAS_bool var_hasEnabled_1322 = GALGAS_bool (false) ;
  GALGAS_bool var_handlesTableViewBinding_1364 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_tableValue COMMA_SOURCE_FILE ("outlet-class.galgas", 34)) ;
      var_handlesTableViewBinding_1364 = GALGAS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("outlet-class.galgas", 37)) ;
      var_hasRunAction_1293 = GALGAS_bool (true) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("outlet-class.galgas", 40)) ;
      var_hasEnabled_1322 = GALGAS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("outlet-class.galgas", 43)) ;
  ioArgument_ioOutletClassDeclarationList.addAssign_operation (constinArgument_inIsUserDefined, var_outletClassName_1270, var_hasRunAction_1293, var_hasEnabled_1322, var_handlesTableViewBinding_1364  COMMA_SOURCE_FILE ("outlet-class.galgas", 44)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i12_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_extern COMMA_SOURCE_FILE ("outlet-class.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_outlet COMMA_SOURCE_FILE ("outlet-class.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("outlet-class.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-class.galgas", 28)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_tableValue COMMA_SOURCE_FILE ("outlet-class.galgas", 34)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("outlet-class.galgas", 37)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("outlet-class.galgas", 40)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("outlet-class.galgas", 43)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_binding_5F_specification_i13_ (const GALGAS_bool constinArgument_inIsUserDefined,
                                                                                                GALGAS_bindingSpecificationListMap & ioArgument_ioControllerTemplateList,
                                                                                                C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_binding COMMA_SOURCE_FILE ("binding-specification.galgas", 42)) ;
  GALGAS_lstring var_outletClassName_1956 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("binding-specification.galgas", 43)) ;
  GALGAS_lstring var_bindingName_2000 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("binding-specification.galgas", 44)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("binding-specification.galgas", 45)) ;
  GALGAS_outletClassBindingSpecificationModelList var_outletClassBindingSpecificationModelList_2095 = GALGAS_outletClassBindingSpecificationModelList::constructor_emptyList (SOURCE_FILE ("binding-specification.galgas", 46)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_bool var_modelShouldBeWritableProperty_2153 ;
    switch (select_easyBindings_5F_syntax_16 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("binding-specification.galgas", 50)) ;
      var_modelShouldBeWritableProperty_2153 = GALGAS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("binding-specification.galgas", 53)) ;
      var_modelShouldBeWritableProperty_2153 = GALGAS_bool (false) ;
    } break ;
    default:
      break ;
    }
    GALGAS_lstring var_modelTypeName_2344 ;
    switch (select_easyBindings_5F_syntax_17 (inCompiler)) {
    case 1: {
      var_modelTypeName_2344 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("binding-specification.galgas", 58)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("binding-specification.galgas", 60)) ;
      var_modelTypeName_2344 = GALGAS_lstring::constructor_new (GALGAS_string ("enum"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("binding-specification.galgas", 61))  COMMA_SOURCE_FILE ("binding-specification.galgas", 61)) ;
    } break ;
    default:
      break ;
    }
    var_outletClassBindingSpecificationModelList_2095.addAssign_operation (var_modelTypeName_2344, var_modelShouldBeWritableProperty_2153  COMMA_SOURCE_FILE ("binding-specification.galgas", 63)) ;
    switch (select_easyBindings_5F_syntax_15 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("binding-specification.galgas", 65)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_controllerBindingOptionList var_bindingOptionList_2648 = GALGAS_controllerBindingOptionList::constructor_emptyList (SOURCE_FILE ("binding-specification.galgas", 67)) ;
  switch (select_easyBindings_5F_syntax_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("binding-specification.galgas", 70)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GALGAS_lstring var_optionName_2740 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("binding-specification.galgas", 72)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("binding-specification.galgas", 73)) ;
      GALGAS_lstring var_optionType_2798 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("binding-specification.galgas", 74)) ;
      var_bindingOptionList_2648.addAssign_operation (var_optionName_2740, var_optionType_2798  COMMA_SOURCE_FILE ("binding-specification.galgas", 75)) ;
      switch (select_easyBindings_5F_syntax_19 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("binding-specification.galgas", 77)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("binding-specification.galgas", 79)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("binding-specification.galgas", 81)) ;
  ioArgument_ioControllerTemplateList.addAssign_operation (var_outletClassName_1956.getter_string (HERE), constinArgument_inIsUserDefined, var_bindingName_2000, var_outletClassBindingSpecificationModelList_2095, var_bindingOptionList_2648  COMMA_SOURCE_FILE ("binding-specification.galgas", 82)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_binding_5F_specification_i13_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_binding COMMA_SOURCE_FILE ("binding-specification.galgas", 42)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("binding-specification.galgas", 43)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("binding-specification.galgas", 44)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("binding-specification.galgas", 45)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_16 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("binding-specification.galgas", 50)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("binding-specification.galgas", 53)) ;
    } break ;
    default:
      break ;
    }
    switch (select_easyBindings_5F_syntax_17 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("binding-specification.galgas", 58)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("binding-specification.galgas", 60)) ;
    } break ;
    default:
      break ;
    }
    switch (select_easyBindings_5F_syntax_15 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("binding-specification.galgas", 65)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_easyBindings_5F_syntax_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("binding-specification.galgas", 70)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("binding-specification.galgas", 72)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("binding-specification.galgas", 73)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("binding-specification.galgas", 74)) ;
      switch (select_easyBindings_5F_syntax_19 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("binding-specification.galgas", 77)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("binding-specification.galgas", 79)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("binding-specification.galgas", 81)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_declaration_i14_ (GALGAS_outletDeclarationList & ioArgument_ioOutletDeclarationList,
                                                                                             C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_outlet COMMA_SOURCE_FILE ("outlet-declaration.galgas", 38)) ;
  GALGAS_lstring var_outletTypeName_1779 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas", 39)) ;
  GALGAS_lstring var_outletName_1812 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas", 40)) ;
  GALGAS_tableValueBinding var_tableValueBinding_1838 = GALGAS_tableValueBinding::constructor_noTableValueBinding (SOURCE_FILE ("outlet-declaration.galgas", 41)) ;
  GALGAS_runActionDescriptor var_runActionDescriptor_1908 = GALGAS_runActionDescriptor::constructor_noAction (SOURCE_FILE ("outlet-declaration.galgas", 42)) ;
  GALGAS_multipleBindingDescriptor var_enabledBindingDescriptor_1974 = GALGAS_multipleBindingDescriptor::constructor_noBinding (SOURCE_FILE ("outlet-declaration.galgas", 43)) ;
  GALGAS_multipleBindingDescriptor var_hiddenBindingDescriptor_2045 = GALGAS_multipleBindingDescriptor::constructor_noBinding (SOURCE_FILE ("outlet-declaration.galgas", 44)) ;
  GALGAS_regularBindingList var_regularBindingList_2127 = GALGAS_regularBindingList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 45)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_20 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_tableValue COMMA_SOURCE_FILE ("outlet-declaration.galgas", 48)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_tableValueBinding_1838.objectCompare (GALGAS_tableValueBinding::constructor_noTableValueBinding (SOURCE_FILE ("outlet-declaration.galgas", 49)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 50)), GALGAS_string ("duplicated $tableValue binding"), fixItArray2  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 50)) ;
      }
      GALGAS_lstring var_controllerName_2341 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas", 52)) ;
      var_tableValueBinding_1838 = GALGAS_tableValueBinding::constructor_tableValueBinding (var_controllerName_2341  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 53)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("outlet-declaration.galgas", 55)) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_runActionDescriptor_1908.objectCompare (GALGAS_runActionDescriptor::constructor_noAction (SOURCE_FILE ("outlet-declaration.galgas", 56)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 57)), GALGAS_string ("duplicated $run binding"), fixItArray4  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 57)) ;
      }
      GALGAS_lstring var_runTargetName_2575 ;
      switch (select_easyBindings_5F_syntax_21 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("outlet-declaration.galgas", 61)) ;
        var_runTargetName_2575 = GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 62))  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 62)) ;
      } break ;
      case 2: {
        var_runTargetName_2575 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas", 64)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("outlet-declaration.galgas", 66)) ;
      GALGAS_lstring var_runActionName_2769 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas", 67)) ;
      var_runActionDescriptor_1908 = GALGAS_runActionDescriptor::constructor_action (var_runTargetName_2575, var_runActionName_2769  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 68)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("outlet-declaration.galgas", 71)) ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, var_enabledBindingDescriptor_1974.objectCompare (GALGAS_multipleBindingDescriptor::constructor_noBinding (SOURCE_FILE ("outlet-declaration.galgas", 72)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 73)), GALGAS_string ("duplicated $enabled binding"), fixItArray6  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 73)) ;
      }
      GALGAS_abstractBooleanMultipleBindingExpressionAST var_bindingExpression_3116 ;
      nt_booleanMultipleBindingExpression_ (var_bindingExpression_3116, inCompiler) ;
      var_enabledBindingDescriptor_1974 = GALGAS_multipleBindingDescriptor::constructor_binding (var_bindingExpression_3116  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 76)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("outlet-declaration.galgas", 79)) ;
      const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, var_hiddenBindingDescriptor_2045.objectCompare (GALGAS_multipleBindingDescriptor::constructor_noBinding (SOURCE_FILE ("outlet-declaration.galgas", 80)))).boolEnum () ;
      if (kBoolTrue == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 81)), GALGAS_string ("duplicated $hidden binding"), fixItArray8  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 81)) ;
      }
      GALGAS_abstractBooleanMultipleBindingExpressionAST var_bindingExpression_3451 ;
      nt_booleanMultipleBindingExpression_ (var_bindingExpression_3451, inCompiler) ;
      var_hiddenBindingDescriptor_2045 = GALGAS_multipleBindingDescriptor::constructor_binding (var_bindingExpression_3451  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 84)) ;
    } break ;
    case 6: {
      GALGAS_lstring var_bindingName_3603 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("outlet-declaration.galgas", 87)) ;
      GALGAS_observablePropertyList var_observablePropertyList_3656 = GALGAS_observablePropertyList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 88)) ;
      bool repeatFlag_9 = true ;
      while (repeatFlag_9) {
        GALGAS_observablePropertyAST var_observableProperty_3751 ;
        nt_observable_5F_property_ (var_observableProperty_3751, inCompiler) ;
        var_observablePropertyList_3656.addAssign_operation (var_observableProperty_3751  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 91)) ;
        switch (select_easyBindings_5F_syntax_22 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("outlet-declaration.galgas", 93)) ;
        } break ;
        default:
          repeatFlag_9 = false ;
          break ;
        }
      }
      GALGAS_bindingOptionList var_bindingOptions_3887 ;
      nt_binding_5F_option_5F_list_ (var_bindingOptions_3887, inCompiler) ;
      var_regularBindingList_2127.addAssign_operation (var_bindingName_3603, var_observablePropertyList_3656, var_bindingOptions_3887  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 96)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("outlet-declaration.galgas", 102)) ;
  ioArgument_ioOutletDeclarationList.addAssign_operation (var_outletTypeName_1779, var_outletName_1812, var_tableValueBinding_1838, var_runActionDescriptor_1908, var_enabledBindingDescriptor_1974, var_hiddenBindingDescriptor_2045, var_regularBindingList_2127  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 103)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_declaration_i14_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_outlet COMMA_SOURCE_FILE ("outlet-declaration.galgas", 38)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas", 40)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_20 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_tableValue COMMA_SOURCE_FILE ("outlet-declaration.galgas", 48)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas", 52)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("outlet-declaration.galgas", 55)) ;
      switch (select_easyBindings_5F_syntax_21 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("outlet-declaration.galgas", 61)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas", 64)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("outlet-declaration.galgas", 66)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas", 67)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("outlet-declaration.galgas", 71)) ;
      nt_booleanMultipleBindingExpression_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("outlet-declaration.galgas", 79)) ;
      nt_booleanMultipleBindingExpression_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("outlet-declaration.galgas", 87)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        nt_observable_5F_property_parse (inCompiler) ;
        switch (select_easyBindings_5F_syntax_22 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("outlet-declaration.galgas", 93)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      nt_binding_5F_option_5F_list_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("outlet-declaration.galgas", 102)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_observable_5F_property_i15_ (GALGAS_observablePropertyAST & outArgument_outObservablePropertyAST,
                                                                                              C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outObservablePropertyAST.drop () ; // Release 'out' argument
  switch (select_easyBindings_5F_syntax_23 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("observable-property.galgas", 39)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 40)) ;
    GALGAS_lstring var_propertyName_2134 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 41)) ;
    switch (select_easyBindings_5F_syntax_24 (inCompiler)) {
    case 1: {
      outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_rootProperty (var_propertyName_2134  COMMA_SOURCE_FILE ("observable-property.galgas", 43)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 45)) ;
      switch (select_easyBindings_5F_syntax_25 (inCompiler)) {
      case 1: {
        GALGAS_lstring var_optionName_2300 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 47)) ;
        outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_rootPropertyWithOption (var_propertyName_2134, var_optionName_2300  COMMA_SOURCE_FILE ("observable-property.galgas", 48)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.galgas", 50)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 51)) ;
        GALGAS_lstring var_observablePropertyName_2505 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 52)) ;
        outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_rootPropertyRelationship (var_propertyName_2134, var_observablePropertyName_2505  COMMA_SOURCE_FILE ("observable-property.galgas", 53)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("observable-property.galgas", 59)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 60)) ;
    GALGAS_lstring var_propertyName_2751 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 61)) ;
    switch (select_easyBindings_5F_syntax_26 (inCompiler)) {
    case 1: {
      outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_selfProperty (var_propertyName_2751  COMMA_SOURCE_FILE ("observable-property.galgas", 63)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 65)) ;
      switch (select_easyBindings_5F_syntax_27 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.galgas", 67)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 68)) ;
        GALGAS_lstring var_elementPropertyName_2958 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 69)) ;
        outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_selfPropertyArray (var_propertyName_2751, var_elementPropertyName_2958  COMMA_SOURCE_FILE ("observable-property.galgas", 70)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_one COMMA_SOURCE_FILE ("observable-property.galgas", 72)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 73)) ;
        GALGAS_lstring var_elementPropertyName_3173 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 74)) ;
        outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_selfPropertyObject (var_propertyName_2751, var_elementPropertyName_3173  COMMA_SOURCE_FILE ("observable-property.galgas", 75)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_none COMMA_SOURCE_FILE ("observable-property.galgas", 77)) ;
        outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_selfPropertyNone (var_propertyName_2751  COMMA_SOURCE_FILE ("observable-property.galgas", 78)) ;
      } break ;
      case 4: {
        GALGAS_lstring var_optionName_3462 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 80)) ;
        outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_selfPropertyWithOption (var_propertyName_2751, var_optionName_3462  COMMA_SOURCE_FILE ("observable-property.galgas", 81)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      break ;
    }
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("observable-property.galgas", 85)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 86)) ;
    GALGAS_lstring var_propertyName_3665 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 87)) ;
    switch (select_easyBindings_5F_syntax_28 (inCompiler)) {
    case 1: {
      outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_prefsProperty (var_propertyName_3665  COMMA_SOURCE_FILE ("observable-property.galgas", 89)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 91)) ;
      GALGAS_lstring var_optionName_3817 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 92)) ;
      outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_prefsPropertyWithOption (var_propertyName_3665, var_optionName_3817  COMMA_SOURCE_FILE ("observable-property.galgas", 93)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    GALGAS_lstring var_controllerName_3985 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 96)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 97)) ;
    GALGAS_lstring var_propertyName_4032 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 98)) ;
    switch (select_easyBindings_5F_syntax_29 (inCompiler)) {
    case 1: {
      outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_controllerProperty (var_controllerName_3985, var_propertyName_4032  COMMA_SOURCE_FILE ("observable-property.galgas", 100)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 102)) ;
      GALGAS_lstring var_secondaryPropertyName_4229 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 103)) ;
      outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_controllerSecondaryProperty (var_controllerName_3985, var_propertyName_4032, var_secondaryPropertyName_4229  COMMA_SOURCE_FILE ("observable-property.galgas", 104)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_signature COMMA_SOURCE_FILE ("observable-property.galgas", 111)) ;
    outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_signatureProperty (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("observable-property.galgas", 112))  COMMA_SOURCE_FILE ("observable-property.galgas", 112)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_version COMMA_SOURCE_FILE ("observable-property.galgas", 114)) ;
    outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_versionProperty (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("observable-property.galgas", 115))  COMMA_SOURCE_FILE ("observable-property.galgas", 115)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange COMMA_SOURCE_FILE ("observable-property.galgas", 117)) ;
    outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_versionShouldChangeProperty (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("observable-property.galgas", 118))  COMMA_SOURCE_FILE ("observable-property.galgas", 118)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_observable_5F_property_i15_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_23 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("observable-property.galgas", 39)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 40)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 41)) ;
    switch (select_easyBindings_5F_syntax_24 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 45)) ;
      switch (select_easyBindings_5F_syntax_25 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 47)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.galgas", 50)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 51)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 52)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("observable-property.galgas", 59)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 60)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 61)) ;
    switch (select_easyBindings_5F_syntax_26 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 65)) ;
      switch (select_easyBindings_5F_syntax_27 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.galgas", 67)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 68)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 69)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_one COMMA_SOURCE_FILE ("observable-property.galgas", 72)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 73)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 74)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_none COMMA_SOURCE_FILE ("observable-property.galgas", 77)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 80)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      break ;
    }
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("observable-property.galgas", 85)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 86)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 87)) ;
    switch (select_easyBindings_5F_syntax_28 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 91)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 92)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 96)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 97)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 98)) ;
    switch (select_easyBindings_5F_syntax_29 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 102)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 103)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_signature COMMA_SOURCE_FILE ("observable-property.galgas", 111)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_version COMMA_SOURCE_FILE ("observable-property.galgas", 114)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange COMMA_SOURCE_FILE ("observable-property.galgas", 117)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_transient_5F_declaration_i16_ (GALGAS_secondaryPropertyList & ioArgument_ioSecondaryPropertyList,
                                                                                                C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property.galgas", 23)) ;
  GALGAS_bool var_isArray_1181 ;
  switch (select_easyBindings_5F_syntax_30 (inCompiler)) {
  case 1: {
    var_isArray_1181 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_array COMMA_SOURCE_FILE ("transient-property.galgas", 28)) ;
    var_isArray_1181 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_transientTypeName_1313 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property.galgas", 31)) ;
  GALGAS_lstring var_transientName_1358 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("transient-property.galgas", 32)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_dependsFrom COMMA_SOURCE_FILE ("transient-property.galgas", 33)) ;
  GALGAS_observablePropertyList var_dependanceList_1419 = GALGAS_observablePropertyList::constructor_emptyList (SOURCE_FILE ("transient-property.galgas", 34)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_observablePropertyAST var_observablePropertyAST_1513 ;
    nt_observable_5F_property_ (var_observablePropertyAST_1513, inCompiler) ;
    var_dependanceList_1419.addAssign_operation (var_observablePropertyAST_1513  COMMA_SOURCE_FILE ("transient-property.galgas", 37)) ;
    switch (select_easyBindings_5F_syntax_31 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("transient-property.galgas", 39)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property.galgas", 41)) ;
  ioArgument_ioSecondaryPropertyList.addAssign_operation (GALGAS_transientAST::constructor_new (var_transientTypeName_1313, var_isArray_1181, var_transientName_1358, var_dependanceList_1419  COMMA_SOURCE_FILE ("transient-property.galgas", 42))  COMMA_SOURCE_FILE ("transient-property.galgas", 42)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_transient_5F_declaration_i16_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property.galgas", 23)) ;
  switch (select_easyBindings_5F_syntax_30 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_array COMMA_SOURCE_FILE ("transient-property.galgas", 28)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("transient-property.galgas", 32)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_dependsFrom COMMA_SOURCE_FILE ("transient-property.galgas", 33)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_observable_5F_property_parse (inCompiler) ;
    switch (select_easyBindings_5F_syntax_31 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("transient-property.galgas", 39)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property.galgas", 41)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i17_ (GALGAS_simpleStoredPropertyList & ioArgument_ioAttributeList,
                                                                                                       GALGAS_stringset & ioArgument_ioSignatureList,
                                                                                                       C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("simple-stored-property.galgas", 24)) ;
  GALGAS_bool var_usedForSignature_1205 = GALGAS_bool (false) ;
  GALGAS_bool var_needsValidation_1239 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_32 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attributeName_1306 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("simple-stored-property.galgas", 29)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_attributeName_1306.getter_string (HERE).objectCompare (GALGAS_string ("signature"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        const enumGalgasBool test_2 = var_needsValidation_1239.boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          fixItArray3.appendObject (C_FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (var_attributeName_1306.getter_location (SOURCE_FILE ("simple-stored-property.galgas", 32)), GALGAS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 32)) ;
        }
        var_usedForSignature_1205 = GALGAS_bool (true) ;
      }else if (kBoolFalse == test_1) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_attributeName_1306.getter_string (HERE).objectCompare (GALGAS_string ("validation"))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const enumGalgasBool test_5 = var_needsValidation_1239.boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <C_FixItDescription> fixItArray6 ;
            fixItArray6.appendObject (C_FixItDescription (kFixItRemove, "")) ;
            inCompiler->emitSemanticError (var_attributeName_1306.getter_location (SOURCE_FILE ("simple-stored-property.galgas", 37)), GALGAS_string ("duplicated attribute"), fixItArray6  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 37)) ;
          }
          var_needsValidation_1239 = GALGAS_bool (true) ;
        }else if (kBoolFalse == test_4) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          appendFixItActions (fixItArray7, kFixItReplace, GALGAS_string ("@signature")) ;
          appendFixItActions (fixItArray7, kFixItReplace, GALGAS_string ("@validation")) ;
          inCompiler->emitSemanticError (var_attributeName_1306.getter_location (SOURCE_FILE ("simple-stored-property.galgas", 41)), GALGAS_string ("unknow attribute"), fixItArray7  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 41)) ;
        }
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_attributeTypeName_1885 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("simple-stored-property.galgas", 44)) ;
  GALGAS_lstring var_attributeName_1930 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("simple-stored-property.galgas", 45)) ;
  const enumGalgasBool test_8 = var_usedForSignature_1205.boolEnum () ;
  if (kBoolTrue == test_8) {
    ioArgument_ioSignatureList.addAssign_operation (var_attributeName_1930.getter_string (HERE)  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 47)) ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_default COMMA_SOURCE_FILE ("simple-stored-property.galgas", 49)) ;
  GALGAS_abstractDefaultValue var_defaultValue_2089 ;
  nt_explicit_5F_value_ (var_defaultValue_2089, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("simple-stored-property.galgas", 51)) ;
  ioArgument_ioAttributeList.addAssign_operation (var_attributeTypeName_1885, var_attributeName_1930, var_defaultValue_2089, var_needsValidation_1239  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 52)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i17_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("simple-stored-property.galgas", 24)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_32 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("simple-stored-property.galgas", 29)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("simple-stored-property.galgas", 44)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("simple-stored-property.galgas", 45)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_default COMMA_SOURCE_FILE ("simple-stored-property.galgas", 49)) ;
  nt_explicit_5F_value_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("simple-stored-property.galgas", 51)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_stored_5F_array_5F_declaration_i18_ (GALGAS_storedArrayPropertyList & ioArgument_ioStoredArrayList,
                                                                                                      C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_array COMMA_SOURCE_FILE ("stored-array-property.galgas", 21)) ;
  GALGAS_lstring var_elementClassName_1137 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("stored-array-property.galgas", 22)) ;
  GALGAS_lstring var_storedArrayPropertyName_1192 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("stored-array-property.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("stored-array-property.galgas", 24)) ;
  ioArgument_ioStoredArrayList.addAssign_operation (var_elementClassName_1137, var_storedArrayPropertyName_1192  COMMA_SOURCE_FILE ("stored-array-property.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_stored_5F_array_5F_declaration_i18_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_array COMMA_SOURCE_FILE ("stored-array-property.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("stored-array-property.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("stored-array-property.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("stored-array-property.galgas", 24)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_action_5F_declaration_i19_ (GALGAS_lstringlist & ioArgument_ioActionDeclarationList,
                                                                                             C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_action COMMA_SOURCE_FILE ("run-action.galgas", 20)) ;
  GALGAS_lstring var_actionName_1115 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("run-action.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("run-action.galgas", 22)) ;
  ioArgument_ioActionDeclarationList.addAssign_operation (var_actionName_1115  COMMA_SOURCE_FILE ("run-action.galgas", 23)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_action_5F_declaration_i19_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_action COMMA_SOURCE_FILE ("run-action.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("run-action.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("run-action.galgas", 22)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i20_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                        C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  nt_booleanMultipleBindingComparison_ (outArgument_outBinding, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_33 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 75)) ;
      GALGAS_abstractBooleanMultipleBindingExpressionAST var_binding_3354 ;
      nt_booleanMultipleBindingComparison_ (var_binding_3354, inCompiler) ;
      outArgument_outBinding = GALGAS_andBooleanMultipleBindingExpressionAST::constructor_new (outArgument_outBinding, var_binding_3354  COMMA_SOURCE_FILE ("multiple-binding.galgas", 77)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i20_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  nt_booleanMultipleBindingComparison_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_33 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 75)) ;
      nt_booleanMultipleBindingComparison_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i21_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                        C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  nt_booleanMultipleBindingTerm_ (outArgument_outBinding, inCompiler) ;
  switch (select_easyBindings_5F_syntax_34 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 87)) ;
    GALGAS_abstractBooleanMultipleBindingExpressionAST var_rightBinding_3809 ;
    nt_booleanMultipleBindingTerm_ (var_rightBinding_3809, inCompiler) ;
    outArgument_outBinding = GALGAS_comparisonMultipleBindingExpressionAST::constructor_new (outArgument_outBinding, GALGAS_multipleBindingComparisonAST::constructor_greater (SOURCE_FILE ("multiple-binding.galgas", 89)), var_rightBinding_3809  COMMA_SOURCE_FILE ("multiple-binding.galgas", 89)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 91)) ;
    GALGAS_abstractBooleanMultipleBindingExpressionAST var_rightBinding_3981 ;
    nt_booleanMultipleBindingTerm_ (var_rightBinding_3981, inCompiler) ;
    outArgument_outBinding = GALGAS_comparisonMultipleBindingExpressionAST::constructor_new (outArgument_outBinding, GALGAS_multipleBindingComparisonAST::constructor_greaterOrEqual (SOURCE_FILE ("multiple-binding.galgas", 93)), var_rightBinding_3981  COMMA_SOURCE_FILE ("multiple-binding.galgas", 93)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 95)) ;
    GALGAS_abstractBooleanMultipleBindingExpressionAST var_rightBinding_4160 ;
    nt_booleanMultipleBindingTerm_ (var_rightBinding_4160, inCompiler) ;
    outArgument_outBinding = GALGAS_comparisonMultipleBindingExpressionAST::constructor_new (outArgument_outBinding, GALGAS_multipleBindingComparisonAST::constructor_lowerOrEqual (SOURCE_FILE ("multiple-binding.galgas", 97)), var_rightBinding_4160  COMMA_SOURCE_FILE ("multiple-binding.galgas", 97)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 99)) ;
    GALGAS_abstractBooleanMultipleBindingExpressionAST var_rightBinding_4336 ;
    nt_booleanMultipleBindingTerm_ (var_rightBinding_4336, inCompiler) ;
    outArgument_outBinding = GALGAS_comparisonMultipleBindingExpressionAST::constructor_new (outArgument_outBinding, GALGAS_multipleBindingComparisonAST::constructor_lower (SOURCE_FILE ("multiple-binding.galgas", 101)), var_rightBinding_4336  COMMA_SOURCE_FILE ("multiple-binding.galgas", 101)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 103)) ;
    GALGAS_abstractBooleanMultipleBindingExpressionAST var_rightBinding_4506 ;
    nt_booleanMultipleBindingTerm_ (var_rightBinding_4506, inCompiler) ;
    outArgument_outBinding = GALGAS_comparisonMultipleBindingExpressionAST::constructor_new (outArgument_outBinding, GALGAS_multipleBindingComparisonAST::constructor_equal (SOURCE_FILE ("multiple-binding.galgas", 105)), var_rightBinding_4506  COMMA_SOURCE_FILE ("multiple-binding.galgas", 105)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 107)) ;
    GALGAS_abstractBooleanMultipleBindingExpressionAST var_rightBinding_4676 ;
    nt_booleanMultipleBindingTerm_ (var_rightBinding_4676, inCompiler) ;
    outArgument_outBinding = GALGAS_comparisonMultipleBindingExpressionAST::constructor_new (outArgument_outBinding, GALGAS_multipleBindingComparisonAST::constructor_notEqual (SOURCE_FILE ("multiple-binding.galgas", 109)), var_rightBinding_4676  COMMA_SOURCE_FILE ("multiple-binding.galgas", 109)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i21_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  nt_booleanMultipleBindingTerm_parse (inCompiler) ;
  switch (select_easyBindings_5F_syntax_34 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 87)) ;
    nt_booleanMultipleBindingTerm_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 91)) ;
    nt_booleanMultipleBindingTerm_parse (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 95)) ;
    nt_booleanMultipleBindingTerm_parse (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 99)) ;
    nt_booleanMultipleBindingTerm_parse (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 103)) ;
    nt_booleanMultipleBindingTerm_parse (inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 107)) ;
    nt_booleanMultipleBindingTerm_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i22_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                  C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  nt_booleanMultipleBindingOperand_ (outArgument_outBinding, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_35 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 121)) ;
      GALGAS_abstractBooleanMultipleBindingExpressionAST var_binding_5194 ;
      nt_booleanMultipleBindingOperand_ (var_binding_5194, inCompiler) ;
      outArgument_outBinding = GALGAS_orBooleanMultipleBindingExpressionAST::constructor_new (outArgument_outBinding, var_binding_5194  COMMA_SOURCE_FILE ("multiple-binding.galgas", 123)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 125)) ;
      GALGAS_abstractBooleanMultipleBindingExpressionAST var_binding_5397 ;
      nt_booleanMultipleBindingOperand_ (var_binding_5397, inCompiler) ;
      outArgument_outBinding = GALGAS_xorBooleanMultipleBindingExpressionAST::constructor_new (outArgument_outBinding, var_binding_5397  COMMA_SOURCE_FILE ("multiple-binding.galgas", 127)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i22_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  nt_booleanMultipleBindingOperand_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_35 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 121)) ;
      nt_booleanMultipleBindingOperand_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 125)) ;
      nt_booleanMultipleBindingOperand_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i23_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                     C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  GALGAS_observablePropertyAST var_observablePropertyAST_5805 ;
  nt_observable_5F_property_ (var_observablePropertyAST_5805, inCompiler) ;
  outArgument_outBinding = GALGAS_observablePropertyInMultipleBindingExpressionAST::constructor_new (var_observablePropertyAST_5805  COMMA_SOURCE_FILE ("multiple-binding.galgas", 137)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i23_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  nt_observable_5F_property_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i24_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                     C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 145)) ;
  GALGAS_abstractBooleanMultipleBindingExpressionAST var_binding_6240 ;
  nt_booleanMultipleBindingOperand_ (var_binding_6240, inCompiler) ;
  outArgument_outBinding = GALGAS_negateBooleanMultipleBindingExpressionAST::constructor_new (var_binding_6240  COMMA_SOURCE_FILE ("multiple-binding.galgas", 147)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i24_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 145)) ;
  nt_booleanMultipleBindingOperand_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i25_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                     C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 155)) ;
  nt_booleanMultipleBindingExpression_ (outArgument_outBinding, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 157)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i25_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 155)) ;
  nt_booleanMultipleBindingExpression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 157)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i26_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                     C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  GALGAS_luint var_value_6887 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("multiple-binding.galgas", 165)) ;
  outArgument_outBinding = GALGAS_literalIntMultipleBindingExpressionAST::constructor_new (var_value_6887  COMMA_SOURCE_FILE ("multiple-binding.galgas", 166)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i26_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("multiple-binding.galgas", 165)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i27_ (GALGAS_bindingOptionList & outArgument_outBindingOptions,
                                                                                                 C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBindingOptions.drop () ; // Release 'out' argument
  outArgument_outBindingOptions = GALGAS_bindingOptionList::constructor_emptyList (SOURCE_FILE ("regular-binding.galgas", 20)) ;
  switch (select_easyBindings_5F_syntax_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("regular-binding.galgas", 23)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_optionName_1217 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("regular-binding.galgas", 25)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("regular-binding.galgas", 26)) ;
      GALGAS_abstractDefaultValue var_optionValue_1293 ;
      nt_explicit_5F_value_ (var_optionValue_1293, inCompiler) ;
      outArgument_outBindingOptions.addAssign_operation (var_optionName_1217, var_optionValue_1293  COMMA_SOURCE_FILE ("regular-binding.galgas", 28)) ;
      switch (select_easyBindings_5F_syntax_37 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("regular-binding.galgas", 30)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("regular-binding.galgas", 32)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i27_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("regular-binding.galgas", 23)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("regular-binding.galgas", 25)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("regular-binding.galgas", 26)) ;
      nt_explicit_5F_value_parse (inCompiler) ;
      switch (select_easyBindings_5F_syntax_37 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("regular-binding.galgas", 30)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("regular-binding.galgas", 32)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_array_5F_controller_5F_declaration_i28_ (GALGAS_secondaryPropertyList & ioArgument_ioSecondaryPropertyList,
                                                                                                          C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_arrayController COMMA_SOURCE_FILE ("array-controller.galgas", 57)) ;
  GALGAS_lstring var_controllerName_2590 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("array-controller.galgas", 58)) ;
  GALGAS_arrayControllerAttributListAST var_arrayControllerAttributListAST_2657 = GALGAS_arrayControllerAttributListAST::constructor_emptyList (SOURCE_FILE ("array-controller.galgas", 59)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("array-controller.galgas", 60)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_attributeName_2728 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("array-controller.galgas", 62)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("array-controller.galgas", 63)) ;
    GALGAS_abstractDefaultValue var_attributeValue_2803 ;
    nt_explicit_5F_value_ (var_attributeValue_2803, inCompiler) ;
    var_arrayControllerAttributListAST_2657.addAssign_operation (var_attributeName_2728, var_attributeValue_2803  COMMA_SOURCE_FILE ("array-controller.galgas", 65)) ;
    switch (select_easyBindings_5F_syntax_38 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("array-controller.galgas", 67)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("array-controller.galgas", 69)) ;
  GALGAS_arrayControllerModel var_arrayControllerModel_2970 ;
  switch (select_easyBindings_5F_syntax_39 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("array-controller.galgas", 73)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("array-controller.galgas", 74)) ;
    GALGAS_lstring var_relationshipName_3054 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("array-controller.galgas", 75)) ;
    var_arrayControllerModel_2970 = GALGAS_arrayControllerModel::constructor_rootToManyRelationship (var_relationshipName_3054  COMMA_SOURCE_FILE ("array-controller.galgas", 76)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("array-controller.galgas", 78)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("array-controller.galgas", 79)) ;
    GALGAS_lstring var_storedPropertyName_3230 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("array-controller.galgas", 80)) ;
    var_arrayControllerModel_2970 = GALGAS_arrayControllerModel::constructor_selfCollection (var_storedPropertyName_3230  COMMA_SOURCE_FILE ("array-controller.galgas", 81)) ;
  } break ;
  case 3: {
    GALGAS_lstring var_controllerName_3375 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("array-controller.galgas", 83)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("array-controller.galgas", 84)) ;
    GALGAS_lstring var_propertyName_3431 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("array-controller.galgas", 85)) ;
    var_arrayControllerModel_2970 = GALGAS_arrayControllerModel::constructor_controllerArray (var_controllerName_3375, var_propertyName_3431  COMMA_SOURCE_FILE ("array-controller.galgas", 86)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstringlist var_filterProperties_3579 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("array-controller.galgas", 88)) ;
  switch (select_easyBindings_5F_syntax_40 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_filter COMMA_SOURCE_FILE ("array-controller.galgas", 91)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GALGAS_lstring var_filterProperty_3680 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("array-controller.galgas", 93)) ;
      var_filterProperties_3579.addAssign_operation (var_filterProperty_3680  COMMA_SOURCE_FILE ("array-controller.galgas", 94)) ;
      switch (select_easyBindings_5F_syntax_41 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("array-controller.galgas", 96)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("array-controller.galgas", 99)) ;
  GALGAS_arrayControllerBoundColumnListAST var_arrayControllerBoundColumnListAST_3847 = GALGAS_arrayControllerBoundColumnListAST::constructor_emptyList (SOURCE_FILE ("array-controller.galgas", 100)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_easyBindings_5F_syntax_42 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_column COMMA_SOURCE_FILE ("array-controller.galgas", 103)) ;
      GALGAS_lstring var_columnName_3927 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("array-controller.galgas", 104)) ;
      GALGAS_lstring var_sortPropertyName_3959 ;
      switch (select_easyBindings_5F_syntax_43 (inCompiler)) {
      case 1: {
        var_sortPropertyName_3959 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("array-controller.galgas", 107)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_sort COMMA_SOURCE_FILE ("array-controller.galgas", 109)) ;
        var_sortPropertyName_3959 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("array-controller.galgas", 110)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_columnOutletTypeName_4130 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("array-controller.galgas", 112)) ;
      GALGAS_columnBindingAST var_columnBindingAST_4194 ;
      nt_column_5F_bindings_ (var_columnBindingAST_4194, inCompiler) ;
      var_arrayControllerBoundColumnListAST_3847.addAssign_operation (var_columnName_3927, var_columnOutletTypeName_4130, var_columnBindingAST_4194, var_sortPropertyName_3959  COMMA_SOURCE_FILE ("array-controller.galgas", 114)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("array-controller.galgas", 120)) ;
  ioArgument_ioSecondaryPropertyList.addAssign_operation (GALGAS_arrayControllerDeclaration::constructor_new (var_controllerName_2590, var_arrayControllerModel_2970, var_filterProperties_3579, var_arrayControllerBoundColumnListAST_3847, var_arrayControllerAttributListAST_2657  COMMA_SOURCE_FILE ("array-controller.galgas", 121))  COMMA_SOURCE_FILE ("array-controller.galgas", 121)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_array_5F_controller_5F_declaration_i28_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_arrayController COMMA_SOURCE_FILE ("array-controller.galgas", 57)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("array-controller.galgas", 58)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("array-controller.galgas", 60)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("array-controller.galgas", 62)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("array-controller.galgas", 63)) ;
    nt_explicit_5F_value_parse (inCompiler) ;
    switch (select_easyBindings_5F_syntax_38 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("array-controller.galgas", 67)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("array-controller.galgas", 69)) ;
  switch (select_easyBindings_5F_syntax_39 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("array-controller.galgas", 73)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("array-controller.galgas", 74)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("array-controller.galgas", 75)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("array-controller.galgas", 78)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("array-controller.galgas", 79)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("array-controller.galgas", 80)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("array-controller.galgas", 83)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("array-controller.galgas", 84)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("array-controller.galgas", 85)) ;
  } break ;
  default:
    break ;
  }
  switch (select_easyBindings_5F_syntax_40 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_filter COMMA_SOURCE_FILE ("array-controller.galgas", 91)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("array-controller.galgas", 93)) ;
      switch (select_easyBindings_5F_syntax_41 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("array-controller.galgas", 96)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("array-controller.galgas", 99)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_easyBindings_5F_syntax_42 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_column COMMA_SOURCE_FILE ("array-controller.galgas", 103)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("array-controller.galgas", 104)) ;
      switch (select_easyBindings_5F_syntax_43 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_sort COMMA_SOURCE_FILE ("array-controller.galgas", 109)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("array-controller.galgas", 110)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("array-controller.galgas", 112)) ;
      nt_column_5F_bindings_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("array-controller.galgas", 120)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_column_5F_bindings_i29_ (GALGAS_columnBindingAST & outArgument_outColumnBindingAST,
                                                                                          C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outColumnBindingAST.drop () ; // Release 'out' argument
  GALGAS_lstring var_runActionDescriptor_4806 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("array-controller.galgas", 133)) ;
  GALGAS_multipleBindingDescriptor var_enabledBindingDescriptor_4854 = GALGAS_multipleBindingDescriptor::constructor_noBinding (SOURCE_FILE ("array-controller.galgas", 134)) ;
  GALGAS_multipleBindingDescriptor var_hiddenBindingDescriptor_4925 = GALGAS_multipleBindingDescriptor::constructor_noBinding (SOURCE_FILE ("array-controller.galgas", 135)) ;
  GALGAS_regularBindingList var_regularBindingList_5007 = GALGAS_regularBindingList::constructor_emptyList (SOURCE_FILE ("array-controller.galgas", 136)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_44 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("array-controller.galgas", 139)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_runActionDescriptor_4806.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 141)), GALGAS_string ("duplicated $run binding"), fixItArray2  COMMA_SOURCE_FILE ("array-controller.galgas", 141)) ;
      }
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("array-controller.galgas", 143)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("array-controller.galgas", 144)) ;
      var_runActionDescriptor_4806 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("array-controller.galgas", 145)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("array-controller.galgas", 148)) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_enabledBindingDescriptor_4854.objectCompare (GALGAS_multipleBindingDescriptor::constructor_noBinding (SOURCE_FILE ("array-controller.galgas", 149)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 150)), GALGAS_string ("duplicated $enabled binding"), fixItArray4  COMMA_SOURCE_FILE ("array-controller.galgas", 150)) ;
      }
      GALGAS_abstractBooleanMultipleBindingExpressionAST var_bindingExpression_5478 ;
      nt_booleanMultipleBindingExpression_ (var_bindingExpression_5478, inCompiler) ;
      var_enabledBindingDescriptor_4854 = GALGAS_multipleBindingDescriptor::constructor_binding (var_bindingExpression_5478  COMMA_SOURCE_FILE ("array-controller.galgas", 153)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("array-controller.galgas", 156)) ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, var_hiddenBindingDescriptor_4925.objectCompare (GALGAS_multipleBindingDescriptor::constructor_noBinding (SOURCE_FILE ("array-controller.galgas", 157)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 158)), GALGAS_string ("duplicated $hidden binding"), fixItArray6  COMMA_SOURCE_FILE ("array-controller.galgas", 158)) ;
      }
      GALGAS_abstractBooleanMultipleBindingExpressionAST var_bindingExpression_5813 ;
      nt_booleanMultipleBindingExpression_ (var_bindingExpression_5813, inCompiler) ;
      var_hiddenBindingDescriptor_4925 = GALGAS_multipleBindingDescriptor::constructor_binding (var_bindingExpression_5813  COMMA_SOURCE_FILE ("array-controller.galgas", 161)) ;
    } break ;
    case 5: {
      GALGAS_lstring var_bindingName_5965 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("array-controller.galgas", 164)) ;
      GALGAS_observablePropertyList var_observablePropertyList_6018 = GALGAS_observablePropertyList::constructor_emptyList (SOURCE_FILE ("array-controller.galgas", 165)) ;
      bool repeatFlag_7 = true ;
      while (repeatFlag_7) {
        GALGAS_observablePropertyAST var_observableProperty_6113 ;
        nt_observable_5F_property_ (var_observableProperty_6113, inCompiler) ;
        var_observablePropertyList_6018.addAssign_operation (var_observableProperty_6113  COMMA_SOURCE_FILE ("array-controller.galgas", 168)) ;
        switch (select_easyBindings_5F_syntax_45 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("array-controller.galgas", 170)) ;
        } break ;
        default:
          repeatFlag_7 = false ;
          break ;
        }
      }
      GALGAS_bindingOptionList var_bindingOptions_6249 ;
      nt_binding_5F_option_5F_list_ (var_bindingOptions_6249, inCompiler) ;
      var_regularBindingList_5007.addAssign_operation (var_bindingName_5965, var_observablePropertyList_6018, var_bindingOptions_6249  COMMA_SOURCE_FILE ("array-controller.galgas", 173)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outColumnBindingAST = GALGAS_columnBindingAST::constructor_new (var_runActionDescriptor_4806, var_enabledBindingDescriptor_4854, var_hiddenBindingDescriptor_4925, var_regularBindingList_5007  COMMA_SOURCE_FILE ("array-controller.galgas", 179)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_column_5F_bindings_i29_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_44 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("array-controller.galgas", 139)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("array-controller.galgas", 143)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("array-controller.galgas", 144)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("array-controller.galgas", 145)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("array-controller.galgas", 148)) ;
      nt_booleanMultipleBindingExpression_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("array-controller.galgas", 156)) ;
      nt_booleanMultipleBindingExpression_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("array-controller.galgas", 164)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        nt_observable_5F_property_parse (inCompiler) ;
        switch (select_easyBindings_5F_syntax_45 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("array-controller.galgas", 170)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      nt_binding_5F_option_5F_list_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_array_5F_controller_5F_declaration_i30_ (GALGAS_secondaryPropertyList & ioArgument_ioSecondaryPropertyList,
                                                                                                          C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_selectionController COMMA_SOURCE_FILE ("selection-controller.galgas", 22)) ;
  GALGAS_lstring var_selectionControllerName_1246 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("selection-controller.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("selection-controller.galgas", 24)) ;
  GALGAS_lstring var_modelControllerName_1305 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("selection-controller.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("selection-controller.galgas", 26)) ;
  GALGAS_lstring var_propertyName_1357 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("selection-controller.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("selection-controller.galgas", 28)) ;
  ioArgument_ioSecondaryPropertyList.addAssign_operation (GALGAS_selectionControllerDeclaration::constructor_new (var_selectionControllerName_1246, var_modelControllerName_1305, var_propertyName_1357  COMMA_SOURCE_FILE ("selection-controller.galgas", 29))  COMMA_SOURCE_FILE ("selection-controller.galgas", 29)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_array_5F_controller_5F_declaration_i30_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_selectionController COMMA_SOURCE_FILE ("selection-controller.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("selection-controller.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("selection-controller.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("selection-controller.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("selection-controller.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("selection-controller.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("selection-controller.galgas", 28)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_array_5F_controller_5F_declaration_i31_ (GALGAS_secondaryPropertyList & ioArgument_ioSecondaryPropertyList,
                                                                                                          C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_customObjectController COMMA_SOURCE_FILE ("custom-object-controller.galgas", 22)) ;
  GALGAS_lstring var_customObjectControllerName_1247 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("custom-object-controller.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_classForSwift COMMA_SOURCE_FILE ("custom-object-controller.galgas", 24)) ;
  GALGAS_lstring var_classNameForSwift_1316 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("custom-object-controller.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("custom-object-controller.galgas", 26)) ;
  GALGAS_lstring var_propertyClassName_1373 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("custom-object-controller.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("custom-object-controller.galgas", 28)) ;
  ioArgument_ioSecondaryPropertyList.addAssign_operation (GALGAS_customObjectControllerDeclaration::constructor_new (var_customObjectControllerName_1247, var_classNameForSwift_1316, var_propertyClassName_1373  COMMA_SOURCE_FILE ("custom-object-controller.galgas", 29))  COMMA_SOURCE_FILE ("custom-object-controller.galgas", 29)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_array_5F_controller_5F_declaration_i31_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_customObjectController COMMA_SOURCE_FILE ("custom-object-controller.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("custom-object-controller.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_classForSwift COMMA_SOURCE_FILE ("custom-object-controller.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("custom-object-controller.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("custom-object-controller.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("custom-object-controller.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("custom-object-controller.galgas", 28)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_explicit_5F_value_i32_ (GALGAS_abstractDefaultValue & outArgument_outDefaultValue,
                                                                                         C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outDefaultValue.drop () ; // Release 'out' argument
  switch (select_easyBindings_5F_syntax_46 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("explicit-default-value.galgas", 61)) ;
    outArgument_outDefaultValue = GALGAS_boolAsDefaultValue::constructor_new (GALGAS_lbool::constructor_new (GALGAS_bool (true), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 62))  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 62))  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 62)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_no COMMA_SOURCE_FILE ("explicit-default-value.galgas", 64)) ;
    outArgument_outDefaultValue = GALGAS_boolAsDefaultValue::constructor_new (GALGAS_lbool::constructor_new (GALGAS_bool (false), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 65))  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 65))  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 65)) ;
  } break ;
  case 3: {
    GALGAS_luint var_integerValue_2653 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("explicit-default-value.galgas", 67)) ;
    outArgument_outDefaultValue = GALGAS_integerAsDefaultValue::constructor_new (var_integerValue_2653  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 68)) ;
  } break ;
  case 4: {
    GALGAS_ldouble var_doubleValue_2777 = inCompiler->synthetizedAttribute_floatValue () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double COMMA_SOURCE_FILE ("explicit-default-value.galgas", 70)) ;
    outArgument_outDefaultValue = GALGAS_doubleAsDefaultValue::constructor_new (var_doubleValue_2777  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 71)) ;
  } break ;
  case 5: {
    GALGAS_lstring var_stringValue_2901 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("explicit-default-value.galgas", 73)) ;
    outArgument_outDefaultValue = GALGAS_stringAsDefaultValue::constructor_new (var_stringValue_2901  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 74)) ;
  } break ;
  case 6: {
    GALGAS_lstring var_stringValue_3018 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("explicit-default-value.galgas", 76)) ;
    outArgument_outDefaultValue = GALGAS_identifierAsDefaultValue::constructor_new (var_stringValue_3018  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 77)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("explicit-default-value.galgas", 79)) ;
    GALGAS_location var_startLocation_3128 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 80)) ;
    GALGAS_defaultValueList var_defaultValueList_3186 = GALGAS_defaultValueList::constructor_emptyList (SOURCE_FILE ("explicit-default-value.galgas", 81)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_abstractDefaultValue var_defaultValue_3269 ;
      nt_explicit_5F_value_ (var_defaultValue_3269, inCompiler) ;
      var_defaultValueList_3186.addAssign_operation (var_defaultValue_3269  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 84)) ;
      switch (select_easyBindings_5F_syntax_47 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("explicit-default-value.galgas", 86)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("explicit-default-value.galgas", 88)) ;
    outArgument_outDefaultValue = GALGAS_listAsDefaultValue::constructor_new (var_startLocation_3128, var_defaultValueList_3186  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 89)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_explicit_5F_value_i32_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_46 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("explicit-default-value.galgas", 61)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_no COMMA_SOURCE_FILE ("explicit-default-value.galgas", 64)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("explicit-default-value.galgas", 67)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double COMMA_SOURCE_FILE ("explicit-default-value.galgas", 70)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("explicit-default-value.galgas", 73)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("explicit-default-value.galgas", 76)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("explicit-default-value.galgas", 79)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_explicit_5F_value_parse (inCompiler) ;
      switch (select_easyBindings_5F_syntax_47 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("explicit-default-value.galgas", 86)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("explicit-default-value.galgas", 88)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_xcode_5F_project_i33_ (GALGAS_lstring & ioArgument_ioXcodeProjectString,
                                                                                        C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject COMMA_SOURCE_FILE ("xcode-project.galgas", 12)) ;
  GALGAS_lstring var_xcodeProjectString_662 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("xcode-project.galgas", 13)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("xcode-project.galgas", 14)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_xcodeProjectString_662.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (var_xcodeProjectString_662.getter_location (SOURCE_FILE ("xcode-project.galgas", 16)), GALGAS_string ("string should not be empty"), fixItArray1  COMMA_SOURCE_FILE ("xcode-project.galgas", 16)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, ioArgument_ioXcodeProjectString.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_xcodeProjectString_662.getter_location (SOURCE_FILE ("xcode-project.galgas", 18)), GALGAS_string ("Xcode project already defined"), fixItArray3  COMMA_SOURCE_FILE ("xcode-project.galgas", 18)) ;
    }else if (kBoolFalse == test_2) {
      ioArgument_ioXcodeProjectString = var_xcodeProjectString_662 ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_xcode_5F_project_i33_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject COMMA_SOURCE_FILE ("xcode-project.galgas", 12)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("xcode-project.galgas", 13)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("xcode-project.galgas", 14)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_main_5F_xib_i34_ (GALGAS_mainXibDescriptorList & ioArgument_ioElementList,
                                                                                   C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_mainxib COMMA_SOURCE_FILE ("main-xib.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("main-xib.galgas", 34)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_49 (inCompiler)) {
    case 1: {
      GALGAS_lstring var_outletType_1533 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("main-xib.galgas", 37)) ;
      GALGAS_lstring var_outletName_1579 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("main-xib.galgas", 38)) ;
      GALGAS_mainXibLineDescriptorList temp_1 = GALGAS_mainXibLineDescriptorList::constructor_emptyList (SOURCE_FILE ("main-xib.galgas", 40)) ;
      temp_1.addAssign_operation (GALGAS_mainXibElement::constructor_outlet (var_outletType_1533, var_outletName_1579  COMMA_SOURCE_FILE ("main-xib.galgas", 40))  COMMA_SOURCE_FILE ("main-xib.galgas", 40)) ;
      ioArgument_ioElementList.addAssign_operation (temp_1  COMMA_SOURCE_FILE ("main-xib.galgas", 39)) ;
    } break ;
    case 2: {
      GALGAS_lstring var_s_1734 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("main-xib.galgas", 43)) ;
      GALGAS_mainXibLineDescriptorList temp_2 = GALGAS_mainXibLineDescriptorList::constructor_emptyList (SOURCE_FILE ("main-xib.galgas", 44)) ;
      temp_2.addAssign_operation (GALGAS_mainXibElement::constructor_text (var_s_1734  COMMA_SOURCE_FILE ("main-xib.galgas", 44))  COMMA_SOURCE_FILE ("main-xib.galgas", 44)) ;
      ioArgument_ioElementList.addAssign_operation (temp_2  COMMA_SOURCE_FILE ("main-xib.galgas", 44)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("main-xib.galgas", 46)) ;
      GALGAS_mainXibLineDescriptorList var_lineDescription_1872 ;
      nt_main_5F_xib_5F_line_ (var_lineDescription_1872, inCompiler) ;
      ioArgument_ioElementList.addAssign_operation (var_lineDescription_1872  COMMA_SOURCE_FILE ("main-xib.galgas", 48)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("main-xib.galgas", 49)) ;
    } break ;
    default:
      break ;
    }
    switch (select_easyBindings_5F_syntax_48 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("main-xib.galgas", 52)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("main-xib.galgas", 54)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_main_5F_xib_i34_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_mainxib COMMA_SOURCE_FILE ("main-xib.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("main-xib.galgas", 34)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_49 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("main-xib.galgas", 37)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("main-xib.galgas", 38)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("main-xib.galgas", 43)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("main-xib.galgas", 46)) ;
      nt_main_5F_xib_5F_line_parse (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("main-xib.galgas", 49)) ;
    } break ;
    default:
      break ;
    }
    switch (select_easyBindings_5F_syntax_48 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("main-xib.galgas", 52)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("main-xib.galgas", 54)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i35_ (GALGAS_mainXibLineDescriptorList & outArgument_outLineDescription,
                                                                                           C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outLineDescription.drop () ; // Release 'out' argument
  outArgument_outLineDescription = GALGAS_mainXibLineDescriptorList::constructor_emptyList (SOURCE_FILE ("main-xib.galgas", 62)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_51 (inCompiler)) {
    case 1: {
      GALGAS_lstring var_outletType_2277 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("main-xib.galgas", 65)) ;
      GALGAS_lstring var_outletName_2323 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("main-xib.galgas", 66)) ;
      outArgument_outLineDescription.addAssign_operation (GALGAS_mainXibElement::constructor_outlet (var_outletType_2277, var_outletName_2323  COMMA_SOURCE_FILE ("main-xib.galgas", 68))  COMMA_SOURCE_FILE ("main-xib.galgas", 67)) ;
    } break ;
    case 2: {
      GALGAS_lstring var_s_2470 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("main-xib.galgas", 70)) ;
      outArgument_outLineDescription.addAssign_operation (GALGAS_mainXibElement::constructor_text (var_s_2470  COMMA_SOURCE_FILE ("main-xib.galgas", 71))  COMMA_SOURCE_FILE ("main-xib.galgas", 71)) ;
    } break ;
    default:
      break ;
    }
    switch (select_easyBindings_5F_syntax_50 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("main-xib.galgas", 74)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i35_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_51 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("main-xib.galgas", 65)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("main-xib.galgas", 66)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("main-xib.galgas", 70)) ;
    } break ;
    default:
      break ;
    }
    switch (select_easyBindings_5F_syntax_50 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("main-xib.galgas", 74)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Class for element of '@astDeclarationList' list                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_astDeclarationList : public cCollectionElement {
  public : GALGAS_astDeclarationList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_astDeclarationList (const GALGAS_astDeclaration & in_mDeclaration
                                                  COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_astDeclarationList::cCollectionElement_astDeclarationList (const GALGAS_astDeclaration & in_mDeclaration
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDeclaration) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_astDeclarationList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_astDeclarationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_astDeclarationList (mObject.mProperty_mDeclaration COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_astDeclarationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDeclaration" ":" ;
  mObject.mProperty_mDeclaration.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_astDeclarationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_astDeclarationList * operand = (cCollectionElement_astDeclarationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_astDeclarationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclarationList::GALGAS_astDeclarationList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclarationList::GALGAS_astDeclarationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclarationList GALGAS_astDeclarationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_astDeclarationList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclarationList GALGAS_astDeclarationList::constructor_listWithValue (const GALGAS_astDeclaration & inOperand0
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_astDeclarationList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_astDeclarationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_astDeclarationList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_astDeclarationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GALGAS_astDeclaration & in_mDeclaration
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_astDeclarationList * p = NULL ;
  macroMyNew (p, cCollectionElement_astDeclarationList (in_mDeclaration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_astDeclarationList::addAssign_operation (const GALGAS_astDeclaration & inOperand0
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_astDeclarationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_astDeclarationList::setter_insertAtIndex (const GALGAS_astDeclaration inOperand0,
                                                      const GALGAS_uint inInsertionIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_astDeclarationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_astDeclarationList::setter_removeAtIndex (GALGAS_astDeclaration & outOperand0,
                                                      const GALGAS_uint inRemoveIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_astDeclarationList * p = (cCollectionElement_astDeclarationList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_astDeclarationList) ;
      outOperand0 = p->mObject.mProperty_mDeclaration ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_astDeclarationList::setter_popFirst (GALGAS_astDeclaration & outOperand0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astDeclarationList * p = (cCollectionElement_astDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_astDeclarationList::setter_popLast (GALGAS_astDeclaration & outOperand0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astDeclarationList * p = (cCollectionElement_astDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_astDeclarationList::method_first (GALGAS_astDeclaration & outOperand0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astDeclarationList * p = (cCollectionElement_astDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_astDeclarationList::method_last (GALGAS_astDeclaration & outOperand0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astDeclarationList * p = (cCollectionElement_astDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclarationList GALGAS_astDeclarationList::add_operation (const GALGAS_astDeclarationList & inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_astDeclarationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclarationList GALGAS_astDeclarationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_astDeclarationList result = GALGAS_astDeclarationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclarationList GALGAS_astDeclarationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_astDeclarationList result = GALGAS_astDeclarationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclarationList GALGAS_astDeclarationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_astDeclarationList result = GALGAS_astDeclarationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_astDeclarationList::plusAssign_operation (const GALGAS_astDeclarationList inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclaration GALGAS_astDeclarationList::getter_mDeclarationAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_astDeclarationList * p = (cCollectionElement_astDeclarationList *) attributes.ptr () ;
  GALGAS_astDeclaration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_astDeclarationList) ;
    result = p->mObject.mProperty_mDeclaration ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_astDeclarationList::cEnumerator_astDeclarationList (const GALGAS_astDeclarationList & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclarationList_2D_element cEnumerator_astDeclarationList::current (LOCATION_ARGS) const {
  const cCollectionElement_astDeclarationList * p = (const cCollectionElement_astDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_astDeclarationList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclaration cEnumerator_astDeclarationList::current_mDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_astDeclarationList * p = (const cCollectionElement_astDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_astDeclarationList) ;
  return p->mObject.mProperty_mDeclaration ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @astDeclarationList type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astDeclarationList ("astDeclarationList",
                                           NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_astDeclarationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astDeclarationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_astDeclarationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astDeclarationList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclarationList GALGAS_astDeclarationList::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_astDeclarationList result ;
  const GALGAS_astDeclarationList * p = (const GALGAS_astDeclarationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astDeclarationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astDeclarationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Class for element of '@outletClassDeclarationList' list                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_outletClassDeclarationList : public cCollectionElement {
  public : GALGAS_outletClassDeclarationList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_outletClassDeclarationList (const GALGAS_bool & in_mUserDefined,
                                                          const GALGAS_lstring & in_mOutletClassName,
                                                          const GALGAS_bool & in_mHasRunAction,
                                                          const GALGAS_bool & in_mHasEnabled,
                                                          const GALGAS_bool & in_mHandlesTableValueBinding
                                                          COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_outletClassDeclarationList::cCollectionElement_outletClassDeclarationList (const GALGAS_bool & in_mUserDefined,
                                                                                              const GALGAS_lstring & in_mOutletClassName,
                                                                                              const GALGAS_bool & in_mHasRunAction,
                                                                                              const GALGAS_bool & in_mHasEnabled,
                                                                                              const GALGAS_bool & in_mHandlesTableValueBinding
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mUserDefined, in_mOutletClassName, in_mHasRunAction, in_mHasEnabled, in_mHandlesTableValueBinding) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_outletClassDeclarationList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_outletClassDeclarationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_outletClassDeclarationList (mObject.mProperty_mUserDefined, mObject.mProperty_mOutletClassName, mObject.mProperty_mHasRunAction, mObject.mProperty_mHasEnabled, mObject.mProperty_mHandlesTableValueBinding COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_outletClassDeclarationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mUserDefined" ":" ;
  mObject.mProperty_mUserDefined.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOutletClassName" ":" ;
  mObject.mProperty_mOutletClassName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasRunAction" ":" ;
  mObject.mProperty_mHasRunAction.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHasEnabled" ":" ;
  mObject.mProperty_mHasEnabled.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHandlesTableValueBinding" ":" ;
  mObject.mProperty_mHandlesTableValueBinding.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_outletClassDeclarationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_outletClassDeclarationList * operand = (cCollectionElement_outletClassDeclarationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_outletClassDeclarationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassDeclarationList::GALGAS_outletClassDeclarationList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassDeclarationList::GALGAS_outletClassDeclarationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassDeclarationList GALGAS_outletClassDeclarationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_outletClassDeclarationList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassDeclarationList GALGAS_outletClassDeclarationList::constructor_listWithValue (const GALGAS_bool & inOperand0,
                                                                                                const GALGAS_lstring & inOperand1,
                                                                                                const GALGAS_bool & inOperand2,
                                                                                                const GALGAS_bool & inOperand3,
                                                                                                const GALGAS_bool & inOperand4
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_outletClassDeclarationList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_outletClassDeclarationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_outletClassDeclarationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassDeclarationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_bool & in_mUserDefined,
                                                                   const GALGAS_lstring & in_mOutletClassName,
                                                                   const GALGAS_bool & in_mHasRunAction,
                                                                   const GALGAS_bool & in_mHasEnabled,
                                                                   const GALGAS_bool & in_mHandlesTableValueBinding
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_outletClassDeclarationList * p = NULL ;
  macroMyNew (p, cCollectionElement_outletClassDeclarationList (in_mUserDefined,
                                                                in_mOutletClassName,
                                                                in_mHasRunAction,
                                                                in_mHasEnabled,
                                                                in_mHandlesTableValueBinding COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassDeclarationList::addAssign_operation (const GALGAS_bool & inOperand0,
                                                             const GALGAS_lstring & inOperand1,
                                                             const GALGAS_bool & inOperand2,
                                                             const GALGAS_bool & inOperand3,
                                                             const GALGAS_bool & inOperand4
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_outletClassDeclarationList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassDeclarationList::setter_insertAtIndex (const GALGAS_bool inOperand0,
                                                              const GALGAS_lstring inOperand1,
                                                              const GALGAS_bool inOperand2,
                                                              const GALGAS_bool inOperand3,
                                                              const GALGAS_bool inOperand4,
                                                              const GALGAS_uint inInsertionIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_outletClassDeclarationList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassDeclarationList::setter_removeAtIndex (GALGAS_bool & outOperand0,
                                                              GALGAS_lstring & outOperand1,
                                                              GALGAS_bool & outOperand2,
                                                              GALGAS_bool & outOperand3,
                                                              GALGAS_bool & outOperand4,
                                                              const GALGAS_uint inRemoveIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_outletClassDeclarationList * p = (cCollectionElement_outletClassDeclarationList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_outletClassDeclarationList) ;
      outOperand0 = p->mObject.mProperty_mUserDefined ;
      outOperand1 = p->mObject.mProperty_mOutletClassName ;
      outOperand2 = p->mObject.mProperty_mHasRunAction ;
      outOperand3 = p->mObject.mProperty_mHasEnabled ;
      outOperand4 = p->mObject.mProperty_mHandlesTableValueBinding ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassDeclarationList::setter_popFirst (GALGAS_bool & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         GALGAS_bool & outOperand2,
                                                         GALGAS_bool & outOperand3,
                                                         GALGAS_bool & outOperand4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassDeclarationList * p = (cCollectionElement_outletClassDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletClassDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mUserDefined ;
    outOperand1 = p->mObject.mProperty_mOutletClassName ;
    outOperand2 = p->mObject.mProperty_mHasRunAction ;
    outOperand3 = p->mObject.mProperty_mHasEnabled ;
    outOperand4 = p->mObject.mProperty_mHandlesTableValueBinding ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassDeclarationList::setter_popLast (GALGAS_bool & outOperand0,
                                                        GALGAS_lstring & outOperand1,
                                                        GALGAS_bool & outOperand2,
                                                        GALGAS_bool & outOperand3,
                                                        GALGAS_bool & outOperand4,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassDeclarationList * p = (cCollectionElement_outletClassDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletClassDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mUserDefined ;
    outOperand1 = p->mObject.mProperty_mOutletClassName ;
    outOperand2 = p->mObject.mProperty_mHasRunAction ;
    outOperand3 = p->mObject.mProperty_mHasEnabled ;
    outOperand4 = p->mObject.mProperty_mHandlesTableValueBinding ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassDeclarationList::method_first (GALGAS_bool & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      GALGAS_bool & outOperand2,
                                                      GALGAS_bool & outOperand3,
                                                      GALGAS_bool & outOperand4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassDeclarationList * p = (cCollectionElement_outletClassDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletClassDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mUserDefined ;
    outOperand1 = p->mObject.mProperty_mOutletClassName ;
    outOperand2 = p->mObject.mProperty_mHasRunAction ;
    outOperand3 = p->mObject.mProperty_mHasEnabled ;
    outOperand4 = p->mObject.mProperty_mHandlesTableValueBinding ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassDeclarationList::method_last (GALGAS_bool & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     GALGAS_bool & outOperand2,
                                                     GALGAS_bool & outOperand3,
                                                     GALGAS_bool & outOperand4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassDeclarationList * p = (cCollectionElement_outletClassDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletClassDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mUserDefined ;
    outOperand1 = p->mObject.mProperty_mOutletClassName ;
    outOperand2 = p->mObject.mProperty_mHasRunAction ;
    outOperand3 = p->mObject.mProperty_mHasEnabled ;
    outOperand4 = p->mObject.mProperty_mHandlesTableValueBinding ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassDeclarationList GALGAS_outletClassDeclarationList::add_operation (const GALGAS_outletClassDeclarationList & inOperand,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_outletClassDeclarationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassDeclarationList GALGAS_outletClassDeclarationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_outletClassDeclarationList result = GALGAS_outletClassDeclarationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassDeclarationList GALGAS_outletClassDeclarationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_outletClassDeclarationList result = GALGAS_outletClassDeclarationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassDeclarationList GALGAS_outletClassDeclarationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_outletClassDeclarationList result = GALGAS_outletClassDeclarationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassDeclarationList::plusAssign_operation (const GALGAS_outletClassDeclarationList inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassDeclarationList::getter_mUserDefinedAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassDeclarationList * p = (cCollectionElement_outletClassDeclarationList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletClassDeclarationList) ;
    result = p->mObject.mProperty_mUserDefined ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_outletClassDeclarationList::getter_mOutletClassNameAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassDeclarationList * p = (cCollectionElement_outletClassDeclarationList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletClassDeclarationList) ;
    result = p->mObject.mProperty_mOutletClassName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassDeclarationList::getter_mHasRunActionAtIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassDeclarationList * p = (cCollectionElement_outletClassDeclarationList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletClassDeclarationList) ;
    result = p->mObject.mProperty_mHasRunAction ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassDeclarationList::getter_mHasEnabledAtIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassDeclarationList * p = (cCollectionElement_outletClassDeclarationList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletClassDeclarationList) ;
    result = p->mObject.mProperty_mHasEnabled ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassDeclarationList::getter_mHandlesTableValueBindingAtIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassDeclarationList * p = (cCollectionElement_outletClassDeclarationList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletClassDeclarationList) ;
    result = p->mObject.mProperty_mHandlesTableValueBinding ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_outletClassDeclarationList::cEnumerator_outletClassDeclarationList (const GALGAS_outletClassDeclarationList & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassDeclarationList_2D_element cEnumerator_outletClassDeclarationList::current (LOCATION_ARGS) const {
  const cCollectionElement_outletClassDeclarationList * p = (const cCollectionElement_outletClassDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletClassDeclarationList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_outletClassDeclarationList::current_mUserDefined (LOCATION_ARGS) const {
  const cCollectionElement_outletClassDeclarationList * p = (const cCollectionElement_outletClassDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletClassDeclarationList) ;
  return p->mObject.mProperty_mUserDefined ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_outletClassDeclarationList::current_mOutletClassName (LOCATION_ARGS) const {
  const cCollectionElement_outletClassDeclarationList * p = (const cCollectionElement_outletClassDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletClassDeclarationList) ;
  return p->mObject.mProperty_mOutletClassName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_outletClassDeclarationList::current_mHasRunAction (LOCATION_ARGS) const {
  const cCollectionElement_outletClassDeclarationList * p = (const cCollectionElement_outletClassDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletClassDeclarationList) ;
  return p->mObject.mProperty_mHasRunAction ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_outletClassDeclarationList::current_mHasEnabled (LOCATION_ARGS) const {
  const cCollectionElement_outletClassDeclarationList * p = (const cCollectionElement_outletClassDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletClassDeclarationList) ;
  return p->mObject.mProperty_mHasEnabled ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_outletClassDeclarationList::current_mHandlesTableValueBinding (LOCATION_ARGS) const {
  const cCollectionElement_outletClassDeclarationList * p = (const cCollectionElement_outletClassDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletClassDeclarationList) ;
  return p->mObject.mProperty_mHandlesTableValueBinding ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @outletClassDeclarationList type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletClassDeclarationList ("outletClassDeclarationList",
                                                   NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_outletClassDeclarationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassDeclarationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_outletClassDeclarationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletClassDeclarationList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassDeclarationList GALGAS_outletClassDeclarationList::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_outletClassDeclarationList result ;
  const GALGAS_outletClassDeclarationList * p = (const GALGAS_outletClassDeclarationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletClassDeclarationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletClassDeclarationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*



typeComparisonResult GALGAS_abstractSecondaryProperty::objectCompare (const GALGAS_abstractSecondaryProperty & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractSecondaryProperty::GALGAS_abstractSecondaryProperty (void) :
AC_GALGAS_class (false) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractSecondaryProperty::GALGAS_abstractSecondaryProperty (const cPtr_abstractSecondaryProperty * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractSecondaryProperty) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                 Pointer class for @abstractSecondaryProperty class                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_abstractSecondaryProperty::cPtr_abstractSecondaryProperty (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @abstractSecondaryProperty type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractSecondaryProperty ("abstractSecondaryProperty",
                                                  NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_abstractSecondaryProperty::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractSecondaryProperty ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_abstractSecondaryProperty::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractSecondaryProperty (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractSecondaryProperty GALGAS_abstractSecondaryProperty::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_abstractSecondaryProperty result ;
  const GALGAS_abstractSecondaryProperty * p = (const GALGAS_abstractSecondaryProperty *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractSecondaryProperty *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractSecondaryProperty", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Class for element of '@secondaryPropertyList' list                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_secondaryPropertyList : public cCollectionElement {
  public : GALGAS_secondaryPropertyList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_secondaryPropertyList (const GALGAS_abstractSecondaryProperty & in_mSecondaryProperty
                                                     COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_secondaryPropertyList::cCollectionElement_secondaryPropertyList (const GALGAS_abstractSecondaryProperty & in_mSecondaryProperty
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSecondaryProperty) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_secondaryPropertyList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_secondaryPropertyList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_secondaryPropertyList (mObject.mProperty_mSecondaryProperty COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_secondaryPropertyList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSecondaryProperty" ":" ;
  mObject.mProperty_mSecondaryProperty.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_secondaryPropertyList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_secondaryPropertyList * operand = (cCollectionElement_secondaryPropertyList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_secondaryPropertyList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_secondaryPropertyList::GALGAS_secondaryPropertyList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_secondaryPropertyList::GALGAS_secondaryPropertyList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_secondaryPropertyList GALGAS_secondaryPropertyList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_secondaryPropertyList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_secondaryPropertyList GALGAS_secondaryPropertyList::constructor_listWithValue (const GALGAS_abstractSecondaryProperty & inOperand0
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_secondaryPropertyList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_secondaryPropertyList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_secondaryPropertyList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_secondaryPropertyList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GALGAS_abstractSecondaryProperty & in_mSecondaryProperty
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_secondaryPropertyList * p = NULL ;
  macroMyNew (p, cCollectionElement_secondaryPropertyList (in_mSecondaryProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_secondaryPropertyList::addAssign_operation (const GALGAS_abstractSecondaryProperty & inOperand0
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_secondaryPropertyList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_secondaryPropertyList::setter_insertAtIndex (const GALGAS_abstractSecondaryProperty inOperand0,
                                                         const GALGAS_uint inInsertionIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_secondaryPropertyList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_secondaryPropertyList::setter_removeAtIndex (GALGAS_abstractSecondaryProperty & outOperand0,
                                                         const GALGAS_uint inRemoveIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_secondaryPropertyList * p = (cCollectionElement_secondaryPropertyList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_secondaryPropertyList) ;
      outOperand0 = p->mObject.mProperty_mSecondaryProperty ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_secondaryPropertyList::setter_popFirst (GALGAS_abstractSecondaryProperty & outOperand0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_secondaryPropertyList * p = (cCollectionElement_secondaryPropertyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_secondaryPropertyList) ;
    outOperand0 = p->mObject.mProperty_mSecondaryProperty ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_secondaryPropertyList::setter_popLast (GALGAS_abstractSecondaryProperty & outOperand0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_secondaryPropertyList * p = (cCollectionElement_secondaryPropertyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_secondaryPropertyList) ;
    outOperand0 = p->mObject.mProperty_mSecondaryProperty ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_secondaryPropertyList::method_first (GALGAS_abstractSecondaryProperty & outOperand0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_secondaryPropertyList * p = (cCollectionElement_secondaryPropertyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_secondaryPropertyList) ;
    outOperand0 = p->mObject.mProperty_mSecondaryProperty ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_secondaryPropertyList::method_last (GALGAS_abstractSecondaryProperty & outOperand0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_secondaryPropertyList * p = (cCollectionElement_secondaryPropertyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_secondaryPropertyList) ;
    outOperand0 = p->mObject.mProperty_mSecondaryProperty ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_secondaryPropertyList GALGAS_secondaryPropertyList::add_operation (const GALGAS_secondaryPropertyList & inOperand,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_secondaryPropertyList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_secondaryPropertyList GALGAS_secondaryPropertyList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_secondaryPropertyList result = GALGAS_secondaryPropertyList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_secondaryPropertyList GALGAS_secondaryPropertyList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_secondaryPropertyList result = GALGAS_secondaryPropertyList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_secondaryPropertyList GALGAS_secondaryPropertyList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_secondaryPropertyList result = GALGAS_secondaryPropertyList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_secondaryPropertyList::plusAssign_operation (const GALGAS_secondaryPropertyList inOperand,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractSecondaryProperty GALGAS_secondaryPropertyList::getter_mSecondaryPropertyAtIndex (const GALGAS_uint & inIndex,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_secondaryPropertyList * p = (cCollectionElement_secondaryPropertyList *) attributes.ptr () ;
  GALGAS_abstractSecondaryProperty result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_secondaryPropertyList) ;
    result = p->mObject.mProperty_mSecondaryProperty ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_secondaryPropertyList::cEnumerator_secondaryPropertyList (const GALGAS_secondaryPropertyList & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_secondaryPropertyList_2D_element cEnumerator_secondaryPropertyList::current (LOCATION_ARGS) const {
  const cCollectionElement_secondaryPropertyList * p = (const cCollectionElement_secondaryPropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_secondaryPropertyList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractSecondaryProperty cEnumerator_secondaryPropertyList::current_mSecondaryProperty (LOCATION_ARGS) const {
  const cCollectionElement_secondaryPropertyList * p = (const cCollectionElement_secondaryPropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_secondaryPropertyList) ;
  return p->mObject.mProperty_mSecondaryProperty ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @secondaryPropertyList type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_secondaryPropertyList ("secondaryPropertyList",
                                              NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_secondaryPropertyList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_secondaryPropertyList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_secondaryPropertyList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_secondaryPropertyList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_secondaryPropertyList GALGAS_secondaryPropertyList::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_secondaryPropertyList result ;
  const GALGAS_secondaryPropertyList * p = (const GALGAS_secondaryPropertyList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_secondaryPropertyList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("secondaryPropertyList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Abstract extension method '@abstractSecondaryProperty typeInventory'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_abstractSecondaryProperty_typeInventory> gExtensionMethodTable_abstractSecondaryProperty_typeInventory ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_typeInventory (const int32_t inClassIndex,
                                         extensionMethodSignature_abstractSecondaryProperty_typeInventory inMethod) {
  gExtensionMethodTable_abstractSecondaryProperty_typeInventory.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_abstractSecondaryProperty_typeInventory (void) {
  gExtensionMethodTable_abstractSecondaryProperty_typeInventory.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_abstractSecondaryProperty_typeInventory (NULL,
                                                                    freeExtensionMethod_abstractSecondaryProperty_typeInventory) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_typeInventory (const cPtr_abstractSecondaryProperty * inObject,
                                        GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractSecondaryProperty) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractSecondaryProperty_typeInventory f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractSecondaryProperty_typeInventory.count ()) {
      f = gExtensionMethodTable_abstractSecondaryProperty_typeInventory (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_abstractSecondaryProperty_typeInventory.count ()) {
          f = gExtensionMethodTable_abstractSecondaryProperty_typeInventory (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_abstractSecondaryProperty_typeInventory.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioUnifiedTypeMap, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Abstract extension method '@abstractSecondaryProperty secondaryPropertySemanticAnalysis'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_abstractSecondaryProperty_secondaryPropertySemanticAnalysis> gExtensionMethodTable_abstractSecondaryProperty_secondaryPropertySemanticAnalysis ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_secondaryPropertySemanticAnalysis (const int32_t inClassIndex,
                                                             extensionMethodSignature_abstractSecondaryProperty_secondaryPropertySemanticAnalysis inMethod) {
  gExtensionMethodTable_abstractSecondaryProperty_secondaryPropertySemanticAnalysis.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_abstractSecondaryProperty_secondaryPropertySemanticAnalysis (void) {
  gExtensionMethodTable_abstractSecondaryProperty_secondaryPropertySemanticAnalysis.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_abstractSecondaryProperty_secondaryPropertySemanticAnalysis (NULL,
                                                                                        freeExtensionMethod_abstractSecondaryProperty_secondaryPropertySemanticAnalysis) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_secondaryPropertySemanticAnalysis (const cPtr_abstractSecondaryProperty * inObject,
                                                            const GALGAS_string constin_inOwnerName,
                                                            const GALGAS_string constin_inRootEntityName,
                                                            const GALGAS_observablePropertyMap constin_inRootObservableProperties,
                                                            const GALGAS_semanticContext constin_inSemanticContext,
                                                            const GALGAS_observablePropertyMap constin_inObservableProperties,
                                                            GALGAS_transientDefinitionListForGeneration & io_ioTransientDefinitionListForGeneration,
                                                            GALGAS_arrayControllerForGeneration & io_ioArrayControllerForGeneration,
                                                            GALGAS_selectionControllerForGeneration & io_ioSelectionControllerForGeneration,
                                                            GALGAS_customObjectControllerForGeneration & io_ioCustomObjectControllerDeclaration,
                                                            GALGAS_stringset & io_ioNeededOutletClasses,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractSecondaryProperty) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractSecondaryProperty_secondaryPropertySemanticAnalysis f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractSecondaryProperty_secondaryPropertySemanticAnalysis.count ()) {
      f = gExtensionMethodTable_abstractSecondaryProperty_secondaryPropertySemanticAnalysis (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_abstractSecondaryProperty_secondaryPropertySemanticAnalysis.count ()) {
          f = gExtensionMethodTable_abstractSecondaryProperty_secondaryPropertySemanticAnalysis (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_abstractSecondaryProperty_secondaryPropertySemanticAnalysis.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inOwnerName, constin_inRootEntityName, constin_inRootObservableProperties, constin_inSemanticContext, constin_inObservableProperties, io_ioTransientDefinitionListForGeneration, io_ioArrayControllerForGeneration, io_ioSelectionControllerForGeneration, io_ioCustomObjectControllerDeclaration, io_ioNeededOutletClasses, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Class for element of '@externSwiftDelegateList' list                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_externSwiftDelegateList : public cCollectionElement {
  public : GALGAS_externSwiftDelegateList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_externSwiftDelegateList (const GALGAS_lstring & in_mExternSwiftDelegateName
                                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_externSwiftDelegateList::cCollectionElement_externSwiftDelegateList (const GALGAS_lstring & in_mExternSwiftDelegateName
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExternSwiftDelegateName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_externSwiftDelegateList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_externSwiftDelegateList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_externSwiftDelegateList (mObject.mProperty_mExternSwiftDelegateName COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_externSwiftDelegateList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExternSwiftDelegateName" ":" ;
  mObject.mProperty_mExternSwiftDelegateName.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_externSwiftDelegateList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_externSwiftDelegateList * operand = (cCollectionElement_externSwiftDelegateList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_externSwiftDelegateList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftDelegateList::GALGAS_externSwiftDelegateList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftDelegateList::GALGAS_externSwiftDelegateList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftDelegateList GALGAS_externSwiftDelegateList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_externSwiftDelegateList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftDelegateList GALGAS_externSwiftDelegateList::constructor_listWithValue (const GALGAS_lstring & inOperand0
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_externSwiftDelegateList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_externSwiftDelegateList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_externSwiftDelegateList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externSwiftDelegateList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GALGAS_lstring & in_mExternSwiftDelegateName
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_externSwiftDelegateList * p = NULL ;
  macroMyNew (p, cCollectionElement_externSwiftDelegateList (in_mExternSwiftDelegateName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externSwiftDelegateList::addAssign_operation (const GALGAS_lstring & inOperand0
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_externSwiftDelegateList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externSwiftDelegateList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                           const GALGAS_uint inInsertionIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_externSwiftDelegateList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externSwiftDelegateList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                           const GALGAS_uint inRemoveIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_externSwiftDelegateList * p = (cCollectionElement_externSwiftDelegateList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_externSwiftDelegateList) ;
      outOperand0 = p->mObject.mProperty_mExternSwiftDelegateName ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externSwiftDelegateList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externSwiftDelegateList * p = (cCollectionElement_externSwiftDelegateList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externSwiftDelegateList) ;
    outOperand0 = p->mObject.mProperty_mExternSwiftDelegateName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externSwiftDelegateList::setter_popLast (GALGAS_lstring & outOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externSwiftDelegateList * p = (cCollectionElement_externSwiftDelegateList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externSwiftDelegateList) ;
    outOperand0 = p->mObject.mProperty_mExternSwiftDelegateName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externSwiftDelegateList::method_first (GALGAS_lstring & outOperand0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externSwiftDelegateList * p = (cCollectionElement_externSwiftDelegateList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externSwiftDelegateList) ;
    outOperand0 = p->mObject.mProperty_mExternSwiftDelegateName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externSwiftDelegateList::method_last (GALGAS_lstring & outOperand0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externSwiftDelegateList * p = (cCollectionElement_externSwiftDelegateList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externSwiftDelegateList) ;
    outOperand0 = p->mObject.mProperty_mExternSwiftDelegateName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftDelegateList GALGAS_externSwiftDelegateList::add_operation (const GALGAS_externSwiftDelegateList & inOperand,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_externSwiftDelegateList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftDelegateList GALGAS_externSwiftDelegateList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_externSwiftDelegateList result = GALGAS_externSwiftDelegateList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftDelegateList GALGAS_externSwiftDelegateList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_externSwiftDelegateList result = GALGAS_externSwiftDelegateList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftDelegateList GALGAS_externSwiftDelegateList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_externSwiftDelegateList result = GALGAS_externSwiftDelegateList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externSwiftDelegateList::plusAssign_operation (const GALGAS_externSwiftDelegateList inOperand,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_externSwiftDelegateList::getter_mExternSwiftDelegateNameAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externSwiftDelegateList * p = (cCollectionElement_externSwiftDelegateList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externSwiftDelegateList) ;
    result = p->mObject.mProperty_mExternSwiftDelegateName ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_externSwiftDelegateList::cEnumerator_externSwiftDelegateList (const GALGAS_externSwiftDelegateList & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftDelegateList_2D_element cEnumerator_externSwiftDelegateList::current (LOCATION_ARGS) const {
  const cCollectionElement_externSwiftDelegateList * p = (const cCollectionElement_externSwiftDelegateList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externSwiftDelegateList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_externSwiftDelegateList::current_mExternSwiftDelegateName (LOCATION_ARGS) const {
  const cCollectionElement_externSwiftDelegateList * p = (const cCollectionElement_externSwiftDelegateList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externSwiftDelegateList) ;
  return p->mObject.mProperty_mExternSwiftDelegateName ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @externSwiftDelegateList type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externSwiftDelegateList ("externSwiftDelegateList",
                                                NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_externSwiftDelegateList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externSwiftDelegateList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_externSwiftDelegateList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externSwiftDelegateList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftDelegateList GALGAS_externSwiftDelegateList::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_externSwiftDelegateList result ;
  const GALGAS_externSwiftDelegateList * p = (const GALGAS_externSwiftDelegateList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externSwiftDelegateList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externSwiftDelegateList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Class for element of '@externSwiftFunctionList' list                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_externSwiftFunctionList : public cCollectionElement {
  public : GALGAS_externSwiftFunctionList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_externSwiftFunctionList (const GALGAS_lstring & in_mExternSwiftFunctionName,
                                                       const GALGAS_lstring & in_mCallerName
                                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_externSwiftFunctionList::cCollectionElement_externSwiftFunctionList (const GALGAS_lstring & in_mExternSwiftFunctionName,
                                                                                        const GALGAS_lstring & in_mCallerName
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExternSwiftFunctionName, in_mCallerName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_externSwiftFunctionList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_externSwiftFunctionList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_externSwiftFunctionList (mObject.mProperty_mExternSwiftFunctionName, mObject.mProperty_mCallerName COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_externSwiftFunctionList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExternSwiftFunctionName" ":" ;
  mObject.mProperty_mExternSwiftFunctionName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCallerName" ":" ;
  mObject.mProperty_mCallerName.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_externSwiftFunctionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_externSwiftFunctionList * operand = (cCollectionElement_externSwiftFunctionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_externSwiftFunctionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList::GALGAS_externSwiftFunctionList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList::GALGAS_externSwiftFunctionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList GALGAS_externSwiftFunctionList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_externSwiftFunctionList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList GALGAS_externSwiftFunctionList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_lstring & inOperand1
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_externSwiftFunctionList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_externSwiftFunctionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_externSwiftFunctionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externSwiftFunctionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GALGAS_lstring & in_mExternSwiftFunctionName,
                                                                const GALGAS_lstring & in_mCallerName
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_externSwiftFunctionList * p = NULL ;
  macroMyNew (p, cCollectionElement_externSwiftFunctionList (in_mExternSwiftFunctionName,
                                                             in_mCallerName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externSwiftFunctionList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_lstring & inOperand1
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_externSwiftFunctionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externSwiftFunctionList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                           const GALGAS_lstring inOperand1,
                                                           const GALGAS_uint inInsertionIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_externSwiftFunctionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externSwiftFunctionList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                           GALGAS_lstring & outOperand1,
                                                           const GALGAS_uint inRemoveIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_externSwiftFunctionList * p = (cCollectionElement_externSwiftFunctionList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_externSwiftFunctionList) ;
      outOperand0 = p->mObject.mProperty_mExternSwiftFunctionName ;
      outOperand1 = p->mObject.mProperty_mCallerName ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externSwiftFunctionList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externSwiftFunctionList * p = (cCollectionElement_externSwiftFunctionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externSwiftFunctionList) ;
    outOperand0 = p->mObject.mProperty_mExternSwiftFunctionName ;
    outOperand1 = p->mObject.mProperty_mCallerName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externSwiftFunctionList::setter_popLast (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externSwiftFunctionList * p = (cCollectionElement_externSwiftFunctionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externSwiftFunctionList) ;
    outOperand0 = p->mObject.mProperty_mExternSwiftFunctionName ;
    outOperand1 = p->mObject.mProperty_mCallerName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externSwiftFunctionList::method_first (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externSwiftFunctionList * p = (cCollectionElement_externSwiftFunctionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externSwiftFunctionList) ;
    outOperand0 = p->mObject.mProperty_mExternSwiftFunctionName ;
    outOperand1 = p->mObject.mProperty_mCallerName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externSwiftFunctionList::method_last (GALGAS_lstring & outOperand0,
                                                  GALGAS_lstring & outOperand1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externSwiftFunctionList * p = (cCollectionElement_externSwiftFunctionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externSwiftFunctionList) ;
    outOperand0 = p->mObject.mProperty_mExternSwiftFunctionName ;
    outOperand1 = p->mObject.mProperty_mCallerName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList GALGAS_externSwiftFunctionList::add_operation (const GALGAS_externSwiftFunctionList & inOperand,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_externSwiftFunctionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList GALGAS_externSwiftFunctionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_externSwiftFunctionList result = GALGAS_externSwiftFunctionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList GALGAS_externSwiftFunctionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_externSwiftFunctionList result = GALGAS_externSwiftFunctionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList GALGAS_externSwiftFunctionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_externSwiftFunctionList result = GALGAS_externSwiftFunctionList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externSwiftFunctionList::plusAssign_operation (const GALGAS_externSwiftFunctionList inOperand,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_externSwiftFunctionList::getter_mExternSwiftFunctionNameAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externSwiftFunctionList * p = (cCollectionElement_externSwiftFunctionList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externSwiftFunctionList) ;
    result = p->mObject.mProperty_mExternSwiftFunctionName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_externSwiftFunctionList::getter_mCallerNameAtIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externSwiftFunctionList * p = (cCollectionElement_externSwiftFunctionList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externSwiftFunctionList) ;
    result = p->mObject.mProperty_mCallerName ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_externSwiftFunctionList::cEnumerator_externSwiftFunctionList (const GALGAS_externSwiftFunctionList & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList_2D_element cEnumerator_externSwiftFunctionList::current (LOCATION_ARGS) const {
  const cCollectionElement_externSwiftFunctionList * p = (const cCollectionElement_externSwiftFunctionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externSwiftFunctionList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_externSwiftFunctionList::current_mExternSwiftFunctionName (LOCATION_ARGS) const {
  const cCollectionElement_externSwiftFunctionList * p = (const cCollectionElement_externSwiftFunctionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externSwiftFunctionList) ;
  return p->mObject.mProperty_mExternSwiftFunctionName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_externSwiftFunctionList::current_mCallerName (LOCATION_ARGS) const {
  const cCollectionElement_externSwiftFunctionList * p = (const cCollectionElement_externSwiftFunctionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externSwiftFunctionList) ;
  return p->mObject.mProperty_mCallerName ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @externSwiftFunctionList type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externSwiftFunctionList ("externSwiftFunctionList",
                                                NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_externSwiftFunctionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externSwiftFunctionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_externSwiftFunctionList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externSwiftFunctionList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList GALGAS_externSwiftFunctionList::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_externSwiftFunctionList result ;
  const GALGAS_externSwiftFunctionList * p = (const GALGAS_externSwiftFunctionList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externSwiftFunctionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externSwiftFunctionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_externFunctionMap::cMapElement_externFunctionMap (const GALGAS_lstring & inKey
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_externFunctionMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_externFunctionMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_externFunctionMap (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_externFunctionMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_externFunctionMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_externFunctionMap * operand = (cMapElement_externFunctionMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externFunctionMap::GALGAS_externFunctionMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externFunctionMap::GALGAS_externFunctionMap (const GALGAS_externFunctionMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externFunctionMap & GALGAS_externFunctionMap::operator = (const GALGAS_externFunctionMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externFunctionMap GALGAS_externFunctionMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_externFunctionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externFunctionMap GALGAS_externFunctionMap::constructor_mapWithMapToOverride (const GALGAS_externFunctionMap & inMapToOverride
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_externFunctionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externFunctionMap GALGAS_externFunctionMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_externFunctionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externFunctionMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_externFunctionMap * p = NULL ;
  macroMyNew (p, cMapElement_externFunctionMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@externFunctionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externFunctionMap::setter_insertKey (GALGAS_lstring inKey,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_externFunctionMap * p = NULL ;
  macroMyNew (p, cMapElement_externFunctionMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' extern function is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_externFunctionMap * GALGAS_externFunctionMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_externFunctionMap * result = (cMapElement_externFunctionMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_externFunctionMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_externFunctionMap::cEnumerator_externFunctionMap (const GALGAS_externFunctionMap & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externFunctionMap_2D_element cEnumerator_externFunctionMap::current (LOCATION_ARGS) const {
  const cMapElement_externFunctionMap * p = (const cMapElement_externFunctionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_externFunctionMap) ;
  return GALGAS_externFunctionMap_2D_element (p->mProperty_lkey) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_externFunctionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @externFunctionMap type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externFunctionMap ("externFunctionMap",
                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_externFunctionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externFunctionMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_externFunctionMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externFunctionMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externFunctionMap GALGAS_externFunctionMap::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_externFunctionMap result ;
  const GALGAS_externFunctionMap * p = (const GALGAS_externFunctionMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externFunctionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externFunctionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_propertyClassDefaultValues_string::cEnumAssociatedValues_propertyClassDefaultValues_string (const GALGAS_stringset & inAssociatedValue0
                                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_propertyClassDefaultValues_string::description (C_String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_propertyClassDefaultValues_string::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_propertyClassDefaultValues_string * ptr = dynamic_cast<const cEnumAssociatedValues_propertyClassDefaultValues_string *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyClassDefaultValues::GALGAS_propertyClassDefaultValues (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyClassDefaultValues GALGAS_propertyClassDefaultValues::constructor_string (const GALGAS_stringset & inAssociatedValue0
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_propertyClassDefaultValues result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_string ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_propertyClassDefaultValues_string (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyClassDefaultValues::method_string (GALGAS_stringset & outAssociatedValue0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_string) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @propertyClassDefaultValues string invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_propertyClassDefaultValues_string * ptr = (const cEnumAssociatedValues_propertyClassDefaultValues_string *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_propertyClassDefaultValues [2] = {
  "(not built)",
  "string"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_propertyClassDefaultValues::getter_isString (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_string == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyClassDefaultValues::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<enum @propertyClassDefaultValues: " << gEnumNameArrayFor_propertyClassDefaultValues [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_propertyClassDefaultValues::objectCompare (const GALGAS_propertyClassDefaultValues & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @propertyClassDefaultValues type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyClassDefaultValues ("propertyClassDefaultValues",
                                                   NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_propertyClassDefaultValues::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyClassDefaultValues ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_propertyClassDefaultValues::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyClassDefaultValues (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyClassDefaultValues GALGAS_propertyClassDefaultValues::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_propertyClassDefaultValues result ;
  const GALGAS_propertyClassDefaultValues * p = (const GALGAS_propertyClassDefaultValues *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyClassDefaultValues *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyClassDefaultValues", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_enumConstantMap::cMapElement_enumConstantMap (const GALGAS_lstring & inKey
                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_enumConstantMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_enumConstantMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_enumConstantMap (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_enumConstantMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_enumConstantMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_enumConstantMap * operand = (cMapElement_enumConstantMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantMap::GALGAS_enumConstantMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantMap::GALGAS_enumConstantMap (const GALGAS_enumConstantMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantMap & GALGAS_enumConstantMap::operator = (const GALGAS_enumConstantMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantMap GALGAS_enumConstantMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_enumConstantMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantMap GALGAS_enumConstantMap::constructor_mapWithMapToOverride (const GALGAS_enumConstantMap & inMapToOverride
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_enumConstantMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantMap GALGAS_enumConstantMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_enumConstantMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumConstantMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_enumConstantMap * p = NULL ;
  macroMyNew (p, cMapElement_enumConstantMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@enumConstantMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumConstantMap::setter_insertKey (GALGAS_lstring inKey,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_enumConstantMap * p = NULL ;
  macroMyNew (p, cMapElement_enumConstantMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "there is already a '%K' constant" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_enumConstantMap_searchKey = "the '%K' constant is not defined" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumConstantMap::method_searchKey (GALGAS_lstring inKey,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  const cMapElement_enumConstantMap * p = (const cMapElement_enumConstantMap *) performSearch (inKey,
                                                                                               inCompiler,
                                                                                               kSearchErrorMessage_enumConstantMap_searchKey
                                                                                               COMMA_THERE) ;
  if (NULL == p) {
  }else{
    macroValidSharedObject (p, cMapElement_enumConstantMap) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_enumConstantMap * GALGAS_enumConstantMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_enumConstantMap * result = (cMapElement_enumConstantMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_enumConstantMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_enumConstantMap::cEnumerator_enumConstantMap (const GALGAS_enumConstantMap & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantMap_2D_element cEnumerator_enumConstantMap::current (LOCATION_ARGS) const {
  const cMapElement_enumConstantMap * p = (const cMapElement_enumConstantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_enumConstantMap) ;
  return GALGAS_enumConstantMap_2D_element (p->mProperty_lkey) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_enumConstantMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @enumConstantMap type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumConstantMap ("enumConstantMap",
                                        NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_enumConstantMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumConstantMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_enumConstantMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumConstantMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantMap GALGAS_enumConstantMap::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_enumConstantMap result ;
  const GALGAS_enumConstantMap * p = (const GALGAS_enumConstantMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumConstantMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumConstantMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Class for element of '@enumListForGeneration' list                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_enumListForGeneration : public cCollectionElement {
  public : GALGAS_enumListForGeneration_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_enumListForGeneration (const GALGAS_string & in_mEnumName,
                                                     const GALGAS_lstringlist & in_mEnumConstantList
                                                     COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_enumListForGeneration::cCollectionElement_enumListForGeneration (const GALGAS_string & in_mEnumName,
                                                                                    const GALGAS_lstringlist & in_mEnumConstantList
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEnumName, in_mEnumConstantList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_enumListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_enumListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_enumListForGeneration (mObject.mProperty_mEnumName, mObject.mProperty_mEnumConstantList COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_enumListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEnumName" ":" ;
  mObject.mProperty_mEnumName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEnumConstantList" ":" ;
  mObject.mProperty_mEnumConstantList.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_enumListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_enumListForGeneration * operand = (cCollectionElement_enumListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_enumListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumListForGeneration::GALGAS_enumListForGeneration (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumListForGeneration::GALGAS_enumListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumListForGeneration GALGAS_enumListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumListForGeneration  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumListForGeneration GALGAS_enumListForGeneration::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                      const GALGAS_lstringlist & inOperand1
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_enumListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_enumListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_enumListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GALGAS_string & in_mEnumName,
                                                              const GALGAS_lstringlist & in_mEnumConstantList
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_enumListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_enumListForGeneration (in_mEnumName,
                                                           in_mEnumConstantList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumListForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                        const GALGAS_lstringlist & inOperand1
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_enumListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumListForGeneration::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                         const GALGAS_lstringlist inOperand1,
                                                         const GALGAS_uint inInsertionIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_enumListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumListForGeneration::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                         GALGAS_lstringlist & outOperand1,
                                                         const GALGAS_uint inRemoveIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_enumListForGeneration * p = (cCollectionElement_enumListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_enumListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mEnumName ;
      outOperand1 = p->mObject.mProperty_mEnumConstantList ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumListForGeneration::setter_popFirst (GALGAS_string & outOperand0,
                                                    GALGAS_lstringlist & outOperand1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumListForGeneration * p = (cCollectionElement_enumListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mEnumName ;
    outOperand1 = p->mObject.mProperty_mEnumConstantList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumListForGeneration::setter_popLast (GALGAS_string & outOperand0,
                                                   GALGAS_lstringlist & outOperand1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumListForGeneration * p = (cCollectionElement_enumListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mEnumName ;
    outOperand1 = p->mObject.mProperty_mEnumConstantList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumListForGeneration::method_first (GALGAS_string & outOperand0,
                                                 GALGAS_lstringlist & outOperand1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumListForGeneration * p = (cCollectionElement_enumListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mEnumName ;
    outOperand1 = p->mObject.mProperty_mEnumConstantList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumListForGeneration::method_last (GALGAS_string & outOperand0,
                                                GALGAS_lstringlist & outOperand1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumListForGeneration * p = (cCollectionElement_enumListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mEnumName ;
    outOperand1 = p->mObject.mProperty_mEnumConstantList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumListForGeneration GALGAS_enumListForGeneration::add_operation (const GALGAS_enumListForGeneration & inOperand,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_enumListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumListForGeneration GALGAS_enumListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_enumListForGeneration result = GALGAS_enumListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumListForGeneration GALGAS_enumListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_enumListForGeneration result = GALGAS_enumListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumListForGeneration GALGAS_enumListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_enumListForGeneration result = GALGAS_enumListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumListForGeneration::plusAssign_operation (const GALGAS_enumListForGeneration inOperand,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_enumListForGeneration::getter_mEnumNameAtIndex (const GALGAS_uint & inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_enumListForGeneration * p = (cCollectionElement_enumListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_enumListForGeneration) ;
    result = p->mObject.mProperty_mEnumName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_enumListForGeneration::getter_mEnumConstantListAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_enumListForGeneration * p = (cCollectionElement_enumListForGeneration *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_enumListForGeneration) ;
    result = p->mObject.mProperty_mEnumConstantList ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_enumListForGeneration::cEnumerator_enumListForGeneration (const GALGAS_enumListForGeneration & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumListForGeneration_2D_element cEnumerator_enumListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_enumListForGeneration * p = (const cCollectionElement_enumListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumListForGeneration) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_enumListForGeneration::current_mEnumName (LOCATION_ARGS) const {
  const cCollectionElement_enumListForGeneration * p = (const cCollectionElement_enumListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumListForGeneration) ;
  return p->mObject.mProperty_mEnumName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cEnumerator_enumListForGeneration::current_mEnumConstantList (LOCATION_ARGS) const {
  const cCollectionElement_enumListForGeneration * p = (const cCollectionElement_enumListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumListForGeneration) ;
  return p->mObject.mProperty_mEnumConstantList ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @enumListForGeneration type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumListForGeneration ("enumListForGeneration",
                                              NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_enumListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_enumListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumListForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumListForGeneration GALGAS_enumListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_enumListForGeneration result ;
  const GALGAS_enumListForGeneration * p = (const GALGAS_enumListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Class for element of '@toOneRelationshipList' list                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_toOneRelationshipList : public cCollectionElement {
  public : GALGAS_toOneRelationshipList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_toOneRelationshipList (const GALGAS_lstring & in_mDestinationEntityName,
                                                     const GALGAS_lstring & in_mToOneRelationshipName,
                                                     const GALGAS_lstring & in_mInverseRelationshipName,
                                                     const GALGAS_propertyMultiplicity & in_mInverseRelationMultiplicity,
                                                     const GALGAS_bool & in_mCascading
                                                     COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_toOneRelationshipList::cCollectionElement_toOneRelationshipList (const GALGAS_lstring & in_mDestinationEntityName,
                                                                                    const GALGAS_lstring & in_mToOneRelationshipName,
                                                                                    const GALGAS_lstring & in_mInverseRelationshipName,
                                                                                    const GALGAS_propertyMultiplicity & in_mInverseRelationMultiplicity,
                                                                                    const GALGAS_bool & in_mCascading
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDestinationEntityName, in_mToOneRelationshipName, in_mInverseRelationshipName, in_mInverseRelationMultiplicity, in_mCascading) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_toOneRelationshipList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_toOneRelationshipList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_toOneRelationshipList (mObject.mProperty_mDestinationEntityName, mObject.mProperty_mToOneRelationshipName, mObject.mProperty_mInverseRelationshipName, mObject.mProperty_mInverseRelationMultiplicity, mObject.mProperty_mCascading COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_toOneRelationshipList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDestinationEntityName" ":" ;
  mObject.mProperty_mDestinationEntityName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mToOneRelationshipName" ":" ;
  mObject.mProperty_mToOneRelationshipName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInverseRelationshipName" ":" ;
  mObject.mProperty_mInverseRelationshipName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInverseRelationMultiplicity" ":" ;
  mObject.mProperty_mInverseRelationMultiplicity.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCascading" ":" ;
  mObject.mProperty_mCascading.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_toOneRelationshipList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_toOneRelationshipList * operand = (cCollectionElement_toOneRelationshipList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_toOneRelationshipList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneRelationshipList::GALGAS_toOneRelationshipList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneRelationshipList::GALGAS_toOneRelationshipList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneRelationshipList GALGAS_toOneRelationshipList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_toOneRelationshipList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneRelationshipList GALGAS_toOneRelationshipList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_lstring & inOperand1,
                                                                                      const GALGAS_lstring & inOperand2,
                                                                                      const GALGAS_propertyMultiplicity & inOperand3,
                                                                                      const GALGAS_bool & inOperand4
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_toOneRelationshipList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_toOneRelationshipList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_toOneRelationshipList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneRelationshipList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GALGAS_lstring & in_mDestinationEntityName,
                                                              const GALGAS_lstring & in_mToOneRelationshipName,
                                                              const GALGAS_lstring & in_mInverseRelationshipName,
                                                              const GALGAS_propertyMultiplicity & in_mInverseRelationMultiplicity,
                                                              const GALGAS_bool & in_mCascading
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_toOneRelationshipList * p = NULL ;
  macroMyNew (p, cCollectionElement_toOneRelationshipList (in_mDestinationEntityName,
                                                           in_mToOneRelationshipName,
                                                           in_mInverseRelationshipName,
                                                           in_mInverseRelationMultiplicity,
                                                           in_mCascading COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneRelationshipList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                        const GALGAS_lstring & inOperand1,
                                                        const GALGAS_lstring & inOperand2,
                                                        const GALGAS_propertyMultiplicity & inOperand3,
                                                        const GALGAS_bool & inOperand4
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_toOneRelationshipList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneRelationshipList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                         const GALGAS_lstring inOperand1,
                                                         const GALGAS_lstring inOperand2,
                                                         const GALGAS_propertyMultiplicity inOperand3,
                                                         const GALGAS_bool inOperand4,
                                                         const GALGAS_uint inInsertionIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_toOneRelationshipList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneRelationshipList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         GALGAS_lstring & outOperand2,
                                                         GALGAS_propertyMultiplicity & outOperand3,
                                                         GALGAS_bool & outOperand4,
                                                         const GALGAS_uint inRemoveIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_toOneRelationshipList * p = (cCollectionElement_toOneRelationshipList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_toOneRelationshipList) ;
      outOperand0 = p->mObject.mProperty_mDestinationEntityName ;
      outOperand1 = p->mObject.mProperty_mToOneRelationshipName ;
      outOperand2 = p->mObject.mProperty_mInverseRelationshipName ;
      outOperand3 = p->mObject.mProperty_mInverseRelationMultiplicity ;
      outOperand4 = p->mObject.mProperty_mCascading ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneRelationshipList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    GALGAS_lstring & outOperand2,
                                                    GALGAS_propertyMultiplicity & outOperand3,
                                                    GALGAS_bool & outOperand4,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneRelationshipList * p = (cCollectionElement_toOneRelationshipList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toOneRelationshipList) ;
    outOperand0 = p->mObject.mProperty_mDestinationEntityName ;
    outOperand1 = p->mObject.mProperty_mToOneRelationshipName ;
    outOperand2 = p->mObject.mProperty_mInverseRelationshipName ;
    outOperand3 = p->mObject.mProperty_mInverseRelationMultiplicity ;
    outOperand4 = p->mObject.mProperty_mCascading ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneRelationshipList::setter_popLast (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   GALGAS_lstring & outOperand2,
                                                   GALGAS_propertyMultiplicity & outOperand3,
                                                   GALGAS_bool & outOperand4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneRelationshipList * p = (cCollectionElement_toOneRelationshipList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toOneRelationshipList) ;
    outOperand0 = p->mObject.mProperty_mDestinationEntityName ;
    outOperand1 = p->mObject.mProperty_mToOneRelationshipName ;
    outOperand2 = p->mObject.mProperty_mInverseRelationshipName ;
    outOperand3 = p->mObject.mProperty_mInverseRelationMultiplicity ;
    outOperand4 = p->mObject.mProperty_mCascading ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneRelationshipList::method_first (GALGAS_lstring & outOperand0,
                                                 GALGAS_lstring & outOperand1,
                                                 GALGAS_lstring & outOperand2,
                                                 GALGAS_propertyMultiplicity & outOperand3,
                                                 GALGAS_bool & outOperand4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneRelationshipList * p = (cCollectionElement_toOneRelationshipList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toOneRelationshipList) ;
    outOperand0 = p->mObject.mProperty_mDestinationEntityName ;
    outOperand1 = p->mObject.mProperty_mToOneRelationshipName ;
    outOperand2 = p->mObject.mProperty_mInverseRelationshipName ;
    outOperand3 = p->mObject.mProperty_mInverseRelationMultiplicity ;
    outOperand4 = p->mObject.mProperty_mCascading ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneRelationshipList::method_last (GALGAS_lstring & outOperand0,
                                                GALGAS_lstring & outOperand1,
                                                GALGAS_lstring & outOperand2,
                                                GALGAS_propertyMultiplicity & outOperand3,
                                                GALGAS_bool & outOperand4,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneRelationshipList * p = (cCollectionElement_toOneRelationshipList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toOneRelationshipList) ;
    outOperand0 = p->mObject.mProperty_mDestinationEntityName ;
    outOperand1 = p->mObject.mProperty_mToOneRelationshipName ;
    outOperand2 = p->mObject.mProperty_mInverseRelationshipName ;
    outOperand3 = p->mObject.mProperty_mInverseRelationMultiplicity ;
    outOperand4 = p->mObject.mProperty_mCascading ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneRelationshipList GALGAS_toOneRelationshipList::add_operation (const GALGAS_toOneRelationshipList & inOperand,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_toOneRelationshipList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneRelationshipList GALGAS_toOneRelationshipList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_toOneRelationshipList result = GALGAS_toOneRelationshipList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneRelationshipList GALGAS_toOneRelationshipList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_toOneRelationshipList result = GALGAS_toOneRelationshipList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneRelationshipList GALGAS_toOneRelationshipList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_toOneRelationshipList result = GALGAS_toOneRelationshipList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneRelationshipList::plusAssign_operation (const GALGAS_toOneRelationshipList inOperand,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_toOneRelationshipList::getter_mDestinationEntityNameAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneRelationshipList * p = (cCollectionElement_toOneRelationshipList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toOneRelationshipList) ;
    result = p->mObject.mProperty_mDestinationEntityName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_toOneRelationshipList::getter_mToOneRelationshipNameAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneRelationshipList * p = (cCollectionElement_toOneRelationshipList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toOneRelationshipList) ;
    result = p->mObject.mProperty_mToOneRelationshipName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_toOneRelationshipList::getter_mInverseRelationshipNameAtIndex (const GALGAS_uint & inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneRelationshipList * p = (cCollectionElement_toOneRelationshipList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toOneRelationshipList) ;
    result = p->mObject.mProperty_mInverseRelationshipName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMultiplicity GALGAS_toOneRelationshipList::getter_mInverseRelationMultiplicityAtIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneRelationshipList * p = (cCollectionElement_toOneRelationshipList *) attributes.ptr () ;
  GALGAS_propertyMultiplicity result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toOneRelationshipList) ;
    result = p->mObject.mProperty_mInverseRelationMultiplicity ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_toOneRelationshipList::getter_mCascadingAtIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneRelationshipList * p = (cCollectionElement_toOneRelationshipList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toOneRelationshipList) ;
    result = p->mObject.mProperty_mCascading ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_toOneRelationshipList::cEnumerator_toOneRelationshipList (const GALGAS_toOneRelationshipList & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneRelationshipList_2D_element cEnumerator_toOneRelationshipList::current (LOCATION_ARGS) const {
  const cCollectionElement_toOneRelationshipList * p = (const cCollectionElement_toOneRelationshipList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOneRelationshipList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_toOneRelationshipList::current_mDestinationEntityName (LOCATION_ARGS) const {
  const cCollectionElement_toOneRelationshipList * p = (const cCollectionElement_toOneRelationshipList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOneRelationshipList) ;
  return p->mObject.mProperty_mDestinationEntityName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_toOneRelationshipList::current_mToOneRelationshipName (LOCATION_ARGS) const {
  const cCollectionElement_toOneRelationshipList * p = (const cCollectionElement_toOneRelationshipList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOneRelationshipList) ;
  return p->mObject.mProperty_mToOneRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_toOneRelationshipList::current_mInverseRelationshipName (LOCATION_ARGS) const {
  const cCollectionElement_toOneRelationshipList * p = (const cCollectionElement_toOneRelationshipList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOneRelationshipList) ;
  return p->mObject.mProperty_mInverseRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMultiplicity cEnumerator_toOneRelationshipList::current_mInverseRelationMultiplicity (LOCATION_ARGS) const {
  const cCollectionElement_toOneRelationshipList * p = (const cCollectionElement_toOneRelationshipList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOneRelationshipList) ;
  return p->mObject.mProperty_mInverseRelationMultiplicity ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_toOneRelationshipList::current_mCascading (LOCATION_ARGS) const {
  const cCollectionElement_toOneRelationshipList * p = (const cCollectionElement_toOneRelationshipList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOneRelationshipList) ;
  return p->mObject.mProperty_mCascading ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @toOneRelationshipList type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toOneRelationshipList ("toOneRelationshipList",
                                              NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_toOneRelationshipList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOneRelationshipList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_toOneRelationshipList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toOneRelationshipList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneRelationshipList GALGAS_toOneRelationshipList::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_toOneRelationshipList result ;
  const GALGAS_toOneRelationshipList * p = (const GALGAS_toOneRelationshipList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toOneRelationshipList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toOneRelationshipList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMultiplicity::GALGAS_propertyMultiplicity (void) :
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMultiplicity GALGAS_propertyMultiplicity::constructor_single (UNUSED_LOCATION_ARGS) {
  GALGAS_propertyMultiplicity result ;
  result.mEnum = kEnum_single ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMultiplicity GALGAS_propertyMultiplicity::constructor_collection (UNUSED_LOCATION_ARGS) {
  GALGAS_propertyMultiplicity result ;
  result.mEnum = kEnum_collection ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_propertyMultiplicity [3] = {
  "(not built)",
  "single",
  "collection"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_propertyMultiplicity::getter_isSingle (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_single == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_propertyMultiplicity::getter_isCollection (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_collection == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyMultiplicity::description (C_String & ioString,
                                               const int32_t /* inIndentation */) const {
  ioString << "<enum @propertyMultiplicity: " << gEnumNameArrayFor_propertyMultiplicity [mEnum] ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_propertyMultiplicity::objectCompare (const GALGAS_propertyMultiplicity & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @propertyMultiplicity type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyMultiplicity ("propertyMultiplicity",
                                             NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_propertyMultiplicity::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyMultiplicity ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_propertyMultiplicity::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyMultiplicity (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMultiplicity GALGAS_propertyMultiplicity::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_propertyMultiplicity result ;
  const GALGAS_propertyMultiplicity * p = (const GALGAS_propertyMultiplicity *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyMultiplicity *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyMultiplicity", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Class for element of '@toManyRelationshipList' list                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_toManyRelationshipList : public cCollectionElement {
  public : GALGAS_toManyRelationshipList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_toManyRelationshipList (const GALGAS_lstring & in_mDestinationEntityName,
                                                      const GALGAS_lstring & in_mToManyRelationshipName,
                                                      const GALGAS_lstring & in_mInverseRelationshipName,
                                                      const GALGAS_bool & in_mCascading
                                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_toManyRelationshipList::cCollectionElement_toManyRelationshipList (const GALGAS_lstring & in_mDestinationEntityName,
                                                                                      const GALGAS_lstring & in_mToManyRelationshipName,
                                                                                      const GALGAS_lstring & in_mInverseRelationshipName,
                                                                                      const GALGAS_bool & in_mCascading
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDestinationEntityName, in_mToManyRelationshipName, in_mInverseRelationshipName, in_mCascading) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_toManyRelationshipList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_toManyRelationshipList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_toManyRelationshipList (mObject.mProperty_mDestinationEntityName, mObject.mProperty_mToManyRelationshipName, mObject.mProperty_mInverseRelationshipName, mObject.mProperty_mCascading COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_toManyRelationshipList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDestinationEntityName" ":" ;
  mObject.mProperty_mDestinationEntityName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mToManyRelationshipName" ":" ;
  mObject.mProperty_mToManyRelationshipName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInverseRelationshipName" ":" ;
  mObject.mProperty_mInverseRelationshipName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCascading" ":" ;
  mObject.mProperty_mCascading.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_toManyRelationshipList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_toManyRelationshipList * operand = (cCollectionElement_toManyRelationshipList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_toManyRelationshipList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyRelationshipList::GALGAS_toManyRelationshipList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyRelationshipList::GALGAS_toManyRelationshipList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyRelationshipList GALGAS_toManyRelationshipList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_toManyRelationshipList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyRelationshipList GALGAS_toManyRelationshipList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_lstring & inOperand1,
                                                                                        const GALGAS_lstring & inOperand2,
                                                                                        const GALGAS_bool & inOperand3
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_toManyRelationshipList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_toManyRelationshipList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_toManyRelationshipList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyRelationshipList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_lstring & in_mDestinationEntityName,
                                                               const GALGAS_lstring & in_mToManyRelationshipName,
                                                               const GALGAS_lstring & in_mInverseRelationshipName,
                                                               const GALGAS_bool & in_mCascading
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_toManyRelationshipList * p = NULL ;
  macroMyNew (p, cCollectionElement_toManyRelationshipList (in_mDestinationEntityName,
                                                            in_mToManyRelationshipName,
                                                            in_mInverseRelationshipName,
                                                            in_mCascading COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyRelationshipList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                         const GALGAS_lstring & inOperand1,
                                                         const GALGAS_lstring & inOperand2,
                                                         const GALGAS_bool & inOperand3
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_toManyRelationshipList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyRelationshipList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                          const GALGAS_lstring inOperand1,
                                                          const GALGAS_lstring inOperand2,
                                                          const GALGAS_bool inOperand3,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_toManyRelationshipList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyRelationshipList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          GALGAS_lstring & outOperand2,
                                                          GALGAS_bool & outOperand3,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_toManyRelationshipList * p = (cCollectionElement_toManyRelationshipList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_toManyRelationshipList) ;
      outOperand0 = p->mObject.mProperty_mDestinationEntityName ;
      outOperand1 = p->mObject.mProperty_mToManyRelationshipName ;
      outOperand2 = p->mObject.mProperty_mInverseRelationshipName ;
      outOperand3 = p->mObject.mProperty_mCascading ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyRelationshipList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     GALGAS_lstring & outOperand2,
                                                     GALGAS_bool & outOperand3,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyRelationshipList * p = (cCollectionElement_toManyRelationshipList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyRelationshipList) ;
    outOperand0 = p->mObject.mProperty_mDestinationEntityName ;
    outOperand1 = p->mObject.mProperty_mToManyRelationshipName ;
    outOperand2 = p->mObject.mProperty_mInverseRelationshipName ;
    outOperand3 = p->mObject.mProperty_mCascading ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyRelationshipList::setter_popLast (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    GALGAS_lstring & outOperand2,
                                                    GALGAS_bool & outOperand3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyRelationshipList * p = (cCollectionElement_toManyRelationshipList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyRelationshipList) ;
    outOperand0 = p->mObject.mProperty_mDestinationEntityName ;
    outOperand1 = p->mObject.mProperty_mToManyRelationshipName ;
    outOperand2 = p->mObject.mProperty_mInverseRelationshipName ;
    outOperand3 = p->mObject.mProperty_mCascading ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyRelationshipList::method_first (GALGAS_lstring & outOperand0,
                                                  GALGAS_lstring & outOperand1,
                                                  GALGAS_lstring & outOperand2,
                                                  GALGAS_bool & outOperand3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyRelationshipList * p = (cCollectionElement_toManyRelationshipList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyRelationshipList) ;
    outOperand0 = p->mObject.mProperty_mDestinationEntityName ;
    outOperand1 = p->mObject.mProperty_mToManyRelationshipName ;
    outOperand2 = p->mObject.mProperty_mInverseRelationshipName ;
    outOperand3 = p->mObject.mProperty_mCascading ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyRelationshipList::method_last (GALGAS_lstring & outOperand0,
                                                 GALGAS_lstring & outOperand1,
                                                 GALGAS_lstring & outOperand2,
                                                 GALGAS_bool & outOperand3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyRelationshipList * p = (cCollectionElement_toManyRelationshipList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyRelationshipList) ;
    outOperand0 = p->mObject.mProperty_mDestinationEntityName ;
    outOperand1 = p->mObject.mProperty_mToManyRelationshipName ;
    outOperand2 = p->mObject.mProperty_mInverseRelationshipName ;
    outOperand3 = p->mObject.mProperty_mCascading ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyRelationshipList GALGAS_toManyRelationshipList::add_operation (const GALGAS_toManyRelationshipList & inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_toManyRelationshipList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyRelationshipList GALGAS_toManyRelationshipList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_toManyRelationshipList result = GALGAS_toManyRelationshipList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyRelationshipList GALGAS_toManyRelationshipList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_toManyRelationshipList result = GALGAS_toManyRelationshipList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyRelationshipList GALGAS_toManyRelationshipList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_toManyRelationshipList result = GALGAS_toManyRelationshipList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyRelationshipList::plusAssign_operation (const GALGAS_toManyRelationshipList inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_toManyRelationshipList::getter_mDestinationEntityNameAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyRelationshipList * p = (cCollectionElement_toManyRelationshipList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toManyRelationshipList) ;
    result = p->mObject.mProperty_mDestinationEntityName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_toManyRelationshipList::getter_mToManyRelationshipNameAtIndex (const GALGAS_uint & inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyRelationshipList * p = (cCollectionElement_toManyRelationshipList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toManyRelationshipList) ;
    result = p->mObject.mProperty_mToManyRelationshipName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_toManyRelationshipList::getter_mInverseRelationshipNameAtIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyRelationshipList * p = (cCollectionElement_toManyRelationshipList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toManyRelationshipList) ;
    result = p->mObject.mProperty_mInverseRelationshipName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_toManyRelationshipList::getter_mCascadingAtIndex (const GALGAS_uint & inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyRelationshipList * p = (cCollectionElement_toManyRelationshipList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toManyRelationshipList) ;
    result = p->mObject.mProperty_mCascading ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_toManyRelationshipList::cEnumerator_toManyRelationshipList (const GALGAS_toManyRelationshipList & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyRelationshipList_2D_element cEnumerator_toManyRelationshipList::current (LOCATION_ARGS) const {
  const cCollectionElement_toManyRelationshipList * p = (const cCollectionElement_toManyRelationshipList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyRelationshipList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_toManyRelationshipList::current_mDestinationEntityName (LOCATION_ARGS) const {
  const cCollectionElement_toManyRelationshipList * p = (const cCollectionElement_toManyRelationshipList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyRelationshipList) ;
  return p->mObject.mProperty_mDestinationEntityName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_toManyRelationshipList::current_mToManyRelationshipName (LOCATION_ARGS) const {
  const cCollectionElement_toManyRelationshipList * p = (const cCollectionElement_toManyRelationshipList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyRelationshipList) ;
  return p->mObject.mProperty_mToManyRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_toManyRelationshipList::current_mInverseRelationshipName (LOCATION_ARGS) const {
  const cCollectionElement_toManyRelationshipList * p = (const cCollectionElement_toManyRelationshipList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyRelationshipList) ;
  return p->mObject.mProperty_mInverseRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_toManyRelationshipList::current_mCascading (LOCATION_ARGS) const {
  const cCollectionElement_toManyRelationshipList * p = (const cCollectionElement_toManyRelationshipList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyRelationshipList) ;
  return p->mObject.mProperty_mCascading ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @toManyRelationshipList type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toManyRelationshipList ("toManyRelationshipList",
                                               NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_toManyRelationshipList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyRelationshipList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_toManyRelationshipList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyRelationshipList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyRelationshipList GALGAS_toManyRelationshipList::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_toManyRelationshipList result ;
  const GALGAS_toManyRelationshipList * p = (const GALGAS_toManyRelationshipList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toManyRelationshipList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyRelationshipList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Extension method '@toOneRelationshipList typeInventory'                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_typeInventory (const GALGAS_toOneRelationshipList inObject,
                                    GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                    C_Compiler * /* inCompiler */
                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_toOneRelationshipList temp_0 = inObject ;
  cEnumerator_toOneRelationshipList enumerator_4604 (temp_0, kENUMERATION_UP) ;
  while (enumerator_4604.hasCurrentObject ()) {
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_4707 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioUnifiedTypeMap, enumerator_4604.current_mDestinationEntityName (HERE), joker_4707 COMMA_SOURCE_FILE ("relationships.galgas", 128)) ;
    }
    enumerator_4604.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Extension method '@toManyRelationshipList typeInventory'                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_typeInventory (const GALGAS_toManyRelationshipList inObject,
                                    GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                    C_Compiler * /* inCompiler */
                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_toManyRelationshipList temp_0 = inObject ;
  cEnumerator_toManyRelationshipList enumerator_4946 (temp_0, kENUMERATION_UP) ;
  while (enumerator_4946.hasCurrentObject ()) {
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_5049 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioUnifiedTypeMap, enumerator_4946.current_mDestinationEntityName (HERE), joker_5049 COMMA_SOURCE_FILE ("relationships.galgas", 142)) ;
    }
    enumerator_4946.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Extension method '@toOneRelationshipList buildObservablePropertyMap'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_buildObservablePropertyMap (const GALGAS_toOneRelationshipList inObject,
                                                 const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                 GALGAS_observablePropertyMap & ioArgument_ioObservableProperties,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_toOneRelationshipList temp_0 = inObject ;
  cEnumerator_toOneRelationshipList enumerator_5595 (temp_0, kENUMERATION_UP) ;
  while (enumerator_5595.hasCurrentObject ()) {
    GALGAS_typeKind var_type_5685 ;
    GALGAS_actionMap var_actionMap_5700 ;
    constinArgument_inUnifiedTypeMap.method_searchKey (enumerator_5595.current_mDestinationEntityName (HERE), var_type_5685, var_actionMap_5700, inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 160)) ;
    switch (var_type_5685.enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_boolType:
    case GALGAS_typeKind::kEnum_integerType:
    case GALGAS_typeKind::kEnum_stringType:
    case GALGAS_typeKind::kEnum_dateType:
    case GALGAS_typeKind::kEnum_doubleType:
    case GALGAS_typeKind::kEnum_fontType:
      {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_5595.current_mDestinationEntityName (HERE).getter_location (SOURCE_FILE ("relationships.galgas", 164)), GALGAS_string ("a simple type cannot be used as entitytype"), fixItArray1  COMMA_SOURCE_FILE ("relationships.galgas", 164)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_enumType:
      {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_5595.current_mDestinationEntityName (HERE).getter_location (SOURCE_FILE ("relationships.galgas", 166)), GALGAS_string ("an enumeration type cannot be used as entitytype"), fixItArray2  COMMA_SOURCE_FILE ("relationships.galgas", 166)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_classType:
      {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_5595.current_mDestinationEntityName (HERE).getter_location (SOURCE_FILE ("relationships.galgas", 168)), GALGAS_string ("a class type cannot be used as entitytype"), fixItArray3  COMMA_SOURCE_FILE ("relationships.galgas", 168)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_propertyClassType:
      {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (enumerator_5595.current_mDestinationEntityName (HERE).getter_location (SOURCE_FILE ("relationships.galgas", 170)), GALGAS_string ("a property class type cannot be used as entitytype"), fixItArray4  COMMA_SOURCE_FILE ("relationships.galgas", 170)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_transientPropertyExternType:
      {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_5595.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("relationships.galgas", 172)), GALGAS_string ("the opposite type cannot be used as entity type"), fixItArray5  COMMA_SOURCE_FILE ("relationships.galgas", 172)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_entityType:
      {
      }
      break ;
    }
    {
    ioArgument_ioObservableProperties.setter_insertKey (enumerator_5595.current_mToOneRelationshipName (HERE), var_type_5685, GALGAS_propertyKind::constructor_stored (SOURCE_FILE ("relationships.galgas", 179)), GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("relationships.galgas", 180)), enumerator_5595.current_mInverseRelationshipName (HERE).getter_string (HERE), var_actionMap_5700, enumerator_5595.current_mCascading (HERE), inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 176)) ;
    }
    enumerator_5595.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Extension method '@toManyRelationshipList buildObservablePropertyMap'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_buildObservablePropertyMap (const GALGAS_toManyRelationshipList inObject,
                                                 const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                 GALGAS_observablePropertyMap & ioArgument_ioObservableProperties,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_toManyRelationshipList temp_0 = inObject ;
  cEnumerator_toManyRelationshipList enumerator_6923 (temp_0, kENUMERATION_UP) ;
  while (enumerator_6923.hasCurrentObject ()) {
    GALGAS_typeKind var_type_7013 ;
    GALGAS_actionMap var_actionMap_7028 ;
    constinArgument_inUnifiedTypeMap.method_searchKey (enumerator_6923.current_mDestinationEntityName (HERE), var_type_7013, var_actionMap_7028, inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 196)) ;
    switch (var_type_7013.enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_boolType:
    case GALGAS_typeKind::kEnum_integerType:
    case GALGAS_typeKind::kEnum_stringType:
    case GALGAS_typeKind::kEnum_dateType:
    case GALGAS_typeKind::kEnum_doubleType:
    case GALGAS_typeKind::kEnum_fontType:
      {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_6923.current_mDestinationEntityName (HERE).getter_location (SOURCE_FILE ("relationships.galgas", 200)), GALGAS_string ("a simple type cannot be used as entitytype"), fixItArray1  COMMA_SOURCE_FILE ("relationships.galgas", 200)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_enumType:
      {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_6923.current_mDestinationEntityName (HERE).getter_location (SOURCE_FILE ("relationships.galgas", 202)), GALGAS_string ("an enumeration type cannot be used as entitytype"), fixItArray2  COMMA_SOURCE_FILE ("relationships.galgas", 202)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_classType:
      {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_6923.current_mDestinationEntityName (HERE).getter_location (SOURCE_FILE ("relationships.galgas", 204)), GALGAS_string ("a class type cannot be used as entitytype"), fixItArray3  COMMA_SOURCE_FILE ("relationships.galgas", 204)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_propertyClassType:
      {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (enumerator_6923.current_mDestinationEntityName (HERE).getter_location (SOURCE_FILE ("relationships.galgas", 206)), GALGAS_string ("a property class type cannot be used as entitytype"), fixItArray4  COMMA_SOURCE_FILE ("relationships.galgas", 206)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_transientPropertyExternType:
      {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_6923.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("relationships.galgas", 208)), GALGAS_string ("the opposite type cannot be used as entity type"), fixItArray5  COMMA_SOURCE_FILE ("relationships.galgas", 208)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_entityType:
      {
      }
      break ;
    }
    {
    ioArgument_ioObservableProperties.setter_insertKey (enumerator_6923.current_mToManyRelationshipName (HERE), var_type_7013, GALGAS_propertyKind::constructor_stored (SOURCE_FILE ("relationships.galgas", 215)), GALGAS_propertyMultiplicity::constructor_collection (SOURCE_FILE ("relationships.galgas", 216)), enumerator_6923.current_mInverseRelationshipName (HERE).getter_string (HERE), var_actionMap_7028, enumerator_6923.current_mCascading (HERE), inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 212)) ;
    }
    enumerator_6923.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Extension method '@toOneRelationshipList semanticAnalysis'                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_semanticAnalysis (const GALGAS_toOneRelationshipList inObject,
                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                       GALGAS_toOneEntityRelationshipListForGeneration & outArgument_outToOneEntityRelationshipListForGeneration,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outToOneEntityRelationshipListForGeneration.drop () ; // Release 'out' argument
  outArgument_outToOneEntityRelationshipListForGeneration = GALGAS_toOneEntityRelationshipListForGeneration::constructor_emptyList (SOURCE_FILE ("relationships.galgas", 232)) ;
  const GALGAS_toOneRelationshipList temp_0 = inObject ;
  cEnumerator_toOneRelationshipList enumerator_8579 (temp_0, kENUMERATION_UP) ;
  while (enumerator_8579.hasCurrentObject ()) {
    GALGAS_typeKind var_type_8665 ;
    GALGAS_actionMap joker_8667 ; // Joker input parameter
    constinArgument_inSemanticContext.getter_mUnifiedTypeMap (HERE).method_searchKey (enumerator_8579.current_mDestinationEntityName (HERE), var_type_8665, joker_8667, inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 234)) ;
    GALGAS_observablePropertyMap var_destinationEntityObservablePropertyMap_8830 ;
    constinArgument_inSemanticContext.getter_mEntityObservablePropertyMap (HERE).method_searchKey (enumerator_8579.current_mDestinationEntityName (HERE), var_destinationEntityObservablePropertyMap_8830, inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 235)) ;
    outArgument_outToOneEntityRelationshipListForGeneration.addAssign_operation (enumerator_8579.current_mToOneRelationshipName (HERE).getter_string (HERE), var_type_8665, enumerator_8579.current_mInverseRelationshipName (HERE).getter_string (HERE), enumerator_8579.current_mInverseRelationMultiplicity (HERE), var_destinationEntityObservablePropertyMap_8830, enumerator_8579.current_mCascading (HERE)  COMMA_SOURCE_FILE ("relationships.galgas", 239)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_8579.current_mInverseRelationshipName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_typeKind var_oppositeType_9306 ;
      GALGAS_propertyKind var_oppositeKind_9347 ;
      GALGAS_propertyMultiplicity var_oppositeMultiplicity_9404 ;
      GALGAS_string var_oppositeOfOpposite_9445 ;
      GALGAS_actionMap joker_9456_2 ; // Joker input parameter
      GALGAS_bool joker_9456_1 ; // Joker input parameter
      var_destinationEntityObservablePropertyMap_8830.method_searchForInverseRelationship (enumerator_8579.current_mInverseRelationshipName (HERE), var_oppositeType_9306, var_oppositeKind_9347, var_oppositeMultiplicity_9404, var_oppositeOfOpposite_9445, joker_9456_2, joker_9456_1, inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 248)) ;
      switch (var_oppositeType_9306.enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_boolType:
      case GALGAS_typeKind::kEnum_integerType:
      case GALGAS_typeKind::kEnum_stringType:
      case GALGAS_typeKind::kEnum_dateType:
      case GALGAS_typeKind::kEnum_doubleType:
      case GALGAS_typeKind::kEnum_fontType:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (enumerator_8579.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("relationships.galgas", 259)), GALGAS_string ("the opposite type cannot be used as entity type"), fixItArray2  COMMA_SOURCE_FILE ("relationships.galgas", 259)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_enumType:
        {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (enumerator_8579.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("relationships.galgas", 261)), GALGAS_string ("the opposite type cannot be used as entity type"), fixItArray3  COMMA_SOURCE_FILE ("relationships.galgas", 261)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_classType:
        {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_8579.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("relationships.galgas", 263)), GALGAS_string ("the opposite type cannot be used as entity type"), fixItArray4  COMMA_SOURCE_FILE ("relationships.galgas", 263)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_propertyClassType:
        {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (enumerator_8579.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("relationships.galgas", 265)), GALGAS_string ("the opposite type cannot be used as entity type"), fixItArray5  COMMA_SOURCE_FILE ("relationships.galgas", 265)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_transientPropertyExternType:
        {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (enumerator_8579.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("relationships.galgas", 267)), GALGAS_string ("the opposite type cannot be used as entity type"), fixItArray6  COMMA_SOURCE_FILE ("relationships.galgas", 267)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_entityType:
        {
        }
        break ;
      }
      const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, var_oppositeKind_9347.objectCompare (GALGAS_propertyKind::constructor_transient (SOURCE_FILE ("relationships.galgas", 270)))).boolEnum () ;
      if (kBoolTrue == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_8579.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("relationships.galgas", 271)), GALGAS_string ("this relationship is transient, should be stored"), fixItArray8  COMMA_SOURCE_FILE ("relationships.galgas", 271)) ;
      }
      const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, enumerator_8579.current_mInverseRelationMultiplicity (HERE).objectCompare (var_oppositeMultiplicity_9404)).boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (enumerator_8579.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("relationships.galgas", 274)), GALGAS_string ("inverse relationship multiplicity error (toMany <-> toOne)"), fixItArray10  COMMA_SOURCE_FILE ("relationships.galgas", 274)) ;
      }
      const enumGalgasBool test_11 = GALGAS_bool (kIsNotEqual, var_oppositeOfOpposite_9445.objectCompare (enumerator_8579.current_mToOneRelationshipName (HERE).getter_string (HERE))).boolEnum () ;
      if (kBoolTrue == test_11) {
        TC_Array <C_FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (enumerator_8579.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("relationships.galgas", 277)), GALGAS_string ("inverse relationship does not name '").add_operation (enumerator_8579.current_mToOneRelationshipName (HERE).getter_string (SOURCE_FILE ("relationships.galgas", 277)), inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 277)).add_operation (GALGAS_string ("' as opposite"), inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 278)), fixItArray12  COMMA_SOURCE_FILE ("relationships.galgas", 277)) ;
      }
    }
    enumerator_8579.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Extension method '@toManyRelationshipList semanticAnalysis'                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_semanticAnalysis (const GALGAS_toManyRelationshipList inObject,
                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                       GALGAS_toManyEntityRelationshipListForGeneration & outArgument_outToManyEntityRelationshipListForGeneration,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outToManyEntityRelationshipListForGeneration.drop () ; // Release 'out' argument
  outArgument_outToManyEntityRelationshipListForGeneration = GALGAS_toManyEntityRelationshipListForGeneration::constructor_emptyList (SOURCE_FILE ("relationships.galgas", 290)) ;
  const GALGAS_toManyRelationshipList temp_0 = inObject ;
  cEnumerator_toManyRelationshipList enumerator_11177 (temp_0, kENUMERATION_UP) ;
  while (enumerator_11177.hasCurrentObject ()) {
    GALGAS_typeKind var_type_11263 ;
    GALGAS_actionMap joker_11265 ; // Joker input parameter
    constinArgument_inSemanticContext.getter_mUnifiedTypeMap (HERE).method_searchKey (enumerator_11177.current_mDestinationEntityName (HERE), var_type_11263, joker_11265, inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 292)) ;
    GALGAS_observablePropertyMap var_destinationEntityObservablePropertyMap_11428 ;
    constinArgument_inSemanticContext.getter_mEntityObservablePropertyMap (HERE).method_searchKey (enumerator_11177.current_mDestinationEntityName (HERE), var_destinationEntityObservablePropertyMap_11428, inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 293)) ;
    outArgument_outToManyEntityRelationshipListForGeneration.addAssign_operation (enumerator_11177.current_mToManyRelationshipName (HERE).getter_string (HERE), var_type_11263, enumerator_11177.current_mInverseRelationshipName (HERE).getter_string (HERE), var_destinationEntityObservablePropertyMap_11428, enumerator_11177.current_mCascading (HERE)  COMMA_SOURCE_FILE ("relationships.galgas", 297)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_11177.current_mInverseRelationshipName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_typeKind var_oppositeType_11870 ;
      GALGAS_propertyKind var_oppositeKind_11911 ;
      GALGAS_propertyMultiplicity var_oppositeMultiplicity_11968 ;
      GALGAS_string var_oppositeOfOpposite_12009 ;
      GALGAS_actionMap joker_12020_2 ; // Joker input parameter
      GALGAS_bool joker_12020_1 ; // Joker input parameter
      var_destinationEntityObservablePropertyMap_11428.method_searchForInverseRelationship (enumerator_11177.current_mInverseRelationshipName (HERE), var_oppositeType_11870, var_oppositeKind_11911, var_oppositeMultiplicity_11968, var_oppositeOfOpposite_12009, joker_12020_2, joker_12020_1, inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 305)) ;
      switch (var_oppositeType_11870.enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_boolType:
      case GALGAS_typeKind::kEnum_integerType:
      case GALGAS_typeKind::kEnum_stringType:
      case GALGAS_typeKind::kEnum_dateType:
      case GALGAS_typeKind::kEnum_doubleType:
      case GALGAS_typeKind::kEnum_fontType:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (enumerator_11177.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("relationships.galgas", 315)), GALGAS_string ("the opposite type cannot be used as entity type"), fixItArray2  COMMA_SOURCE_FILE ("relationships.galgas", 315)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_enumType:
        {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (enumerator_11177.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("relationships.galgas", 317)), GALGAS_string ("the opposite type cannot be used as entity type"), fixItArray3  COMMA_SOURCE_FILE ("relationships.galgas", 317)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_classType:
        {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_11177.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("relationships.galgas", 319)), GALGAS_string ("the opposite type cannot be used as entity type"), fixItArray4  COMMA_SOURCE_FILE ("relationships.galgas", 319)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_propertyClassType:
        {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (enumerator_11177.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("relationships.galgas", 321)), GALGAS_string ("the opposite type cannot be used as entity type"), fixItArray5  COMMA_SOURCE_FILE ("relationships.galgas", 321)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_transientPropertyExternType:
        {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (enumerator_11177.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("relationships.galgas", 323)), GALGAS_string ("the opposite type cannot be used as entity type"), fixItArray6  COMMA_SOURCE_FILE ("relationships.galgas", 323)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_entityType:
        {
        }
        break ;
      }
      const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, var_oppositeKind_11911.objectCompare (GALGAS_propertyKind::constructor_transient (SOURCE_FILE ("relationships.galgas", 326)))).boolEnum () ;
      if (kBoolTrue == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_11177.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("relationships.galgas", 327)), GALGAS_string ("this relationship is transient, should be stored"), fixItArray8  COMMA_SOURCE_FILE ("relationships.galgas", 327)) ;
      }
      const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, var_oppositeMultiplicity_11968.objectCompare (GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("relationships.galgas", 329)))).boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (enumerator_11177.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("relationships.galgas", 330)), GALGAS_string ("the inverse relationship should be toOne"), fixItArray10  COMMA_SOURCE_FILE ("relationships.galgas", 330)) ;
      }
      const enumGalgasBool test_11 = GALGAS_bool (kIsNotEqual, var_oppositeOfOpposite_12009.objectCompare (enumerator_11177.current_mToManyRelationshipName (HERE).getter_string (HERE))).boolEnum () ;
      if (kBoolTrue == test_11) {
        TC_Array <C_FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (enumerator_11177.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("relationships.galgas", 333)), GALGAS_string ("inverse relationship does not name '").add_operation (enumerator_11177.current_mToManyRelationshipName (HERE).getter_string (SOURCE_FILE ("relationships.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 333)).add_operation (GALGAS_string ("' as opposite"), inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 334)), fixItArray12  COMMA_SOURCE_FILE ("relationships.galgas", 333)) ;
      }
    }
    enumerator_11177.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Class for element of '@toOneEntityRelationshipListForGeneration' list                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_toOneEntityRelationshipListForGeneration : public cCollectionElement {
  public : GALGAS_toOneEntityRelationshipListForGeneration_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_toOneEntityRelationshipListForGeneration (const GALGAS_string & in_mToOneRelationshipName,
                                                                        const GALGAS_typeKind & in_mRelationshipType,
                                                                        const GALGAS_string & in_mOppositeRelationshipName,
                                                                        const GALGAS_propertyMultiplicity & in_mInverseRelationMultiplicity,
                                                                        const GALGAS_observablePropertyMap & in_mDestinationEntityObservablePropertyMap,
                                                                        const GALGAS_bool & in_mCascading
                                                                        COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_toOneEntityRelationshipListForGeneration::cCollectionElement_toOneEntityRelationshipListForGeneration (const GALGAS_string & in_mToOneRelationshipName,
                                                                                                                          const GALGAS_typeKind & in_mRelationshipType,
                                                                                                                          const GALGAS_string & in_mOppositeRelationshipName,
                                                                                                                          const GALGAS_propertyMultiplicity & in_mInverseRelationMultiplicity,
                                                                                                                          const GALGAS_observablePropertyMap & in_mDestinationEntityObservablePropertyMap,
                                                                                                                          const GALGAS_bool & in_mCascading
                                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mToOneRelationshipName, in_mRelationshipType, in_mOppositeRelationshipName, in_mInverseRelationMultiplicity, in_mDestinationEntityObservablePropertyMap, in_mCascading) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_toOneEntityRelationshipListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_toOneEntityRelationshipListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_toOneEntityRelationshipListForGeneration (mObject.mProperty_mToOneRelationshipName, mObject.mProperty_mRelationshipType, mObject.mProperty_mOppositeRelationshipName, mObject.mProperty_mInverseRelationMultiplicity, mObject.mProperty_mDestinationEntityObservablePropertyMap, mObject.mProperty_mCascading COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_toOneEntityRelationshipListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mToOneRelationshipName" ":" ;
  mObject.mProperty_mToOneRelationshipName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRelationshipType" ":" ;
  mObject.mProperty_mRelationshipType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOppositeRelationshipName" ":" ;
  mObject.mProperty_mOppositeRelationshipName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInverseRelationMultiplicity" ":" ;
  mObject.mProperty_mInverseRelationMultiplicity.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDestinationEntityObservablePropertyMap" ":" ;
  mObject.mProperty_mDestinationEntityObservablePropertyMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCascading" ":" ;
  mObject.mProperty_mCascading.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_toOneEntityRelationshipListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_toOneEntityRelationshipListForGeneration * operand = (cCollectionElement_toOneEntityRelationshipListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration::GALGAS_toOneEntityRelationshipListForGeneration (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration::GALGAS_toOneEntityRelationshipListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration GALGAS_toOneEntityRelationshipListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_toOneEntityRelationshipListForGeneration  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration GALGAS_toOneEntityRelationshipListForGeneration::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                                            const GALGAS_typeKind & inOperand1,
                                                                                                                            const GALGAS_string & inOperand2,
                                                                                                                            const GALGAS_propertyMultiplicity & inOperand3,
                                                                                                                            const GALGAS_observablePropertyMap & inOperand4,
                                                                                                                            const GALGAS_bool & inOperand5
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_toOneEntityRelationshipListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_toOneEntityRelationshipListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_toOneEntityRelationshipListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneEntityRelationshipListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                 const GALGAS_string & in_mToOneRelationshipName,
                                                                                 const GALGAS_typeKind & in_mRelationshipType,
                                                                                 const GALGAS_string & in_mOppositeRelationshipName,
                                                                                 const GALGAS_propertyMultiplicity & in_mInverseRelationMultiplicity,
                                                                                 const GALGAS_observablePropertyMap & in_mDestinationEntityObservablePropertyMap,
                                                                                 const GALGAS_bool & in_mCascading
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_toOneEntityRelationshipListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_toOneEntityRelationshipListForGeneration (in_mToOneRelationshipName,
                                                                              in_mRelationshipType,
                                                                              in_mOppositeRelationshipName,
                                                                              in_mInverseRelationMultiplicity,
                                                                              in_mDestinationEntityObservablePropertyMap,
                                                                              in_mCascading COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneEntityRelationshipListForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                                           const GALGAS_typeKind & inOperand1,
                                                                           const GALGAS_string & inOperand2,
                                                                           const GALGAS_propertyMultiplicity & inOperand3,
                                                                           const GALGAS_observablePropertyMap & inOperand4,
                                                                           const GALGAS_bool & inOperand5
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_toOneEntityRelationshipListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneEntityRelationshipListForGeneration::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                            const GALGAS_typeKind inOperand1,
                                                                            const GALGAS_string inOperand2,
                                                                            const GALGAS_propertyMultiplicity inOperand3,
                                                                            const GALGAS_observablePropertyMap inOperand4,
                                                                            const GALGAS_bool inOperand5,
                                                                            const GALGAS_uint inInsertionIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_toOneEntityRelationshipListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneEntityRelationshipListForGeneration::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                            GALGAS_typeKind & outOperand1,
                                                                            GALGAS_string & outOperand2,
                                                                            GALGAS_propertyMultiplicity & outOperand3,
                                                                            GALGAS_observablePropertyMap & outOperand4,
                                                                            GALGAS_bool & outOperand5,
                                                                            const GALGAS_uint inRemoveIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_toOneEntityRelationshipListForGeneration * p = (cCollectionElement_toOneEntityRelationshipListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mToOneRelationshipName ;
      outOperand1 = p->mObject.mProperty_mRelationshipType ;
      outOperand2 = p->mObject.mProperty_mOppositeRelationshipName ;
      outOperand3 = p->mObject.mProperty_mInverseRelationMultiplicity ;
      outOperand4 = p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
      outOperand5 = p->mObject.mProperty_mCascading ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneEntityRelationshipListForGeneration::setter_popFirst (GALGAS_string & outOperand0,
                                                                       GALGAS_typeKind & outOperand1,
                                                                       GALGAS_string & outOperand2,
                                                                       GALGAS_propertyMultiplicity & outOperand3,
                                                                       GALGAS_observablePropertyMap & outOperand4,
                                                                       GALGAS_bool & outOperand5,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneEntityRelationshipListForGeneration * p = (cCollectionElement_toOneEntityRelationshipListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mToOneRelationshipName ;
    outOperand1 = p->mObject.mProperty_mRelationshipType ;
    outOperand2 = p->mObject.mProperty_mOppositeRelationshipName ;
    outOperand3 = p->mObject.mProperty_mInverseRelationMultiplicity ;
    outOperand4 = p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
    outOperand5 = p->mObject.mProperty_mCascading ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneEntityRelationshipListForGeneration::setter_popLast (GALGAS_string & outOperand0,
                                                                      GALGAS_typeKind & outOperand1,
                                                                      GALGAS_string & outOperand2,
                                                                      GALGAS_propertyMultiplicity & outOperand3,
                                                                      GALGAS_observablePropertyMap & outOperand4,
                                                                      GALGAS_bool & outOperand5,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneEntityRelationshipListForGeneration * p = (cCollectionElement_toOneEntityRelationshipListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mToOneRelationshipName ;
    outOperand1 = p->mObject.mProperty_mRelationshipType ;
    outOperand2 = p->mObject.mProperty_mOppositeRelationshipName ;
    outOperand3 = p->mObject.mProperty_mInverseRelationMultiplicity ;
    outOperand4 = p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
    outOperand5 = p->mObject.mProperty_mCascading ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneEntityRelationshipListForGeneration::method_first (GALGAS_string & outOperand0,
                                                                    GALGAS_typeKind & outOperand1,
                                                                    GALGAS_string & outOperand2,
                                                                    GALGAS_propertyMultiplicity & outOperand3,
                                                                    GALGAS_observablePropertyMap & outOperand4,
                                                                    GALGAS_bool & outOperand5,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneEntityRelationshipListForGeneration * p = (cCollectionElement_toOneEntityRelationshipListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mToOneRelationshipName ;
    outOperand1 = p->mObject.mProperty_mRelationshipType ;
    outOperand2 = p->mObject.mProperty_mOppositeRelationshipName ;
    outOperand3 = p->mObject.mProperty_mInverseRelationMultiplicity ;
    outOperand4 = p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
    outOperand5 = p->mObject.mProperty_mCascading ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneEntityRelationshipListForGeneration::method_last (GALGAS_string & outOperand0,
                                                                   GALGAS_typeKind & outOperand1,
                                                                   GALGAS_string & outOperand2,
                                                                   GALGAS_propertyMultiplicity & outOperand3,
                                                                   GALGAS_observablePropertyMap & outOperand4,
                                                                   GALGAS_bool & outOperand5,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneEntityRelationshipListForGeneration * p = (cCollectionElement_toOneEntityRelationshipListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mToOneRelationshipName ;
    outOperand1 = p->mObject.mProperty_mRelationshipType ;
    outOperand2 = p->mObject.mProperty_mOppositeRelationshipName ;
    outOperand3 = p->mObject.mProperty_mInverseRelationMultiplicity ;
    outOperand4 = p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
    outOperand5 = p->mObject.mProperty_mCascading ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration GALGAS_toOneEntityRelationshipListForGeneration::add_operation (const GALGAS_toOneEntityRelationshipListForGeneration & inOperand,
                                                                                                                C_Compiler * /* inCompiler */
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_toOneEntityRelationshipListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration GALGAS_toOneEntityRelationshipListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_toOneEntityRelationshipListForGeneration result = GALGAS_toOneEntityRelationshipListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration GALGAS_toOneEntityRelationshipListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_toOneEntityRelationshipListForGeneration result = GALGAS_toOneEntityRelationshipListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration GALGAS_toOneEntityRelationshipListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_toOneEntityRelationshipListForGeneration result = GALGAS_toOneEntityRelationshipListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneEntityRelationshipListForGeneration::plusAssign_operation (const GALGAS_toOneEntityRelationshipListForGeneration inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_toOneEntityRelationshipListForGeneration::getter_mToOneRelationshipNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneEntityRelationshipListForGeneration * p = (cCollectionElement_toOneEntityRelationshipListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
    result = p->mObject.mProperty_mToOneRelationshipName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_toOneEntityRelationshipListForGeneration::getter_mRelationshipTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneEntityRelationshipListForGeneration * p = (cCollectionElement_toOneEntityRelationshipListForGeneration *) attributes.ptr () ;
  GALGAS_typeKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
    result = p->mObject.mProperty_mRelationshipType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_toOneEntityRelationshipListForGeneration::getter_mOppositeRelationshipNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneEntityRelationshipListForGeneration * p = (cCollectionElement_toOneEntityRelationshipListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
    result = p->mObject.mProperty_mOppositeRelationshipName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMultiplicity GALGAS_toOneEntityRelationshipListForGeneration::getter_mInverseRelationMultiplicityAtIndex (const GALGAS_uint & inIndex,
                                                                                                                         C_Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneEntityRelationshipListForGeneration * p = (cCollectionElement_toOneEntityRelationshipListForGeneration *) attributes.ptr () ;
  GALGAS_propertyMultiplicity result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
    result = p->mObject.mProperty_mInverseRelationMultiplicity ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap GALGAS_toOneEntityRelationshipListForGeneration::getter_mDestinationEntityObservablePropertyMapAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                     C_Compiler * inCompiler
                                                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneEntityRelationshipListForGeneration * p = (cCollectionElement_toOneEntityRelationshipListForGeneration *) attributes.ptr () ;
  GALGAS_observablePropertyMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
    result = p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_toOneEntityRelationshipListForGeneration::getter_mCascadingAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneEntityRelationshipListForGeneration * p = (cCollectionElement_toOneEntityRelationshipListForGeneration *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
    result = p->mObject.mProperty_mCascading ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_toOneEntityRelationshipListForGeneration::cEnumerator_toOneEntityRelationshipListForGeneration (const GALGAS_toOneEntityRelationshipListForGeneration & inEnumeratedObject,
                                                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration_2D_element cEnumerator_toOneEntityRelationshipListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_toOneEntityRelationshipListForGeneration * p = (const cCollectionElement_toOneEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_toOneEntityRelationshipListForGeneration::current_mToOneRelationshipName (LOCATION_ARGS) const {
  const cCollectionElement_toOneEntityRelationshipListForGeneration * p = (const cCollectionElement_toOneEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
  return p->mObject.mProperty_mToOneRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind cEnumerator_toOneEntityRelationshipListForGeneration::current_mRelationshipType (LOCATION_ARGS) const {
  const cCollectionElement_toOneEntityRelationshipListForGeneration * p = (const cCollectionElement_toOneEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
  return p->mObject.mProperty_mRelationshipType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_toOneEntityRelationshipListForGeneration::current_mOppositeRelationshipName (LOCATION_ARGS) const {
  const cCollectionElement_toOneEntityRelationshipListForGeneration * p = (const cCollectionElement_toOneEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
  return p->mObject.mProperty_mOppositeRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMultiplicity cEnumerator_toOneEntityRelationshipListForGeneration::current_mInverseRelationMultiplicity (LOCATION_ARGS) const {
  const cCollectionElement_toOneEntityRelationshipListForGeneration * p = (const cCollectionElement_toOneEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
  return p->mObject.mProperty_mInverseRelationMultiplicity ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap cEnumerator_toOneEntityRelationshipListForGeneration::current_mDestinationEntityObservablePropertyMap (LOCATION_ARGS) const {
  const cCollectionElement_toOneEntityRelationshipListForGeneration * p = (const cCollectionElement_toOneEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
  return p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_toOneEntityRelationshipListForGeneration::current_mCascading (LOCATION_ARGS) const {
  const cCollectionElement_toOneEntityRelationshipListForGeneration * p = (const cCollectionElement_toOneEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
  return p->mObject.mProperty_mCascading ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   @toOneEntityRelationshipListForGeneration type                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toOneEntityRelationshipListForGeneration ("toOneEntityRelationshipListForGeneration",
                                                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_toOneEntityRelationshipListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOneEntityRelationshipListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_toOneEntityRelationshipListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toOneEntityRelationshipListForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration GALGAS_toOneEntityRelationshipListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_toOneEntityRelationshipListForGeneration result ;
  const GALGAS_toOneEntityRelationshipListForGeneration * p = (const GALGAS_toOneEntityRelationshipListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toOneEntityRelationshipListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toOneEntityRelationshipListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_typeKind_enumType::cEnumAssociatedValues_typeKind_enumType (const GALGAS_string & inAssociatedValue0,
                                                                                  const GALGAS_enumConstantMap & inAssociatedValue1
                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_typeKind_enumType::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_typeKind_enumType::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_enumType * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_enumType *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_typeKind_entityType::cEnumAssociatedValues_typeKind_entityType (const GALGAS_string & inAssociatedValue0
                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_typeKind_entityType::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_typeKind_entityType::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_entityType * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_entityType *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_typeKind_classType::cEnumAssociatedValues_typeKind_classType (const GALGAS_string & inAssociatedValue0
                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_typeKind_classType::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_typeKind_classType::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_classType * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_classType *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_typeKind_propertyClassType::cEnumAssociatedValues_typeKind_propertyClassType (const GALGAS_string & inAssociatedValue0,
                                                                                                    const GALGAS_propertyClassDefaultValues & inAssociatedValue1
                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_typeKind_propertyClassType::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_typeKind_propertyClassType::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_propertyClassType * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_propertyClassType *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_typeKind_transientPropertyExternType::cEnumAssociatedValues_typeKind_transientPropertyExternType (const GALGAS_string & inAssociatedValue0
                                                                                                                        COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_typeKind_transientPropertyExternType::description (C_String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_typeKind_transientPropertyExternType::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_transientPropertyExternType * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_transientPropertyExternType *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind::GALGAS_typeKind (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKind::constructor_boolType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_boolType ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKind::constructor_integerType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_integerType ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKind::constructor_doubleType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_doubleType ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKind::constructor_stringType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_stringType ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKind::constructor_dateType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_dateType ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKind::constructor_fontType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_fontType ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKind::constructor_enumType (const GALGAS_string & inAssociatedValue0,
                                                       const GALGAS_enumConstantMap & inAssociatedValue1
                                                       COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_enumType ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_enumType (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKind::constructor_entityType (const GALGAS_string & inAssociatedValue0
                                                         COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_entityType ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_entityType (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKind::constructor_classType (const GALGAS_string & inAssociatedValue0
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_classType ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_classType (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKind::constructor_propertyClassType (const GALGAS_string & inAssociatedValue0,
                                                                const GALGAS_propertyClassDefaultValues & inAssociatedValue1
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_propertyClassType ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_propertyClassType (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKind::constructor_transientPropertyExternType (const GALGAS_string & inAssociatedValue0
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_transientPropertyExternType ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_transientPropertyExternType (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_typeKind::method_enumType (GALGAS_string & outAssociatedValue0,
                                       GALGAS_enumConstantMap & outAssociatedValue1,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_enumType) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @typeKind enumType invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_enumType * ptr = (const cEnumAssociatedValues_typeKind_enumType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_typeKind::method_entityType (GALGAS_string & outAssociatedValue0,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_entityType) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @typeKind entityType invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_entityType * ptr = (const cEnumAssociatedValues_typeKind_entityType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_typeKind::method_classType (GALGAS_string & outAssociatedValue0,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_classType) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @typeKind classType invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_classType * ptr = (const cEnumAssociatedValues_typeKind_classType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_typeKind::method_propertyClassType (GALGAS_string & outAssociatedValue0,
                                                GALGAS_propertyClassDefaultValues & outAssociatedValue1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_propertyClassType) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @typeKind propertyClassType invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_propertyClassType * ptr = (const cEnumAssociatedValues_typeKind_propertyClassType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_typeKind::method_transientPropertyExternType (GALGAS_string & outAssociatedValue0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_transientPropertyExternType) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @typeKind transientPropertyExternType invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_transientPropertyExternType * ptr = (const cEnumAssociatedValues_typeKind_transientPropertyExternType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_typeKind [12] = {
  "(not built)",
  "boolType",
  "integerType",
  "doubleType",
  "stringType",
  "dateType",
  "fontType",
  "enumType",
  "entityType",
  "classType",
  "propertyClassType",
  "transientPropertyExternType"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_typeKind::getter_isBoolType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_boolType == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_typeKind::getter_isIntegerType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_integerType == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_typeKind::getter_isDoubleType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_doubleType == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_typeKind::getter_isStringType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_stringType == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_typeKind::getter_isDateType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_dateType == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_typeKind::getter_isFontType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_fontType == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_typeKind::getter_isEnumType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_enumType == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_typeKind::getter_isEntityType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_entityType == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_typeKind::getter_isClassType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_classType == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_typeKind::getter_isPropertyClassType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_propertyClassType == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_typeKind::getter_isTransientPropertyExternType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_transientPropertyExternType == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_typeKind::description (C_String & ioString,
                                   const int32_t inIndentation) const {
  ioString << "<enum @typeKind: " << gEnumNameArrayFor_typeKind [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_typeKind::objectCompare (const GALGAS_typeKind & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                   @typeKind type                                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeKind ("typeKind",
                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_typeKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_typeKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeKind (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKind::extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  const GALGAS_typeKind * p = (const GALGAS_typeKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_observablePropertyMap::cMapElement_observablePropertyMap (const GALGAS_lstring & inKey,
                                                                      const GALGAS_typeKind & in_mType,
                                                                      const GALGAS_propertyKind & in_mKind,
                                                                      const GALGAS_propertyMultiplicity & in_mMultiplicity,
                                                                      const GALGAS_string & in_mInverseRelationshipName,
                                                                      const GALGAS_actionMap & in_mActionMap,
                                                                      const GALGAS_bool & in_mCascade
                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mType (in_mType),
mProperty_mKind (in_mKind),
mProperty_mMultiplicity (in_mMultiplicity),
mProperty_mInverseRelationshipName (in_mInverseRelationshipName),
mProperty_mActionMap (in_mActionMap),
mProperty_mCascade (in_mCascade) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_observablePropertyMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mType.isValid () && mProperty_mKind.isValid () && mProperty_mMultiplicity.isValid () && mProperty_mInverseRelationshipName.isValid () && mProperty_mActionMap.isValid () && mProperty_mCascade.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_observablePropertyMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_observablePropertyMap (mProperty_lkey, mProperty_mType, mProperty_mKind, mProperty_mMultiplicity, mProperty_mInverseRelationshipName, mProperty_mActionMap, mProperty_mCascade COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_observablePropertyMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mProperty_mType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mKind" ":" ;
  mProperty_mKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMultiplicity" ":" ;
  mProperty_mMultiplicity.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInverseRelationshipName" ":" ;
  mProperty_mInverseRelationshipName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActionMap" ":" ;
  mProperty_mActionMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCascade" ":" ;
  mProperty_mCascade.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_observablePropertyMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_observablePropertyMap * operand = (cMapElement_observablePropertyMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mType.objectCompare (operand->mProperty_mType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (operand->mProperty_mKind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMultiplicity.objectCompare (operand->mProperty_mMultiplicity) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInverseRelationshipName.objectCompare (operand->mProperty_mInverseRelationshipName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActionMap.objectCompare (operand->mProperty_mActionMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCascade.objectCompare (operand->mProperty_mCascade) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap::GALGAS_observablePropertyMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap::GALGAS_observablePropertyMap (const GALGAS_observablePropertyMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap & GALGAS_observablePropertyMap::operator = (const GALGAS_observablePropertyMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap GALGAS_observablePropertyMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_observablePropertyMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap GALGAS_observablePropertyMap::constructor_mapWithMapToOverride (const GALGAS_observablePropertyMap & inMapToOverride
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap GALGAS_observablePropertyMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_observablePropertyMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_observablePropertyMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                        const GALGAS_typeKind & inArgument0,
                                                        const GALGAS_propertyKind & inArgument1,
                                                        const GALGAS_propertyMultiplicity & inArgument2,
                                                        const GALGAS_string & inArgument3,
                                                        const GALGAS_actionMap & inArgument4,
                                                        const GALGAS_bool & inArgument5,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cMapElement_observablePropertyMap * p = NULL ;
  macroMyNew (p, cMapElement_observablePropertyMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@observablePropertyMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_observablePropertyMap::setter_insertKey (GALGAS_lstring inKey,
                                                     GALGAS_typeKind inArgument0,
                                                     GALGAS_propertyKind inArgument1,
                                                     GALGAS_propertyMultiplicity inArgument2,
                                                     GALGAS_string inArgument3,
                                                     GALGAS_actionMap inArgument4,
                                                     GALGAS_bool inArgument5,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_observablePropertyMap * p = NULL ;
  macroMyNew (p, cMapElement_observablePropertyMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' property is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_observablePropertyMap_searchKey = "the '%K' property is not declared" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_observablePropertyMap::method_searchKey (GALGAS_lstring inKey,
                                                     GALGAS_typeKind & outArgument0,
                                                     GALGAS_propertyKind & outArgument1,
                                                     GALGAS_propertyMultiplicity & outArgument2,
                                                     GALGAS_string & outArgument3,
                                                     GALGAS_actionMap & outArgument4,
                                                     GALGAS_bool & outArgument5,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  const cMapElement_observablePropertyMap * p = (const cMapElement_observablePropertyMap *) performSearch (inKey,
                                                                                                           inCompiler,
                                                                                                           kSearchErrorMessage_observablePropertyMap_searchKey
                                                                                                           COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
    outArgument0 = p->mProperty_mType ;
    outArgument1 = p->mProperty_mKind ;
    outArgument2 = p->mProperty_mMultiplicity ;
    outArgument3 = p->mProperty_mInverseRelationshipName ;
    outArgument4 = p->mProperty_mActionMap ;
    outArgument5 = p->mProperty_mCascade ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_observablePropertyMap_searchForInverseRelationship = "the destination entity does not define the '%K' relationship" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_observablePropertyMap::method_searchForInverseRelationship (GALGAS_lstring inKey,
                                                                        GALGAS_typeKind & outArgument0,
                                                                        GALGAS_propertyKind & outArgument1,
                                                                        GALGAS_propertyMultiplicity & outArgument2,
                                                                        GALGAS_string & outArgument3,
                                                                        GALGAS_actionMap & outArgument4,
                                                                        GALGAS_bool & outArgument5,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  const cMapElement_observablePropertyMap * p = (const cMapElement_observablePropertyMap *) performSearch (inKey,
                                                                                                           inCompiler,
                                                                                                           kSearchErrorMessage_observablePropertyMap_searchForInverseRelationship
                                                                                                           COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
    outArgument0 = p->mProperty_mType ;
    outArgument1 = p->mProperty_mKind ;
    outArgument2 = p->mProperty_mMultiplicity ;
    outArgument3 = p->mProperty_mInverseRelationshipName ;
    outArgument4 = p->mProperty_mActionMap ;
    outArgument5 = p->mProperty_mCascade ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_observablePropertyMap::getter_mTypeForKey (const GALGAS_string & inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_observablePropertyMap * p = (const cMapElement_observablePropertyMap *) attributes ;
  GALGAS_typeKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
    result = p->mProperty_mType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyKind GALGAS_observablePropertyMap::getter_mKindForKey (const GALGAS_string & inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_observablePropertyMap * p = (const cMapElement_observablePropertyMap *) attributes ;
  GALGAS_propertyKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
    result = p->mProperty_mKind ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMultiplicity GALGAS_observablePropertyMap::getter_mMultiplicityForKey (const GALGAS_string & inKey,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_observablePropertyMap * p = (const cMapElement_observablePropertyMap *) attributes ;
  GALGAS_propertyMultiplicity result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
    result = p->mProperty_mMultiplicity ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_observablePropertyMap::getter_mInverseRelationshipNameForKey (const GALGAS_string & inKey,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_observablePropertyMap * p = (const cMapElement_observablePropertyMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
    result = p->mProperty_mInverseRelationshipName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionMap GALGAS_observablePropertyMap::getter_mActionMapForKey (const GALGAS_string & inKey,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_observablePropertyMap * p = (const cMapElement_observablePropertyMap *) attributes ;
  GALGAS_actionMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
    result = p->mProperty_mActionMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_observablePropertyMap::getter_mCascadeForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_observablePropertyMap * p = (const cMapElement_observablePropertyMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
    result = p->mProperty_mCascade ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_observablePropertyMap::setter_setMTypeForKey (GALGAS_typeKind inAttributeValue,
                                                          GALGAS_string inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_observablePropertyMap * p = (cMapElement_observablePropertyMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
    p->mProperty_mType = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_observablePropertyMap::setter_setMKindForKey (GALGAS_propertyKind inAttributeValue,
                                                          GALGAS_string inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_observablePropertyMap * p = (cMapElement_observablePropertyMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
    p->mProperty_mKind = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_observablePropertyMap::setter_setMMultiplicityForKey (GALGAS_propertyMultiplicity inAttributeValue,
                                                                  GALGAS_string inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_observablePropertyMap * p = (cMapElement_observablePropertyMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
    p->mProperty_mMultiplicity = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_observablePropertyMap::setter_setMInverseRelationshipNameForKey (GALGAS_string inAttributeValue,
                                                                             GALGAS_string inKey,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_observablePropertyMap * p = (cMapElement_observablePropertyMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
    p->mProperty_mInverseRelationshipName = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_observablePropertyMap::setter_setMActionMapForKey (GALGAS_actionMap inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_observablePropertyMap * p = (cMapElement_observablePropertyMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
    p->mProperty_mActionMap = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_observablePropertyMap::setter_setMCascadeForKey (GALGAS_bool inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_observablePropertyMap * p = (cMapElement_observablePropertyMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
    p->mProperty_mCascade = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_observablePropertyMap * GALGAS_observablePropertyMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                     const GALGAS_string & inKey
                                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_observablePropertyMap * result = (cMapElement_observablePropertyMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_observablePropertyMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_observablePropertyMap::cEnumerator_observablePropertyMap (const GALGAS_observablePropertyMap & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap_2D_element cEnumerator_observablePropertyMap::current (LOCATION_ARGS) const {
  const cMapElement_observablePropertyMap * p = (const cMapElement_observablePropertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
  return GALGAS_observablePropertyMap_2D_element (p->mProperty_lkey, p->mProperty_mType, p->mProperty_mKind, p->mProperty_mMultiplicity, p->mProperty_mInverseRelationshipName, p->mProperty_mActionMap, p->mProperty_mCascade) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_observablePropertyMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind cEnumerator_observablePropertyMap::current_mType (LOCATION_ARGS) const {
  const cMapElement_observablePropertyMap * p = (const cMapElement_observablePropertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
  return p->mProperty_mType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyKind cEnumerator_observablePropertyMap::current_mKind (LOCATION_ARGS) const {
  const cMapElement_observablePropertyMap * p = (const cMapElement_observablePropertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
  return p->mProperty_mKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMultiplicity cEnumerator_observablePropertyMap::current_mMultiplicity (LOCATION_ARGS) const {
  const cMapElement_observablePropertyMap * p = (const cMapElement_observablePropertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
  return p->mProperty_mMultiplicity ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_observablePropertyMap::current_mInverseRelationshipName (LOCATION_ARGS) const {
  const cMapElement_observablePropertyMap * p = (const cMapElement_observablePropertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
  return p->mProperty_mInverseRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionMap cEnumerator_observablePropertyMap::current_mActionMap (LOCATION_ARGS) const {
  const cMapElement_observablePropertyMap * p = (const cMapElement_observablePropertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
  return p->mProperty_mActionMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_observablePropertyMap::current_mCascade (LOCATION_ARGS) const {
  const cMapElement_observablePropertyMap * p = (const cMapElement_observablePropertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
  return p->mProperty_mCascade ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @observablePropertyMap type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_observablePropertyMap ("observablePropertyMap",
                                              NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_observablePropertyMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_observablePropertyMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_observablePropertyMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap GALGAS_observablePropertyMap::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyMap result ;
  const GALGAS_observablePropertyMap * p = (const GALGAS_observablePropertyMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_observablePropertyMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Class for element of '@toManyEntityRelationshipListForGeneration' list                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_toManyEntityRelationshipListForGeneration : public cCollectionElement {
  public : GALGAS_toManyEntityRelationshipListForGeneration_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_toManyEntityRelationshipListForGeneration (const GALGAS_string & in_mToManyRelationshipName,
                                                                         const GALGAS_typeKind & in_mRelationshipType,
                                                                         const GALGAS_string & in_mOppositeRelationshipName,
                                                                         const GALGAS_observablePropertyMap & in_mDestinationEntityObservablePropertyMap,
                                                                         const GALGAS_bool & in_mCascading
                                                                         COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_toManyEntityRelationshipListForGeneration::cCollectionElement_toManyEntityRelationshipListForGeneration (const GALGAS_string & in_mToManyRelationshipName,
                                                                                                                            const GALGAS_typeKind & in_mRelationshipType,
                                                                                                                            const GALGAS_string & in_mOppositeRelationshipName,
                                                                                                                            const GALGAS_observablePropertyMap & in_mDestinationEntityObservablePropertyMap,
                                                                                                                            const GALGAS_bool & in_mCascading
                                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mToManyRelationshipName, in_mRelationshipType, in_mOppositeRelationshipName, in_mDestinationEntityObservablePropertyMap, in_mCascading) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_toManyEntityRelationshipListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_toManyEntityRelationshipListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_toManyEntityRelationshipListForGeneration (mObject.mProperty_mToManyRelationshipName, mObject.mProperty_mRelationshipType, mObject.mProperty_mOppositeRelationshipName, mObject.mProperty_mDestinationEntityObservablePropertyMap, mObject.mProperty_mCascading COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_toManyEntityRelationshipListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mToManyRelationshipName" ":" ;
  mObject.mProperty_mToManyRelationshipName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRelationshipType" ":" ;
  mObject.mProperty_mRelationshipType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOppositeRelationshipName" ":" ;
  mObject.mProperty_mOppositeRelationshipName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDestinationEntityObservablePropertyMap" ":" ;
  mObject.mProperty_mDestinationEntityObservablePropertyMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCascading" ":" ;
  mObject.mProperty_mCascading.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_toManyEntityRelationshipListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_toManyEntityRelationshipListForGeneration * operand = (cCollectionElement_toManyEntityRelationshipListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration::GALGAS_toManyEntityRelationshipListForGeneration (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration::GALGAS_toManyEntityRelationshipListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration GALGAS_toManyEntityRelationshipListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_toManyEntityRelationshipListForGeneration  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration GALGAS_toManyEntityRelationshipListForGeneration::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                                              const GALGAS_typeKind & inOperand1,
                                                                                                                              const GALGAS_string & inOperand2,
                                                                                                                              const GALGAS_observablePropertyMap & inOperand3,
                                                                                                                              const GALGAS_bool & inOperand4
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_toManyEntityRelationshipListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_toManyEntityRelationshipListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_toManyEntityRelationshipListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyEntityRelationshipListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                  const GALGAS_string & in_mToManyRelationshipName,
                                                                                  const GALGAS_typeKind & in_mRelationshipType,
                                                                                  const GALGAS_string & in_mOppositeRelationshipName,
                                                                                  const GALGAS_observablePropertyMap & in_mDestinationEntityObservablePropertyMap,
                                                                                  const GALGAS_bool & in_mCascading
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_toManyEntityRelationshipListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_toManyEntityRelationshipListForGeneration (in_mToManyRelationshipName,
                                                                               in_mRelationshipType,
                                                                               in_mOppositeRelationshipName,
                                                                               in_mDestinationEntityObservablePropertyMap,
                                                                               in_mCascading COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyEntityRelationshipListForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                                            const GALGAS_typeKind & inOperand1,
                                                                            const GALGAS_string & inOperand2,
                                                                            const GALGAS_observablePropertyMap & inOperand3,
                                                                            const GALGAS_bool & inOperand4
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_toManyEntityRelationshipListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyEntityRelationshipListForGeneration::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                             const GALGAS_typeKind inOperand1,
                                                                             const GALGAS_string inOperand2,
                                                                             const GALGAS_observablePropertyMap inOperand3,
                                                                             const GALGAS_bool inOperand4,
                                                                             const GALGAS_uint inInsertionIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_toManyEntityRelationshipListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyEntityRelationshipListForGeneration::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                             GALGAS_typeKind & outOperand1,
                                                                             GALGAS_string & outOperand2,
                                                                             GALGAS_observablePropertyMap & outOperand3,
                                                                             GALGAS_bool & outOperand4,
                                                                             const GALGAS_uint inRemoveIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_toManyEntityRelationshipListForGeneration * p = (cCollectionElement_toManyEntityRelationshipListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mToManyRelationshipName ;
      outOperand1 = p->mObject.mProperty_mRelationshipType ;
      outOperand2 = p->mObject.mProperty_mOppositeRelationshipName ;
      outOperand3 = p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
      outOperand4 = p->mObject.mProperty_mCascading ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyEntityRelationshipListForGeneration::setter_popFirst (GALGAS_string & outOperand0,
                                                                        GALGAS_typeKind & outOperand1,
                                                                        GALGAS_string & outOperand2,
                                                                        GALGAS_observablePropertyMap & outOperand3,
                                                                        GALGAS_bool & outOperand4,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyEntityRelationshipListForGeneration * p = (cCollectionElement_toManyEntityRelationshipListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mToManyRelationshipName ;
    outOperand1 = p->mObject.mProperty_mRelationshipType ;
    outOperand2 = p->mObject.mProperty_mOppositeRelationshipName ;
    outOperand3 = p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
    outOperand4 = p->mObject.mProperty_mCascading ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyEntityRelationshipListForGeneration::setter_popLast (GALGAS_string & outOperand0,
                                                                       GALGAS_typeKind & outOperand1,
                                                                       GALGAS_string & outOperand2,
                                                                       GALGAS_observablePropertyMap & outOperand3,
                                                                       GALGAS_bool & outOperand4,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyEntityRelationshipListForGeneration * p = (cCollectionElement_toManyEntityRelationshipListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mToManyRelationshipName ;
    outOperand1 = p->mObject.mProperty_mRelationshipType ;
    outOperand2 = p->mObject.mProperty_mOppositeRelationshipName ;
    outOperand3 = p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
    outOperand4 = p->mObject.mProperty_mCascading ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyEntityRelationshipListForGeneration::method_first (GALGAS_string & outOperand0,
                                                                     GALGAS_typeKind & outOperand1,
                                                                     GALGAS_string & outOperand2,
                                                                     GALGAS_observablePropertyMap & outOperand3,
                                                                     GALGAS_bool & outOperand4,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyEntityRelationshipListForGeneration * p = (cCollectionElement_toManyEntityRelationshipListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mToManyRelationshipName ;
    outOperand1 = p->mObject.mProperty_mRelationshipType ;
    outOperand2 = p->mObject.mProperty_mOppositeRelationshipName ;
    outOperand3 = p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
    outOperand4 = p->mObject.mProperty_mCascading ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyEntityRelationshipListForGeneration::method_last (GALGAS_string & outOperand0,
                                                                    GALGAS_typeKind & outOperand1,
                                                                    GALGAS_string & outOperand2,
                                                                    GALGAS_observablePropertyMap & outOperand3,
                                                                    GALGAS_bool & outOperand4,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyEntityRelationshipListForGeneration * p = (cCollectionElement_toManyEntityRelationshipListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mToManyRelationshipName ;
    outOperand1 = p->mObject.mProperty_mRelationshipType ;
    outOperand2 = p->mObject.mProperty_mOppositeRelationshipName ;
    outOperand3 = p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
    outOperand4 = p->mObject.mProperty_mCascading ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration GALGAS_toManyEntityRelationshipListForGeneration::add_operation (const GALGAS_toManyEntityRelationshipListForGeneration & inOperand,
                                                                                                                  C_Compiler * /* inCompiler */
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_toManyEntityRelationshipListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration GALGAS_toManyEntityRelationshipListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_toManyEntityRelationshipListForGeneration result = GALGAS_toManyEntityRelationshipListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration GALGAS_toManyEntityRelationshipListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_toManyEntityRelationshipListForGeneration result = GALGAS_toManyEntityRelationshipListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration GALGAS_toManyEntityRelationshipListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_toManyEntityRelationshipListForGeneration result = GALGAS_toManyEntityRelationshipListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyEntityRelationshipListForGeneration::plusAssign_operation (const GALGAS_toManyEntityRelationshipListForGeneration inOperand,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_toManyEntityRelationshipListForGeneration::getter_mToManyRelationshipNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyEntityRelationshipListForGeneration * p = (cCollectionElement_toManyEntityRelationshipListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
    result = p->mObject.mProperty_mToManyRelationshipName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_toManyEntityRelationshipListForGeneration::getter_mRelationshipTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyEntityRelationshipListForGeneration * p = (cCollectionElement_toManyEntityRelationshipListForGeneration *) attributes.ptr () ;
  GALGAS_typeKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
    result = p->mObject.mProperty_mRelationshipType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_toManyEntityRelationshipListForGeneration::getter_mOppositeRelationshipNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyEntityRelationshipListForGeneration * p = (cCollectionElement_toManyEntityRelationshipListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
    result = p->mObject.mProperty_mOppositeRelationshipName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap GALGAS_toManyEntityRelationshipListForGeneration::getter_mDestinationEntityObservablePropertyMapAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyEntityRelationshipListForGeneration * p = (cCollectionElement_toManyEntityRelationshipListForGeneration *) attributes.ptr () ;
  GALGAS_observablePropertyMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
    result = p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_toManyEntityRelationshipListForGeneration::getter_mCascadingAtIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyEntityRelationshipListForGeneration * p = (cCollectionElement_toManyEntityRelationshipListForGeneration *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
    result = p->mObject.mProperty_mCascading ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_toManyEntityRelationshipListForGeneration::cEnumerator_toManyEntityRelationshipListForGeneration (const GALGAS_toManyEntityRelationshipListForGeneration & inEnumeratedObject,
                                                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration_2D_element cEnumerator_toManyEntityRelationshipListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_toManyEntityRelationshipListForGeneration * p = (const cCollectionElement_toManyEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_toManyEntityRelationshipListForGeneration::current_mToManyRelationshipName (LOCATION_ARGS) const {
  const cCollectionElement_toManyEntityRelationshipListForGeneration * p = (const cCollectionElement_toManyEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
  return p->mObject.mProperty_mToManyRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind cEnumerator_toManyEntityRelationshipListForGeneration::current_mRelationshipType (LOCATION_ARGS) const {
  const cCollectionElement_toManyEntityRelationshipListForGeneration * p = (const cCollectionElement_toManyEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
  return p->mObject.mProperty_mRelationshipType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_toManyEntityRelationshipListForGeneration::current_mOppositeRelationshipName (LOCATION_ARGS) const {
  const cCollectionElement_toManyEntityRelationshipListForGeneration * p = (const cCollectionElement_toManyEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
  return p->mObject.mProperty_mOppositeRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap cEnumerator_toManyEntityRelationshipListForGeneration::current_mDestinationEntityObservablePropertyMap (LOCATION_ARGS) const {
  const cCollectionElement_toManyEntityRelationshipListForGeneration * p = (const cCollectionElement_toManyEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
  return p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_toManyEntityRelationshipListForGeneration::current_mCascading (LOCATION_ARGS) const {
  const cCollectionElement_toManyEntityRelationshipListForGeneration * p = (const cCollectionElement_toManyEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
  return p->mObject.mProperty_mCascading ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   @toManyEntityRelationshipListForGeneration type                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toManyEntityRelationshipListForGeneration ("toManyEntityRelationshipListForGeneration",
                                                                  NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_toManyEntityRelationshipListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyEntityRelationshipListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_toManyEntityRelationshipListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyEntityRelationshipListForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration GALGAS_toManyEntityRelationshipListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_toManyEntityRelationshipListForGeneration result ;
  const GALGAS_toManyEntityRelationshipListForGeneration * p = (const GALGAS_toManyEntityRelationshipListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toManyEntityRelationshipListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyEntityRelationshipListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Class for element of '@simpleStoredPropertyList' list                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_simpleStoredPropertyList : public cCollectionElement {
  public : GALGAS_simpleStoredPropertyList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_simpleStoredPropertyList (const GALGAS_lstring & in_mPropertyTypeName,
                                                        const GALGAS_lstring & in_mPropertyName,
                                                        const GALGAS_abstractDefaultValue & in_mDefaultValue,
                                                        const GALGAS_bool & in_mNeedsValidation
                                                        COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_simpleStoredPropertyList::cCollectionElement_simpleStoredPropertyList (const GALGAS_lstring & in_mPropertyTypeName,
                                                                                          const GALGAS_lstring & in_mPropertyName,
                                                                                          const GALGAS_abstractDefaultValue & in_mDefaultValue,
                                                                                          const GALGAS_bool & in_mNeedsValidation
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mPropertyTypeName, in_mPropertyName, in_mDefaultValue, in_mNeedsValidation) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_simpleStoredPropertyList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_simpleStoredPropertyList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_simpleStoredPropertyList (mObject.mProperty_mPropertyTypeName, mObject.mProperty_mPropertyName, mObject.mProperty_mDefaultValue, mObject.mProperty_mNeedsValidation COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_simpleStoredPropertyList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyTypeName" ":" ;
  mObject.mProperty_mPropertyTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyName" ":" ;
  mObject.mProperty_mPropertyName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDefaultValue" ":" ;
  mObject.mProperty_mDefaultValue.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mNeedsValidation" ":" ;
  mObject.mProperty_mNeedsValidation.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_simpleStoredPropertyList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_simpleStoredPropertyList * operand = (cCollectionElement_simpleStoredPropertyList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_simpleStoredPropertyList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyList::GALGAS_simpleStoredPropertyList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyList::GALGAS_simpleStoredPropertyList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyList GALGAS_simpleStoredPropertyList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_simpleStoredPropertyList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyList GALGAS_simpleStoredPropertyList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_lstring & inOperand1,
                                                                                            const GALGAS_abstractDefaultValue & inOperand2,
                                                                                            const GALGAS_bool & inOperand3
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_simpleStoredPropertyList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_simpleStoredPropertyList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_simpleStoredPropertyList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_simpleStoredPropertyList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GALGAS_lstring & in_mPropertyTypeName,
                                                                 const GALGAS_lstring & in_mPropertyName,
                                                                 const GALGAS_abstractDefaultValue & in_mDefaultValue,
                                                                 const GALGAS_bool & in_mNeedsValidation
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_simpleStoredPropertyList * p = NULL ;
  macroMyNew (p, cCollectionElement_simpleStoredPropertyList (in_mPropertyTypeName,
                                                              in_mPropertyName,
                                                              in_mDefaultValue,
                                                              in_mNeedsValidation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_simpleStoredPropertyList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                           const GALGAS_lstring & inOperand1,
                                                           const GALGAS_abstractDefaultValue & inOperand2,
                                                           const GALGAS_bool & inOperand3
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_simpleStoredPropertyList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_simpleStoredPropertyList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                            const GALGAS_lstring inOperand1,
                                                            const GALGAS_abstractDefaultValue inOperand2,
                                                            const GALGAS_bool inOperand3,
                                                            const GALGAS_uint inInsertionIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_simpleStoredPropertyList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_simpleStoredPropertyList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                            GALGAS_lstring & outOperand1,
                                                            GALGAS_abstractDefaultValue & outOperand2,
                                                            GALGAS_bool & outOperand3,
                                                            const GALGAS_uint inRemoveIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_simpleStoredPropertyList * p = (cCollectionElement_simpleStoredPropertyList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
      outOperand0 = p->mObject.mProperty_mPropertyTypeName ;
      outOperand1 = p->mObject.mProperty_mPropertyName ;
      outOperand2 = p->mObject.mProperty_mDefaultValue ;
      outOperand3 = p->mObject.mProperty_mNeedsValidation ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_simpleStoredPropertyList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       GALGAS_abstractDefaultValue & outOperand2,
                                                       GALGAS_bool & outOperand3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_simpleStoredPropertyList * p = (cCollectionElement_simpleStoredPropertyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
    outOperand0 = p->mObject.mProperty_mPropertyTypeName ;
    outOperand1 = p->mObject.mProperty_mPropertyName ;
    outOperand2 = p->mObject.mProperty_mDefaultValue ;
    outOperand3 = p->mObject.mProperty_mNeedsValidation ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_simpleStoredPropertyList::setter_popLast (GALGAS_lstring & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      GALGAS_abstractDefaultValue & outOperand2,
                                                      GALGAS_bool & outOperand3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_simpleStoredPropertyList * p = (cCollectionElement_simpleStoredPropertyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
    outOperand0 = p->mObject.mProperty_mPropertyTypeName ;
    outOperand1 = p->mObject.mProperty_mPropertyName ;
    outOperand2 = p->mObject.mProperty_mDefaultValue ;
    outOperand3 = p->mObject.mProperty_mNeedsValidation ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_simpleStoredPropertyList::method_first (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    GALGAS_abstractDefaultValue & outOperand2,
                                                    GALGAS_bool & outOperand3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_simpleStoredPropertyList * p = (cCollectionElement_simpleStoredPropertyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
    outOperand0 = p->mObject.mProperty_mPropertyTypeName ;
    outOperand1 = p->mObject.mProperty_mPropertyName ;
    outOperand2 = p->mObject.mProperty_mDefaultValue ;
    outOperand3 = p->mObject.mProperty_mNeedsValidation ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_simpleStoredPropertyList::method_last (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   GALGAS_abstractDefaultValue & outOperand2,
                                                   GALGAS_bool & outOperand3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_simpleStoredPropertyList * p = (cCollectionElement_simpleStoredPropertyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
    outOperand0 = p->mObject.mProperty_mPropertyTypeName ;
    outOperand1 = p->mObject.mProperty_mPropertyName ;
    outOperand2 = p->mObject.mProperty_mDefaultValue ;
    outOperand3 = p->mObject.mProperty_mNeedsValidation ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyList GALGAS_simpleStoredPropertyList::add_operation (const GALGAS_simpleStoredPropertyList & inOperand,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_simpleStoredPropertyList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyList GALGAS_simpleStoredPropertyList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_simpleStoredPropertyList result = GALGAS_simpleStoredPropertyList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyList GALGAS_simpleStoredPropertyList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_simpleStoredPropertyList result = GALGAS_simpleStoredPropertyList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyList GALGAS_simpleStoredPropertyList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_simpleStoredPropertyList result = GALGAS_simpleStoredPropertyList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_simpleStoredPropertyList::plusAssign_operation (const GALGAS_simpleStoredPropertyList inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_simpleStoredPropertyList::getter_mPropertyTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_simpleStoredPropertyList * p = (cCollectionElement_simpleStoredPropertyList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
    result = p->mObject.mProperty_mPropertyTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_simpleStoredPropertyList::getter_mPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_simpleStoredPropertyList * p = (cCollectionElement_simpleStoredPropertyList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
    result = p->mObject.mProperty_mPropertyName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDefaultValue GALGAS_simpleStoredPropertyList::getter_mDefaultValueAtIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_simpleStoredPropertyList * p = (cCollectionElement_simpleStoredPropertyList *) attributes.ptr () ;
  GALGAS_abstractDefaultValue result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
    result = p->mObject.mProperty_mDefaultValue ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_simpleStoredPropertyList::getter_mNeedsValidationAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_simpleStoredPropertyList * p = (cCollectionElement_simpleStoredPropertyList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
    result = p->mObject.mProperty_mNeedsValidation ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_simpleStoredPropertyList::cEnumerator_simpleStoredPropertyList (const GALGAS_simpleStoredPropertyList & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyList_2D_element cEnumerator_simpleStoredPropertyList::current (LOCATION_ARGS) const {
  const cCollectionElement_simpleStoredPropertyList * p = (const cCollectionElement_simpleStoredPropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_simpleStoredPropertyList::current_mPropertyTypeName (LOCATION_ARGS) const {
  const cCollectionElement_simpleStoredPropertyList * p = (const cCollectionElement_simpleStoredPropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
  return p->mObject.mProperty_mPropertyTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_simpleStoredPropertyList::current_mPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_simpleStoredPropertyList * p = (const cCollectionElement_simpleStoredPropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
  return p->mObject.mProperty_mPropertyName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDefaultValue cEnumerator_simpleStoredPropertyList::current_mDefaultValue (LOCATION_ARGS) const {
  const cCollectionElement_simpleStoredPropertyList * p = (const cCollectionElement_simpleStoredPropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
  return p->mObject.mProperty_mDefaultValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_simpleStoredPropertyList::current_mNeedsValidation (LOCATION_ARGS) const {
  const cCollectionElement_simpleStoredPropertyList * p = (const cCollectionElement_simpleStoredPropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
  return p->mObject.mProperty_mNeedsValidation ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @simpleStoredPropertyList type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_simpleStoredPropertyList ("simpleStoredPropertyList",
                                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_simpleStoredPropertyList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_simpleStoredPropertyList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_simpleStoredPropertyList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_simpleStoredPropertyList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyList GALGAS_simpleStoredPropertyList::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_simpleStoredPropertyList result ;
  const GALGAS_simpleStoredPropertyList * p = (const GALGAS_simpleStoredPropertyList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_simpleStoredPropertyList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("simpleStoredPropertyList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Class for element of '@classListForGeneration' list                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_classListForGeneration : public cCollectionElement {
  public : GALGAS_classListForGeneration_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_classListForGeneration (const GALGAS_string & in_mClassName,
                                                      const GALGAS_simpleStoredPropertyListForGeneration & in_mSimpleStoredPropertyListForGeneration,
                                                      const GALGAS_transientDefinitionListForGeneration & in_mTransientListForGeneration,
                                                      const GALGAS_externSwiftFunctionList & in_mExternSwiftFunctionList,
                                                      const GALGAS_externSwiftDelegateList & in_mExternSwiftDelegateList
                                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_classListForGeneration::cCollectionElement_classListForGeneration (const GALGAS_string & in_mClassName,
                                                                                      const GALGAS_simpleStoredPropertyListForGeneration & in_mSimpleStoredPropertyListForGeneration,
                                                                                      const GALGAS_transientDefinitionListForGeneration & in_mTransientListForGeneration,
                                                                                      const GALGAS_externSwiftFunctionList & in_mExternSwiftFunctionList,
                                                                                      const GALGAS_externSwiftDelegateList & in_mExternSwiftDelegateList
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mClassName, in_mSimpleStoredPropertyListForGeneration, in_mTransientListForGeneration, in_mExternSwiftFunctionList, in_mExternSwiftDelegateList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_classListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_classListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_classListForGeneration (mObject.mProperty_mClassName, mObject.mProperty_mSimpleStoredPropertyListForGeneration, mObject.mProperty_mTransientListForGeneration, mObject.mProperty_mExternSwiftFunctionList, mObject.mProperty_mExternSwiftDelegateList COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_classListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mClassName" ":" ;
  mObject.mProperty_mClassName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSimpleStoredPropertyListForGeneration" ":" ;
  mObject.mProperty_mSimpleStoredPropertyListForGeneration.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTransientListForGeneration" ":" ;
  mObject.mProperty_mTransientListForGeneration.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExternSwiftFunctionList" ":" ;
  mObject.mProperty_mExternSwiftFunctionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExternSwiftDelegateList" ":" ;
  mObject.mProperty_mExternSwiftDelegateList.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_classListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_classListForGeneration * operand = (cCollectionElement_classListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_classListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classListForGeneration::GALGAS_classListForGeneration (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classListForGeneration::GALGAS_classListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classListForGeneration GALGAS_classListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_classListForGeneration  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classListForGeneration GALGAS_classListForGeneration::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                        const GALGAS_simpleStoredPropertyListForGeneration & inOperand1,
                                                                                        const GALGAS_transientDefinitionListForGeneration & inOperand2,
                                                                                        const GALGAS_externSwiftFunctionList & inOperand3,
                                                                                        const GALGAS_externSwiftDelegateList & inOperand4
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_classListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_classListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_classListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_classListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_string & in_mClassName,
                                                               const GALGAS_simpleStoredPropertyListForGeneration & in_mSimpleStoredPropertyListForGeneration,
                                                               const GALGAS_transientDefinitionListForGeneration & in_mTransientListForGeneration,
                                                               const GALGAS_externSwiftFunctionList & in_mExternSwiftFunctionList,
                                                               const GALGAS_externSwiftDelegateList & in_mExternSwiftDelegateList
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_classListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_classListForGeneration (in_mClassName,
                                                            in_mSimpleStoredPropertyListForGeneration,
                                                            in_mTransientListForGeneration,
                                                            in_mExternSwiftFunctionList,
                                                            in_mExternSwiftDelegateList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_classListForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                         const GALGAS_simpleStoredPropertyListForGeneration & inOperand1,
                                                         const GALGAS_transientDefinitionListForGeneration & inOperand2,
                                                         const GALGAS_externSwiftFunctionList & inOperand3,
                                                         const GALGAS_externSwiftDelegateList & inOperand4
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_classListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_classListForGeneration::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                          const GALGAS_simpleStoredPropertyListForGeneration inOperand1,
                                                          const GALGAS_transientDefinitionListForGeneration inOperand2,
                                                          const GALGAS_externSwiftFunctionList inOperand3,
                                                          const GALGAS_externSwiftDelegateList inOperand4,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_classListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_classListForGeneration::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                          GALGAS_simpleStoredPropertyListForGeneration & outOperand1,
                                                          GALGAS_transientDefinitionListForGeneration & outOperand2,
                                                          GALGAS_externSwiftFunctionList & outOperand3,
                                                          GALGAS_externSwiftDelegateList & outOperand4,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_classListForGeneration * p = (cCollectionElement_classListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_classListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mClassName ;
      outOperand1 = p->mObject.mProperty_mSimpleStoredPropertyListForGeneration ;
      outOperand2 = p->mObject.mProperty_mTransientListForGeneration ;
      outOperand3 = p->mObject.mProperty_mExternSwiftFunctionList ;
      outOperand4 = p->mObject.mProperty_mExternSwiftDelegateList ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_classListForGeneration::setter_popFirst (GALGAS_string & outOperand0,
                                                     GALGAS_simpleStoredPropertyListForGeneration & outOperand1,
                                                     GALGAS_transientDefinitionListForGeneration & outOperand2,
                                                     GALGAS_externSwiftFunctionList & outOperand3,
                                                     GALGAS_externSwiftDelegateList & outOperand4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_classListForGeneration * p = (cCollectionElement_classListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_classListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mClassName ;
    outOperand1 = p->mObject.mProperty_mSimpleStoredPropertyListForGeneration ;
    outOperand2 = p->mObject.mProperty_mTransientListForGeneration ;
    outOperand3 = p->mObject.mProperty_mExternSwiftFunctionList ;
    outOperand4 = p->mObject.mProperty_mExternSwiftDelegateList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_classListForGeneration::setter_popLast (GALGAS_string & outOperand0,
                                                    GALGAS_simpleStoredPropertyListForGeneration & outOperand1,
                                                    GALGAS_transientDefinitionListForGeneration & outOperand2,
                                                    GALGAS_externSwiftFunctionList & outOperand3,
                                                    GALGAS_externSwiftDelegateList & outOperand4,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_classListForGeneration * p = (cCollectionElement_classListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_classListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mClassName ;
    outOperand1 = p->mObject.mProperty_mSimpleStoredPropertyListForGeneration ;
    outOperand2 = p->mObject.mProperty_mTransientListForGeneration ;
    outOperand3 = p->mObject.mProperty_mExternSwiftFunctionList ;
    outOperand4 = p->mObject.mProperty_mExternSwiftDelegateList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_classListForGeneration::method_first (GALGAS_string & outOperand0,
                                                  GALGAS_simpleStoredPropertyListForGeneration & outOperand1,
                                                  GALGAS_transientDefinitionListForGeneration & outOperand2,
                                                  GALGAS_externSwiftFunctionList & outOperand3,
                                                  GALGAS_externSwiftDelegateList & outOperand4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_classListForGeneration * p = (cCollectionElement_classListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_classListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mClassName ;
    outOperand1 = p->mObject.mProperty_mSimpleStoredPropertyListForGeneration ;
    outOperand2 = p->mObject.mProperty_mTransientListForGeneration ;
    outOperand3 = p->mObject.mProperty_mExternSwiftFunctionList ;
    outOperand4 = p->mObject.mProperty_mExternSwiftDelegateList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_classListForGeneration::method_last (GALGAS_string & outOperand0,
                                                 GALGAS_simpleStoredPropertyListForGeneration & outOperand1,
                                                 GALGAS_transientDefinitionListForGeneration & outOperand2,
                                                 GALGAS_externSwiftFunctionList & outOperand3,
                                                 GALGAS_externSwiftDelegateList & outOperand4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_classListForGeneration * p = (cCollectionElement_classListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_classListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mClassName ;
    outOperand1 = p->mObject.mProperty_mSimpleStoredPropertyListForGeneration ;
    outOperand2 = p->mObject.mProperty_mTransientListForGeneration ;
    outOperand3 = p->mObject.mProperty_mExternSwiftFunctionList ;
    outOperand4 = p->mObject.mProperty_mExternSwiftDelegateList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classListForGeneration GALGAS_classListForGeneration::add_operation (const GALGAS_classListForGeneration & inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_classListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classListForGeneration GALGAS_classListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_classListForGeneration result = GALGAS_classListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classListForGeneration GALGAS_classListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_classListForGeneration result = GALGAS_classListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classListForGeneration GALGAS_classListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_classListForGeneration result = GALGAS_classListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_classListForGeneration::plusAssign_operation (const GALGAS_classListForGeneration inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_classListForGeneration::getter_mClassNameAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_classListForGeneration * p = (cCollectionElement_classListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_classListForGeneration) ;
    result = p->mObject.mProperty_mClassName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyListForGeneration GALGAS_classListForGeneration::getter_mSimpleStoredPropertyListForGenerationAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_classListForGeneration * p = (cCollectionElement_classListForGeneration *) attributes.ptr () ;
  GALGAS_simpleStoredPropertyListForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_classListForGeneration) ;
    result = p->mObject.mProperty_mSimpleStoredPropertyListForGeneration ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDefinitionListForGeneration GALGAS_classListForGeneration::getter_mTransientListForGenerationAtIndex (const GALGAS_uint & inIndex,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_classListForGeneration * p = (cCollectionElement_classListForGeneration *) attributes.ptr () ;
  GALGAS_transientDefinitionListForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_classListForGeneration) ;
    result = p->mObject.mProperty_mTransientListForGeneration ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList GALGAS_classListForGeneration::getter_mExternSwiftFunctionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_classListForGeneration * p = (cCollectionElement_classListForGeneration *) attributes.ptr () ;
  GALGAS_externSwiftFunctionList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_classListForGeneration) ;
    result = p->mObject.mProperty_mExternSwiftFunctionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftDelegateList GALGAS_classListForGeneration::getter_mExternSwiftDelegateListAtIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_classListForGeneration * p = (cCollectionElement_classListForGeneration *) attributes.ptr () ;
  GALGAS_externSwiftDelegateList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_classListForGeneration) ;
    result = p->mObject.mProperty_mExternSwiftDelegateList ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_classListForGeneration::cEnumerator_classListForGeneration (const GALGAS_classListForGeneration & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classListForGeneration_2D_element cEnumerator_classListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_classListForGeneration * p = (const cCollectionElement_classListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_classListForGeneration) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_classListForGeneration::current_mClassName (LOCATION_ARGS) const {
  const cCollectionElement_classListForGeneration * p = (const cCollectionElement_classListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_classListForGeneration) ;
  return p->mObject.mProperty_mClassName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyListForGeneration cEnumerator_classListForGeneration::current_mSimpleStoredPropertyListForGeneration (LOCATION_ARGS) const {
  const cCollectionElement_classListForGeneration * p = (const cCollectionElement_classListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_classListForGeneration) ;
  return p->mObject.mProperty_mSimpleStoredPropertyListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDefinitionListForGeneration cEnumerator_classListForGeneration::current_mTransientListForGeneration (LOCATION_ARGS) const {
  const cCollectionElement_classListForGeneration * p = (const cCollectionElement_classListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_classListForGeneration) ;
  return p->mObject.mProperty_mTransientListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList cEnumerator_classListForGeneration::current_mExternSwiftFunctionList (LOCATION_ARGS) const {
  const cCollectionElement_classListForGeneration * p = (const cCollectionElement_classListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_classListForGeneration) ;
  return p->mObject.mProperty_mExternSwiftFunctionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftDelegateList cEnumerator_classListForGeneration::current_mExternSwiftDelegateList (LOCATION_ARGS) const {
  const cCollectionElement_classListForGeneration * p = (const cCollectionElement_classListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_classListForGeneration) ;
  return p->mObject.mProperty_mExternSwiftDelegateList ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @classListForGeneration type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_classListForGeneration ("classListForGeneration",
                                               NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_classListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_classListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_classListForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classListForGeneration GALGAS_classListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_classListForGeneration result ;
  const GALGAS_classListForGeneration * p = (const GALGAS_classListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_classListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Class for element of '@simpleStoredPropertyListForGeneration' list                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_simpleStoredPropertyListForGeneration : public cCollectionElement {
  public : GALGAS_simpleStoredPropertyListForGeneration_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_simpleStoredPropertyListForGeneration (const GALGAS_typeKind & in_mType,
                                                                     const GALGAS_string & in_mStoredPropertyName,
                                                                     const GALGAS_string & in_mDefaultValueInSwift,
                                                                     const GALGAS_bool & in_mNeedsValidation
                                                                     COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_simpleStoredPropertyListForGeneration::cCollectionElement_simpleStoredPropertyListForGeneration (const GALGAS_typeKind & in_mType,
                                                                                                                    const GALGAS_string & in_mStoredPropertyName,
                                                                                                                    const GALGAS_string & in_mDefaultValueInSwift,
                                                                                                                    const GALGAS_bool & in_mNeedsValidation
                                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mType, in_mStoredPropertyName, in_mDefaultValueInSwift, in_mNeedsValidation) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_simpleStoredPropertyListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_simpleStoredPropertyListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_simpleStoredPropertyListForGeneration (mObject.mProperty_mType, mObject.mProperty_mStoredPropertyName, mObject.mProperty_mDefaultValueInSwift, mObject.mProperty_mNeedsValidation COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_simpleStoredPropertyListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mObject.mProperty_mType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStoredPropertyName" ":" ;
  mObject.mProperty_mStoredPropertyName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDefaultValueInSwift" ":" ;
  mObject.mProperty_mDefaultValueInSwift.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mNeedsValidation" ":" ;
  mObject.mProperty_mNeedsValidation.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_simpleStoredPropertyListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_simpleStoredPropertyListForGeneration * operand = (cCollectionElement_simpleStoredPropertyListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_simpleStoredPropertyListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyListForGeneration::GALGAS_simpleStoredPropertyListForGeneration (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyListForGeneration::GALGAS_simpleStoredPropertyListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyListForGeneration GALGAS_simpleStoredPropertyListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_simpleStoredPropertyListForGeneration  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyListForGeneration GALGAS_simpleStoredPropertyListForGeneration::constructor_listWithValue (const GALGAS_typeKind & inOperand0,
                                                                                                                      const GALGAS_string & inOperand1,
                                                                                                                      const GALGAS_string & inOperand2,
                                                                                                                      const GALGAS_bool & inOperand3
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_simpleStoredPropertyListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_simpleStoredPropertyListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_simpleStoredPropertyListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_simpleStoredPropertyListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                              const GALGAS_typeKind & in_mType,
                                                                              const GALGAS_string & in_mStoredPropertyName,
                                                                              const GALGAS_string & in_mDefaultValueInSwift,
                                                                              const GALGAS_bool & in_mNeedsValidation
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_simpleStoredPropertyListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_simpleStoredPropertyListForGeneration (in_mType,
                                                                           in_mStoredPropertyName,
                                                                           in_mDefaultValueInSwift,
                                                                           in_mNeedsValidation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_simpleStoredPropertyListForGeneration::addAssign_operation (const GALGAS_typeKind & inOperand0,
                                                                        const GALGAS_string & inOperand1,
                                                                        const GALGAS_string & inOperand2,
                                                                        const GALGAS_bool & inOperand3
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_simpleStoredPropertyListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_simpleStoredPropertyListForGeneration::setter_insertAtIndex (const GALGAS_typeKind inOperand0,
                                                                         const GALGAS_string inOperand1,
                                                                         const GALGAS_string inOperand2,
                                                                         const GALGAS_bool inOperand3,
                                                                         const GALGAS_uint inInsertionIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_simpleStoredPropertyListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_simpleStoredPropertyListForGeneration::setter_removeAtIndex (GALGAS_typeKind & outOperand0,
                                                                         GALGAS_string & outOperand1,
                                                                         GALGAS_string & outOperand2,
                                                                         GALGAS_bool & outOperand3,
                                                                         const GALGAS_uint inRemoveIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_simpleStoredPropertyListForGeneration * p = (cCollectionElement_simpleStoredPropertyListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mType ;
      outOperand1 = p->mObject.mProperty_mStoredPropertyName ;
      outOperand2 = p->mObject.mProperty_mDefaultValueInSwift ;
      outOperand3 = p->mObject.mProperty_mNeedsValidation ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_simpleStoredPropertyListForGeneration::setter_popFirst (GALGAS_typeKind & outOperand0,
                                                                    GALGAS_string & outOperand1,
                                                                    GALGAS_string & outOperand2,
                                                                    GALGAS_bool & outOperand3,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_simpleStoredPropertyListForGeneration * p = (cCollectionElement_simpleStoredPropertyListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mStoredPropertyName ;
    outOperand2 = p->mObject.mProperty_mDefaultValueInSwift ;
    outOperand3 = p->mObject.mProperty_mNeedsValidation ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_simpleStoredPropertyListForGeneration::setter_popLast (GALGAS_typeKind & outOperand0,
                                                                   GALGAS_string & outOperand1,
                                                                   GALGAS_string & outOperand2,
                                                                   GALGAS_bool & outOperand3,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_simpleStoredPropertyListForGeneration * p = (cCollectionElement_simpleStoredPropertyListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mStoredPropertyName ;
    outOperand2 = p->mObject.mProperty_mDefaultValueInSwift ;
    outOperand3 = p->mObject.mProperty_mNeedsValidation ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_simpleStoredPropertyListForGeneration::method_first (GALGAS_typeKind & outOperand0,
                                                                 GALGAS_string & outOperand1,
                                                                 GALGAS_string & outOperand2,
                                                                 GALGAS_bool & outOperand3,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_simpleStoredPropertyListForGeneration * p = (cCollectionElement_simpleStoredPropertyListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mStoredPropertyName ;
    outOperand2 = p->mObject.mProperty_mDefaultValueInSwift ;
    outOperand3 = p->mObject.mProperty_mNeedsValidation ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_simpleStoredPropertyListForGeneration::method_last (GALGAS_typeKind & outOperand0,
                                                                GALGAS_string & outOperand1,
                                                                GALGAS_string & outOperand2,
                                                                GALGAS_bool & outOperand3,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_simpleStoredPropertyListForGeneration * p = (cCollectionElement_simpleStoredPropertyListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mStoredPropertyName ;
    outOperand2 = p->mObject.mProperty_mDefaultValueInSwift ;
    outOperand3 = p->mObject.mProperty_mNeedsValidation ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyListForGeneration GALGAS_simpleStoredPropertyListForGeneration::add_operation (const GALGAS_simpleStoredPropertyListForGeneration & inOperand,
                                                                                                          C_Compiler * /* inCompiler */
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_simpleStoredPropertyListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyListForGeneration GALGAS_simpleStoredPropertyListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_simpleStoredPropertyListForGeneration result = GALGAS_simpleStoredPropertyListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyListForGeneration GALGAS_simpleStoredPropertyListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_simpleStoredPropertyListForGeneration result = GALGAS_simpleStoredPropertyListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyListForGeneration GALGAS_simpleStoredPropertyListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_simpleStoredPropertyListForGeneration result = GALGAS_simpleStoredPropertyListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_simpleStoredPropertyListForGeneration::plusAssign_operation (const GALGAS_simpleStoredPropertyListForGeneration inOperand,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_simpleStoredPropertyListForGeneration::getter_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_simpleStoredPropertyListForGeneration * p = (cCollectionElement_simpleStoredPropertyListForGeneration *) attributes.ptr () ;
  GALGAS_typeKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyListForGeneration) ;
    result = p->mObject.mProperty_mType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_simpleStoredPropertyListForGeneration::getter_mStoredPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_simpleStoredPropertyListForGeneration * p = (cCollectionElement_simpleStoredPropertyListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyListForGeneration) ;
    result = p->mObject.mProperty_mStoredPropertyName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_simpleStoredPropertyListForGeneration::getter_mDefaultValueInSwiftAtIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_simpleStoredPropertyListForGeneration * p = (cCollectionElement_simpleStoredPropertyListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyListForGeneration) ;
    result = p->mObject.mProperty_mDefaultValueInSwift ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_simpleStoredPropertyListForGeneration::getter_mNeedsValidationAtIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_simpleStoredPropertyListForGeneration * p = (cCollectionElement_simpleStoredPropertyListForGeneration *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyListForGeneration) ;
    result = p->mObject.mProperty_mNeedsValidation ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_simpleStoredPropertyListForGeneration::cEnumerator_simpleStoredPropertyListForGeneration (const GALGAS_simpleStoredPropertyListForGeneration & inEnumeratedObject,
                                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyListForGeneration_2D_element cEnumerator_simpleStoredPropertyListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_simpleStoredPropertyListForGeneration * p = (const cCollectionElement_simpleStoredPropertyListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyListForGeneration) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind cEnumerator_simpleStoredPropertyListForGeneration::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_simpleStoredPropertyListForGeneration * p = (const cCollectionElement_simpleStoredPropertyListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyListForGeneration) ;
  return p->mObject.mProperty_mType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_simpleStoredPropertyListForGeneration::current_mStoredPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_simpleStoredPropertyListForGeneration * p = (const cCollectionElement_simpleStoredPropertyListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyListForGeneration) ;
  return p->mObject.mProperty_mStoredPropertyName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_simpleStoredPropertyListForGeneration::current_mDefaultValueInSwift (LOCATION_ARGS) const {
  const cCollectionElement_simpleStoredPropertyListForGeneration * p = (const cCollectionElement_simpleStoredPropertyListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyListForGeneration) ;
  return p->mObject.mProperty_mDefaultValueInSwift ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_simpleStoredPropertyListForGeneration::current_mNeedsValidation (LOCATION_ARGS) const {
  const cCollectionElement_simpleStoredPropertyListForGeneration * p = (const cCollectionElement_simpleStoredPropertyListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyListForGeneration) ;
  return p->mObject.mProperty_mNeedsValidation ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @simpleStoredPropertyListForGeneration type                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_simpleStoredPropertyListForGeneration ("simpleStoredPropertyListForGeneration",
                                                              NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_simpleStoredPropertyListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_simpleStoredPropertyListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_simpleStoredPropertyListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_simpleStoredPropertyListForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyListForGeneration GALGAS_simpleStoredPropertyListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_simpleStoredPropertyListForGeneration result ;
  const GALGAS_simpleStoredPropertyListForGeneration * p = (const GALGAS_simpleStoredPropertyListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_simpleStoredPropertyListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("simpleStoredPropertyListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Class for element of '@transientDefinitionListForGeneration' list                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_transientDefinitionListForGeneration : public cCollectionElement {
  public : GALGAS_transientDefinitionListForGeneration_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_transientDefinitionListForGeneration (const GALGAS_string & in_mOwnerName,
                                                                    const GALGAS_string & in_mTransientName,
                                                                    const GALGAS_bool & in_mIsArray,
                                                                    const GALGAS_typeKind & in_mTransientType,
                                                                    const GALGAS_transientDependencyListForGeneration & in_mDependencyList
                                                                    COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_transientDefinitionListForGeneration::cCollectionElement_transientDefinitionListForGeneration (const GALGAS_string & in_mOwnerName,
                                                                                                                  const GALGAS_string & in_mTransientName,
                                                                                                                  const GALGAS_bool & in_mIsArray,
                                                                                                                  const GALGAS_typeKind & in_mTransientType,
                                                                                                                  const GALGAS_transientDependencyListForGeneration & in_mDependencyList
                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOwnerName, in_mTransientName, in_mIsArray, in_mTransientType, in_mDependencyList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_transientDefinitionListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_transientDefinitionListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_transientDefinitionListForGeneration (mObject.mProperty_mOwnerName, mObject.mProperty_mTransientName, mObject.mProperty_mIsArray, mObject.mProperty_mTransientType, mObject.mProperty_mDependencyList COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_transientDefinitionListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOwnerName" ":" ;
  mObject.mProperty_mOwnerName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTransientName" ":" ;
  mObject.mProperty_mTransientName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsArray" ":" ;
  mObject.mProperty_mIsArray.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTransientType" ":" ;
  mObject.mProperty_mTransientType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDependencyList" ":" ;
  mObject.mProperty_mDependencyList.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_transientDefinitionListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_transientDefinitionListForGeneration * operand = (cCollectionElement_transientDefinitionListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_transientDefinitionListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDefinitionListForGeneration::GALGAS_transientDefinitionListForGeneration (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDefinitionListForGeneration::GALGAS_transientDefinitionListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDefinitionListForGeneration GALGAS_transientDefinitionListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_transientDefinitionListForGeneration  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDefinitionListForGeneration GALGAS_transientDefinitionListForGeneration::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                                    const GALGAS_string & inOperand1,
                                                                                                                    const GALGAS_bool & inOperand2,
                                                                                                                    const GALGAS_typeKind & inOperand3,
                                                                                                                    const GALGAS_transientDependencyListForGeneration & inOperand4
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_transientDefinitionListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_transientDefinitionListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_transientDefinitionListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_transientDefinitionListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                             const GALGAS_string & in_mOwnerName,
                                                                             const GALGAS_string & in_mTransientName,
                                                                             const GALGAS_bool & in_mIsArray,
                                                                             const GALGAS_typeKind & in_mTransientType,
                                                                             const GALGAS_transientDependencyListForGeneration & in_mDependencyList
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_transientDefinitionListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_transientDefinitionListForGeneration (in_mOwnerName,
                                                                          in_mTransientName,
                                                                          in_mIsArray,
                                                                          in_mTransientType,
                                                                          in_mDependencyList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_transientDefinitionListForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                                       const GALGAS_string & inOperand1,
                                                                       const GALGAS_bool & inOperand2,
                                                                       const GALGAS_typeKind & inOperand3,
                                                                       const GALGAS_transientDependencyListForGeneration & inOperand4
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_transientDefinitionListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_transientDefinitionListForGeneration::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                        const GALGAS_string inOperand1,
                                                                        const GALGAS_bool inOperand2,
                                                                        const GALGAS_typeKind inOperand3,
                                                                        const GALGAS_transientDependencyListForGeneration inOperand4,
                                                                        const GALGAS_uint inInsertionIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_transientDefinitionListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_transientDefinitionListForGeneration::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                        GALGAS_string & outOperand1,
                                                                        GALGAS_bool & outOperand2,
                                                                        GALGAS_typeKind & outOperand3,
                                                                        GALGAS_transientDependencyListForGeneration & outOperand4,
                                                                        const GALGAS_uint inRemoveIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_transientDefinitionListForGeneration * p = (cCollectionElement_transientDefinitionListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_transientDefinitionListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mOwnerName ;
      outOperand1 = p->mObject.mProperty_mTransientName ;
      outOperand2 = p->mObject.mProperty_mIsArray ;
      outOperand3 = p->mObject.mProperty_mTransientType ;
      outOperand4 = p->mObject.mProperty_mDependencyList ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_transientDefinitionListForGeneration::setter_popFirst (GALGAS_string & outOperand0,
                                                                   GALGAS_string & outOperand1,
                                                                   GALGAS_bool & outOperand2,
                                                                   GALGAS_typeKind & outOperand3,
                                                                   GALGAS_transientDependencyListForGeneration & outOperand4,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_transientDefinitionListForGeneration * p = (cCollectionElement_transientDefinitionListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_transientDefinitionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mOwnerName ;
    outOperand1 = p->mObject.mProperty_mTransientName ;
    outOperand2 = p->mObject.mProperty_mIsArray ;
    outOperand3 = p->mObject.mProperty_mTransientType ;
    outOperand4 = p->mObject.mProperty_mDependencyList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_transientDefinitionListForGeneration::setter_popLast (GALGAS_string & outOperand0,
                                                                  GALGAS_string & outOperand1,
                                                                  GALGAS_bool & outOperand2,
                                                                  GALGAS_typeKind & outOperand3,
                                                                  GALGAS_transientDependencyListForGeneration & outOperand4,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_transientDefinitionListForGeneration * p = (cCollectionElement_transientDefinitionListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_transientDefinitionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mOwnerName ;
    outOperand1 = p->mObject.mProperty_mTransientName ;
    outOperand2 = p->mObject.mProperty_mIsArray ;
    outOperand3 = p->mObject.mProperty_mTransientType ;
    outOperand4 = p->mObject.mProperty_mDependencyList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_transientDefinitionListForGeneration::method_first (GALGAS_string & outOperand0,
                                                                GALGAS_string & outOperand1,
                                                                GALGAS_bool & outOperand2,
                                                                GALGAS_typeKind & outOperand3,
                                                                GALGAS_transientDependencyListForGeneration & outOperand4,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_transientDefinitionListForGeneration * p = (cCollectionElement_transientDefinitionListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_transientDefinitionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mOwnerName ;
    outOperand1 = p->mObject.mProperty_mTransientName ;
    outOperand2 = p->mObject.mProperty_mIsArray ;
    outOperand3 = p->mObject.mProperty_mTransientType ;
    outOperand4 = p->mObject.mProperty_mDependencyList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_transientDefinitionListForGeneration::method_last (GALGAS_string & outOperand0,
                                                               GALGAS_string & outOperand1,
                                                               GALGAS_bool & outOperand2,
                                                               GALGAS_typeKind & outOperand3,
                                                               GALGAS_transientDependencyListForGeneration & outOperand4,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_transientDefinitionListForGeneration * p = (cCollectionElement_transientDefinitionListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_transientDefinitionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mOwnerName ;
    outOperand1 = p->mObject.mProperty_mTransientName ;
    outOperand2 = p->mObject.mProperty_mIsArray ;
    outOperand3 = p->mObject.mProperty_mTransientType ;
    outOperand4 = p->mObject.mProperty_mDependencyList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDefinitionListForGeneration GALGAS_transientDefinitionListForGeneration::add_operation (const GALGAS_transientDefinitionListForGeneration & inOperand,
                                                                                                        C_Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_transientDefinitionListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDefinitionListForGeneration GALGAS_transientDefinitionListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_transientDefinitionListForGeneration result = GALGAS_transientDefinitionListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDefinitionListForGeneration GALGAS_transientDefinitionListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_transientDefinitionListForGeneration result = GALGAS_transientDefinitionListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDefinitionListForGeneration GALGAS_transientDefinitionListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_transientDefinitionListForGeneration result = GALGAS_transientDefinitionListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_transientDefinitionListForGeneration::plusAssign_operation (const GALGAS_transientDefinitionListForGeneration inOperand,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_transientDefinitionListForGeneration::getter_mOwnerNameAtIndex (const GALGAS_uint & inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_transientDefinitionListForGeneration * p = (cCollectionElement_transientDefinitionListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_transientDefinitionListForGeneration) ;
    result = p->mObject.mProperty_mOwnerName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_transientDefinitionListForGeneration::getter_mTransientNameAtIndex (const GALGAS_uint & inIndex,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_transientDefinitionListForGeneration * p = (cCollectionElement_transientDefinitionListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_transientDefinitionListForGeneration) ;
    result = p->mObject.mProperty_mTransientName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_transientDefinitionListForGeneration::getter_mIsArrayAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_transientDefinitionListForGeneration * p = (cCollectionElement_transientDefinitionListForGeneration *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_transientDefinitionListForGeneration) ;
    result = p->mObject.mProperty_mIsArray ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_transientDefinitionListForGeneration::getter_mTransientTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_transientDefinitionListForGeneration * p = (cCollectionElement_transientDefinitionListForGeneration *) attributes.ptr () ;
  GALGAS_typeKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_transientDefinitionListForGeneration) ;
    result = p->mObject.mProperty_mTransientType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDependencyListForGeneration GALGAS_transientDefinitionListForGeneration::getter_mDependencyListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_transientDefinitionListForGeneration * p = (cCollectionElement_transientDefinitionListForGeneration *) attributes.ptr () ;
  GALGAS_transientDependencyListForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_transientDefinitionListForGeneration) ;
    result = p->mObject.mProperty_mDependencyList ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_transientDefinitionListForGeneration::cEnumerator_transientDefinitionListForGeneration (const GALGAS_transientDefinitionListForGeneration & inEnumeratedObject,
                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDefinitionListForGeneration_2D_element cEnumerator_transientDefinitionListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_transientDefinitionListForGeneration * p = (const cCollectionElement_transientDefinitionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientDefinitionListForGeneration) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_transientDefinitionListForGeneration::current_mOwnerName (LOCATION_ARGS) const {
  const cCollectionElement_transientDefinitionListForGeneration * p = (const cCollectionElement_transientDefinitionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientDefinitionListForGeneration) ;
  return p->mObject.mProperty_mOwnerName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_transientDefinitionListForGeneration::current_mTransientName (LOCATION_ARGS) const {
  const cCollectionElement_transientDefinitionListForGeneration * p = (const cCollectionElement_transientDefinitionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientDefinitionListForGeneration) ;
  return p->mObject.mProperty_mTransientName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_transientDefinitionListForGeneration::current_mIsArray (LOCATION_ARGS) const {
  const cCollectionElement_transientDefinitionListForGeneration * p = (const cCollectionElement_transientDefinitionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientDefinitionListForGeneration) ;
  return p->mObject.mProperty_mIsArray ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind cEnumerator_transientDefinitionListForGeneration::current_mTransientType (LOCATION_ARGS) const {
  const cCollectionElement_transientDefinitionListForGeneration * p = (const cCollectionElement_transientDefinitionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientDefinitionListForGeneration) ;
  return p->mObject.mProperty_mTransientType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDependencyListForGeneration cEnumerator_transientDefinitionListForGeneration::current_mDependencyList (LOCATION_ARGS) const {
  const cCollectionElement_transientDefinitionListForGeneration * p = (const cCollectionElement_transientDefinitionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientDefinitionListForGeneration) ;
  return p->mObject.mProperty_mDependencyList ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @transientDefinitionListForGeneration type                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientDefinitionListForGeneration ("transientDefinitionListForGeneration",
                                                             NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_transientDefinitionListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientDefinitionListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_transientDefinitionListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientDefinitionListForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDefinitionListForGeneration GALGAS_transientDefinitionListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_transientDefinitionListForGeneration result ;
  const GALGAS_transientDefinitionListForGeneration * p = (const GALGAS_transientDefinitionListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_transientDefinitionListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientDefinitionListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

