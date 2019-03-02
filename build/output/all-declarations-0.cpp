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

//--- Syntax error message for terminal '$abstract$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_abstract = "the 'abstract' keyword" ;

//--- Syntax error message for terminal '$action$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_action = "the 'action' keyword" ;

//--- Syntax error message for terminal '$all$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_all = "the 'all' keyword" ;

//--- Syntax error message for terminal '$arrayController$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_arrayController = "the 'arrayController' keyword" ;

//--- Syntax error message for terminal '$tableViewController$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_tableViewController = "the 'tableViewController' keyword" ;

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

//--- Syntax error message for terminal '$graphic$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_graphic = "the 'graphic' keyword" ;

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

//--- Syntax error message for terminal '$objectController$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_objectController = "the 'objectController' keyword" ;

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

//--- Syntax error message for terminal '$graphicController$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique_graphicController = "the '$graphicController' keyword" ;

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

//--- Syntax error message for terminal '$-$' :
static const char * gSyntaxErrorMessage_easyBindings_5F_lexique__2D_ = "the '-' delimitor" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                getMessageForTerminal                                                                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_String C_Lexique_easyBindings_5F_lexique::getMessageForTerminal (const int16_t inTerminalIndex) const {
  C_String result = "<unknown>" ;
  if ((inTerminalIndex >= 0) && (inTerminalIndex < 79)) {
    static const char * syntaxErrorMessageArray [79] = {kEndOfSourceLexicalErrorMessage,
        gSyntaxErrorMessage_easyBindings_5F_lexique_identifier,
        gSyntaxErrorMessage_easyBindings_5F_lexique_Identifier,
        gSyntaxErrorMessage_easyBindings_5F_lexique__40_attribute,
        gSyntaxErrorMessage_easyBindings_5F_lexique_bindingName,
        gSyntaxErrorMessage_easyBindings_5F_lexique_literal_5F_integer,
        gSyntaxErrorMessage_easyBindings_5F_lexique_literal_5F_double,
        gSyntaxErrorMessage_easyBindings_5F_lexique_literal_5F_string,
        gSyntaxErrorMessage_easyBindings_5F_lexique_comment,
        gSyntaxErrorMessage_easyBindings_5F_lexique_abstract,
        gSyntaxErrorMessage_easyBindings_5F_lexique_action,
        gSyntaxErrorMessage_easyBindings_5F_lexique_all,
        gSyntaxErrorMessage_easyBindings_5F_lexique_arrayController,
        gSyntaxErrorMessage_easyBindings_5F_lexique_tableViewController,
        gSyntaxErrorMessage_easyBindings_5F_lexique_binding,
        gSyntaxErrorMessage_easyBindings_5F_lexique_calledBy,
        gSyntaxErrorMessage_easyBindings_5F_lexique_class,
        gSyntaxErrorMessage_easyBindings_5F_lexique_classForSwift,
        gSyntaxErrorMessage_easyBindings_5F_lexique_column,
        gSyntaxErrorMessage_easyBindings_5F_lexique_default,
        gSyntaxErrorMessage_easyBindings_5F_lexique_dependsFrom,
        gSyntaxErrorMessage_easyBindings_5F_lexique_document,
        gSyntaxErrorMessage_easyBindings_5F_lexique_enum,
        gSyntaxErrorMessage_easyBindings_5F_lexique_entity,
        gSyntaxErrorMessage_easyBindings_5F_lexique_extern,
        gSyntaxErrorMessage_easyBindings_5F_lexique_externDelegate,
        gSyntaxErrorMessage_easyBindings_5F_lexique_externFunc,
        gSyntaxErrorMessage_easyBindings_5F_lexique_graphic,
        gSyntaxErrorMessage_easyBindings_5F_lexique_filter,
        gSyntaxErrorMessage_easyBindings_5F_lexique_include,
        gSyntaxErrorMessage_easyBindings_5F_lexique_inverse,
        gSyntaxErrorMessage_easyBindings_5F_lexique_mainxib,
        gSyntaxErrorMessage_easyBindings_5F_lexique_no,
        gSyntaxErrorMessage_easyBindings_5F_lexique_none,
        gSyntaxErrorMessage_easyBindings_5F_lexique_objectController,
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
        gSyntaxErrorMessage_easyBindings_5F_lexique_graphicController,
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
        gSyntaxErrorMessage_easyBindings_5F_lexique__5E_,
        gSyntaxErrorMessage_easyBindings_5F_lexique__2D_
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

//--- Unicode string for '$_2D_$'
static const utf32 kUnicodeString_easyBindings_5F_lexique__2D_ [] = {
  TO_UNICODE ('-'),
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

//--- Unicode string for '$abstract$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_abstract [] = {
  TO_UNICODE ('a'),
  TO_UNICODE ('b'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
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

//--- Unicode string for '$graphic$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_graphic [] = {
  TO_UNICODE ('g'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
  TO_UNICODE ('h'),
  TO_UNICODE ('i'),
  TO_UNICODE ('c'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$graphicController$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_graphicController [] = {
  TO_UNICODE ('g'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
  TO_UNICODE ('h'),
  TO_UNICODE ('i'),
  TO_UNICODE ('c'),
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

//--- Unicode string for '$objectController$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_objectController [] = {
  TO_UNICODE ('o'),
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

//--- Unicode string for '$tableViewController$'
static const utf32 kUnicodeString_easyBindings_5F_lexique_tableViewController [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('b'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('V'),
  TO_UNICODE ('i'),
  TO_UNICODE ('e'),
  TO_UNICODE ('w'),
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

static const int32_t ktable_size_easyBindings_5F_lexique_delimitorsList = 21 ;

static const C_unicode_lexique_table_entry ktable_for_easyBindings_5F_lexique_delimitorsList [ktable_size_easyBindings_5F_lexique_delimitorsList] = {
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__21_, 1, C_Lexique_easyBindings_5F_lexique::kToken__21_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__26_, 1, C_Lexique_easyBindings_5F_lexique::kToken__26_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__28_, 1, C_Lexique_easyBindings_5F_lexique::kToken__28_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__29_, 1, C_Lexique_easyBindings_5F_lexique::kToken__29_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__2C_, 1, C_Lexique_easyBindings_5F_lexique::kToken__2C_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__2D_, 1, C_Lexique_easyBindings_5F_lexique::kToken__2D_),
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

static const int32_t ktable_size_easyBindings_5F_lexique_lowerCaseKeyWordList = 44 ;

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
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_graphic, 7, C_Lexique_easyBindings_5F_lexique::kToken_graphic),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_include, 7, C_Lexique_easyBindings_5F_lexique::kToken_include),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_inverse, 7, C_Lexique_easyBindings_5F_lexique::kToken_inverse),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_mainxib, 7, C_Lexique_easyBindings_5F_lexique::kToken_mainxib),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_version, 7, C_Lexique_easyBindings_5F_lexique::kToken_version),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_abstract, 8, C_Lexique_easyBindings_5F_lexique::kToken_abstract),
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
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_objectController, 16, C_Lexique_easyBindings_5F_lexique::kToken_objectController),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_selectionController, 19, C_Lexique_easyBindings_5F_lexique::kToken_selectionController),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_tableViewController, 19, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_versionShouldChange, 19, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange)
} ;

int16_t C_Lexique_easyBindings_5F_lexique::search_into_lowerCaseKeyWordList (const C_String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_easyBindings_5F_lexique_lowerCaseKeyWordList, ktable_size_easyBindings_5F_lexique_lowerCaseKeyWordList) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//             Key words table 'reservedBindingNameKeyWordList'                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const int32_t ktable_size_easyBindings_5F_lexique_reservedBindingNameKeyWordList = 5 ;

static const C_unicode_lexique_table_entry ktable_for_easyBindings_5F_lexique_reservedBindingNameKeyWordList [ktable_size_easyBindings_5F_lexique_reservedBindingNameKeyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_run, 3, C_Lexique_easyBindings_5F_lexique::kToken_run),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_hidden, 6, C_Lexique_easyBindings_5F_lexique::kToken_hidden),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_enabled, 7, C_Lexique_easyBindings_5F_lexique::kToken_enabled),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_tableValue, 10, C_Lexique_easyBindings_5F_lexique::kToken_tableValue),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_graphicController, 17, C_Lexique_easyBindings_5F_lexique::kToken_graphicController)
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
    case kToken_abstract:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("abstract") ;
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
    case kToken_arrayController:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("arrayController") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_tableViewController:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("tableViewController") ;
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
    case kToken_graphic:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("graphic") ;
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
    case kToken_objectController:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("objectController") ;
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
    case kToken_graphicController:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("graphicController") ;
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
    case kToken__2D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("-") ;
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
      }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__2D_, 1, true)) {
        token.mTokenCode = kToken__2D_ ;
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
  result.addAssign_operation (GALGAS_string ("abstract") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("action") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("all") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("arrayController") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("tableViewController") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("binding") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("calledBy") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("class") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("classForSwift") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("column") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("default") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("dependsFrom") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("document") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("enum") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("entity") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("extern") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("externDelegate") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("externFunc") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("graphic") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("filter") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("include") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("inverse") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("mainxib") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("no") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("none") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("objectController") COMMA_THERE) ;
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
  result.addAssign_operation (GALGAS_string ("graphicController") COMMA_THERE) ;
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
  result.addAssign_operation (GALGAS_string ("-") COMMA_THERE) ;
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
    ioList.appendObject ("-") ;
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
    ioList.appendObject ("graphic") ;
    ioList.appendObject ("include") ;
    ioList.appendObject ("inverse") ;
    ioList.appendObject ("mainxib") ;
    ioList.appendObject ("version") ;
    ioList.appendObject ("abstract") ;
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
    ioList.appendObject ("objectController") ;
    ioList.appendObject ("selectionController") ;
    ioList.appendObject ("tableViewController") ;
    ioList.appendObject ("versionShouldChange") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
  if (inIdentifier == "easyBindings_lexique:reservedBindingNameKeyWordList") {
    ioFound = true ;
    ioList.appendObject ("run") ;
    ioList.appendObject ("hidden") ;
    ioList.appendObject ("enabled") ;
    ioList.appendObject ("tableValue") ;
    ioList.appendObject ("graphicController") ;
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
  static const uint32_t kTerminalSymbolStyles [79] = {0,
    2 /* easyBindings_lexique_1_identifier */,
    3 /* easyBindings_lexique_1_Identifier */,
    4 /* easyBindings_lexique_1__40_attribute */,
    5 /* easyBindings_lexique_1_bindingName */,
    7 /* easyBindings_lexique_1_literal_5F_integer */,
    8 /* easyBindings_lexique_1_literal_5F_double */,
    9 /* easyBindings_lexique_1_literal_5F_string */,
    11 /* easyBindings_lexique_1_comment */,
    1 /* easyBindings_lexique_1_abstract */,
    1 /* easyBindings_lexique_1_action */,
    1 /* easyBindings_lexique_1_all */,
    1 /* easyBindings_lexique_1_arrayController */,
    1 /* easyBindings_lexique_1_tableViewController */,
    1 /* easyBindings_lexique_1_binding */,
    1 /* easyBindings_lexique_1_calledBy */,
    1 /* easyBindings_lexique_1_class */,
    1 /* easyBindings_lexique_1_classForSwift */,
    1 /* easyBindings_lexique_1_column */,
    1 /* easyBindings_lexique_1_default */,
    1 /* easyBindings_lexique_1_dependsFrom */,
    1 /* easyBindings_lexique_1_document */,
    1 /* easyBindings_lexique_1_enum */,
    1 /* easyBindings_lexique_1_entity */,
    1 /* easyBindings_lexique_1_extern */,
    1 /* easyBindings_lexique_1_externDelegate */,
    1 /* easyBindings_lexique_1_externFunc */,
    1 /* easyBindings_lexique_1_graphic */,
    1 /* easyBindings_lexique_1_filter */,
    1 /* easyBindings_lexique_1_include */,
    1 /* easyBindings_lexique_1_inverse */,
    1 /* easyBindings_lexique_1_mainxib */,
    1 /* easyBindings_lexique_1_no */,
    1 /* easyBindings_lexique_1_none */,
    1 /* easyBindings_lexique_1_objectController */,
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
    6 /* easyBindings_lexique_1_graphicController */,
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
    10 /* easyBindings_lexique_1__5E_ */,
    10 /* easyBindings_lexique_1__2D_ */
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
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_include COMMA_SOURCE_FILE ("grammar-syntax.galgas", 52)) ;
      GALGAS_lstring var_filePath_2006 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("grammar-syntax.galgas", 53)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("grammar-syntax.galgas", 54)) ;
      GALGAS_lstring var_sourceFile_2037 = GALGAS_lstring::constructor_new (var_filePath_2006.getter_string (HERE).getter_absolutePathFromPath (GALGAS_string::constructor_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("grammar-syntax.galgas", 56)).getter_stringByDeletingLastPathComponent (SOURCE_FILE ("grammar-syntax.galgas", 56)) COMMA_SOURCE_FILE ("grammar-syntax.galgas", 56)), var_filePath_2006.getter_location (HERE)  COMMA_SOURCE_FILE ("grammar-syntax.galgas", 55)) ;
      GALGAS_location joker_2330 ; // Joker input parameter
      cGrammar_easyBindings_5F_grammar::_performSourceFileParsing_ (inCompiler, var_sourceFile_2037, constinArgument_inIsUserDefined, ioArgument_ioDeclarationAST, joker_2330  COMMA_SOURCE_FILE ("grammar-syntax.galgas", 59)) ;
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
      nt_outlet_5F_class_5F_declaration_ (constinArgument_inIsUserDefined, ioArgument_ioDeclarationAST, inCompiler) ;
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
  outArgument_outEndOfFile = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("grammar-syntax.galgas", 82)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_start_5F_symbol_i0_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_include COMMA_SOURCE_FILE ("grammar-syntax.galgas", 52)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("grammar-syntax.galgas", 53)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("grammar-syntax.galgas", 54)) ;
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
  GALGAS_lstring var_externDelegateName_904 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("extern-delegate.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("extern-delegate.galgas", 22)) ;
  ioArgument_ioExternSwiftDelegateList.addAssign_operation (var_externDelegateName_904  COMMA_SOURCE_FILE ("extern-delegate.galgas", 23)) ;
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
  GALGAS_lstring var_externFunctionName_919 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("extern-swift-func.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_calledBy COMMA_SOURCE_FILE ("extern-swift-func.galgas", 23)) ;
  GALGAS_lstring var_callerName_976 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("extern-swift-func.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("extern-swift-func.galgas", 25)) ;
  ioArgument_ioExternSwiftFunctionList.addAssign_operation (var_externFunctionName_919, var_callerName_976  COMMA_SOURCE_FILE ("extern-swift-func.galgas", 26)) ;
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

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_class_5F_declaration_i3_ (const GALGAS_bool /* constinArgument_inIsUserDefined */,
                                                                                           GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                           C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property-class.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("transient-property-class.galgas", 34)) ;
  GALGAS_bool var_isClass_1422 ;
  switch (select_easyBindings_5F_syntax_1 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("transient-property-class.galgas", 37)) ;
    var_isClass_1422 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_struct COMMA_SOURCE_FILE ("transient-property-class.galgas", 40)) ;
    var_isClass_1422 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_propertyTypeName_1568 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property-class.galgas", 43)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property-class.galgas", 44)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_transientClassDeclarationAST::constructor_new (var_propertyTypeName_1568, var_isClass_1422  COMMA_SOURCE_FILE ("transient-property-class.galgas", 45))  COMMA_SOURCE_FILE ("transient-property-class.galgas", 45)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_class_5F_declaration_i3_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property-class.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("transient-property-class.galgas", 34)) ;
  switch (select_easyBindings_5F_syntax_1 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("transient-property-class.galgas", 37)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_struct COMMA_SOURCE_FILE ("transient-property-class.galgas", 40)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property-class.galgas", 43)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property-class.galgas", 44)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_enum_5F_declaration_i4_ (const GALGAS_bool /* constinArgument_inIsUserDefined */,
                                                                                          GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                          C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("enumeration.galgas", 32)) ;
  GALGAS_lstring var_enumName_1413 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("enumeration.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("enumeration.galgas", 34)) ;
  GALGAS_lstringlist var_enumConstants_1443 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("enumeration.galgas", 35)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_constantName_1526 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("enumeration.galgas", 37)) ;
    var_enumConstants_1443.addAssign_operation (var_constantName_1526  COMMA_SOURCE_FILE ("enumeration.galgas", 38)) ;
    switch (select_easyBindings_5F_syntax_2 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("enumeration.galgas", 40)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("enumeration.galgas", 42)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_enumerationDeclarationAST::constructor_new (var_enumName_1413, var_enumConstants_1443  COMMA_SOURCE_FILE ("enumeration.galgas", 43))  COMMA_SOURCE_FILE ("enumeration.galgas", 43)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_enum_5F_declaration_i4_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("enumeration.galgas", 32)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("enumeration.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("enumeration.galgas", 34)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("enumeration.galgas", 37)) ;
    switch (select_easyBindings_5F_syntax_2 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("enumeration.galgas", 40)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("enumeration.galgas", 42)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_entity_5F_declaration_i5_ (const GALGAS_bool constinArgument_inIsUserDefined,
                                                                                            GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                            C_Lexique_easyBindings_5F_lexique * inCompiler) {
  GALGAS_bool var_isAbstract_1723 ;
  switch (select_easyBindings_5F_syntax_3 (inCompiler)) {
  case 1: {
    var_isAbstract_1723 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_abstract COMMA_SOURCE_FILE ("entity.galgas", 45)) ;
    var_isAbstract_1723 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_bool var_graphicEntity_1839 ;
  switch (select_easyBindings_5F_syntax_4 (inCompiler)) {
  case 1: {
    var_graphicEntity_1839 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_graphic COMMA_SOURCE_FILE ("entity.galgas", 52)) ;
    var_graphicEntity_1839 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_entity COMMA_SOURCE_FILE ("entity.galgas", 55)) ;
  GALGAS_lstring var_entityName_1991 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.galgas", 56)) ;
  GALGAS_lstringlist var_obsoleteEntityNames_2028 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("entity.galgas", 57)) ;
  switch (select_easyBindings_5F_syntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("entity.galgas", 60)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_obsoleteName_2122 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.galgas", 62)) ;
      var_obsoleteEntityNames_2028.addAssign_operation (var_obsoleteName_2122  COMMA_SOURCE_FILE ("entity.galgas", 63)) ;
      switch (select_easyBindings_5F_syntax_6 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("entity.galgas", 65)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("entity.galgas", 67)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_superEntityName_2248 ;
  switch (select_easyBindings_5F_syntax_7 (inCompiler)) {
  case 1: {
    var_superEntityName_2248 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("entity.galgas", 71)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("entity.galgas", 73)) ;
    var_superEntityName_2248 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.galgas", 74)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("entity.galgas", 76)) ;
  GALGAS_simpleStoredPropertyList var_simpleStoredAttributeList_2422 = GALGAS_simpleStoredPropertyList::constructor_emptyList (SOURCE_FILE ("entity.galgas", 77)) ;
  GALGAS_stringset var_signatureList_2456 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("entity.galgas", 78)) ;
  GALGAS_lstringlist var_actionDeclarationList_2500 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("entity.galgas", 79)) ;
  GALGAS_externSwiftDelegateList var_externSwiftDelegateList_2558 = GALGAS_externSwiftDelegateList::constructor_emptyList (SOURCE_FILE ("entity.galgas", 80)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_easyBindings_5F_syntax_8 (inCompiler)) {
    case 2: {
      nt_simple_5F_stored_5F_declaration_ (var_entityName_1991, var_simpleStoredAttributeList_2422, var_signatureList_2456, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 3: {
      nt_transient_5F_declaration_ (var_entityName_1991, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("entity.galgas", 85)), ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 4: {
      nt_toMany_5F_relationship_ (var_entityName_1991, var_signatureList_2456, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 5: {
      nt_toOne_5F_relationship_ (var_entityName_1991, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 6: {
      nt_action_5F_declaration_ (var_actionDeclarationList_2500, inCompiler) ;
    } break ;
    case 7: {
      nt_controller_5F_declaration_ (var_entityName_1991, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("entity.galgas", 93)), ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 8: {
      nt_extern_5F_swift_5F_delegate_ (var_externSwiftDelegateList_2558, inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("entity.galgas", 97)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_entityDeclarationAST::constructor_new (var_entityName_1991, var_isAbstract_1723, constinArgument_inIsUserDefined, var_superEntityName_2248, var_simpleStoredAttributeList_2422, var_signatureList_2456, var_actionDeclarationList_2500, var_obsoleteEntityNames_2028, var_graphicEntity_1839, var_externSwiftDelegateList_2558  COMMA_SOURCE_FILE ("entity.galgas", 98))  COMMA_SOURCE_FILE ("entity.galgas", 98)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    GALGAS_bool test_3 = var_isAbstract_1723 ;
    if (kBoolTrue == test_3.boolEnum ()) {
      test_3 = var_graphicEntity_1839 ;
    }
    test_2 = test_3.boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_transientDeclarationAST::constructor_new (var_entityName_1991, GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("entity.galgas", 113)), GALGAS_string ("EBShape").getter_here (inCompiler COMMA_SOURCE_FILE ("entity.galgas", 114)), GALGAS_string ("selectionDisplay").getter_here (inCompiler COMMA_SOURCE_FILE ("entity.galgas", 115)), GALGAS_observablePropertyList::constructor_emptyList (SOURCE_FILE ("entity.galgas", 116)), GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("entity.galgas", 117))  COMMA_SOURCE_FILE ("entity.galgas", 111))  COMMA_SOURCE_FILE ("entity.galgas", 111)) ;
      ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_transientDeclarationAST::constructor_new (var_entityName_1991, GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("entity.galgas", 121)), GALGAS_string ("EBShape").getter_here (inCompiler COMMA_SOURCE_FILE ("entity.galgas", 122)), GALGAS_string ("objectDisplay").getter_here (inCompiler COMMA_SOURCE_FILE ("entity.galgas", 123)), GALGAS_observablePropertyList::constructor_emptyList (SOURCE_FILE ("entity.galgas", 124)), GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("entity.galgas", 125))  COMMA_SOURCE_FILE ("entity.galgas", 119))  COMMA_SOURCE_FILE ("entity.galgas", 119)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_entity_5F_declaration_i5_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_abstract COMMA_SOURCE_FILE ("entity.galgas", 45)) ;
  } break ;
  default:
    break ;
  }
  switch (select_easyBindings_5F_syntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_graphic COMMA_SOURCE_FILE ("entity.galgas", 52)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_entity COMMA_SOURCE_FILE ("entity.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.galgas", 56)) ;
  switch (select_easyBindings_5F_syntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("entity.galgas", 60)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.galgas", 62)) ;
      switch (select_easyBindings_5F_syntax_6 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("entity.galgas", 65)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("entity.galgas", 67)) ;
  } break ;
  default:
    break ;
  }
  switch (select_easyBindings_5F_syntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("entity.galgas", 73)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.galgas", 74)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("entity.galgas", 76)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_easyBindings_5F_syntax_8 (inCompiler)) {
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
    case 7: {
      nt_controller_5F_declaration_parse (inCompiler) ;
    } break ;
    case 8: {
      nt_extern_5F_swift_5F_delegate_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("entity.galgas", 97)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_document_5F_declaration_i6_ (const GALGAS_bool /* constinArgument_inIsUserDefined */,
                                                                                              GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                              C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_document COMMA_SOURCE_FILE ("document.galgas", 36)) ;
  GALGAS_lstring var_documentName_1542 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document.galgas", 37)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("document.galgas", 38)) ;
  GALGAS_lstring var_rootEntityName_1599 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("document.galgas", 40)) ;
  GALGAS_outletDeclarationList var_outletDeclarationList_1656 = GALGAS_outletDeclarationList::constructor_emptyList (SOURCE_FILE ("document.galgas", 41)) ;
  GALGAS_regularBindingList var_bindingList_1697 = GALGAS_regularBindingList::constructor_emptyList (SOURCE_FILE ("document.galgas", 42)) ;
  GALGAS_lstringlist var_actionDeclarationList_1741 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("document.galgas", 43)) ;
  GALGAS_stringset var_signatureList_1775 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("document.galgas", 44)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_9 (inCompiler)) {
    case 2: {
      nt_action_5F_declaration_ (var_actionDeclarationList_1741, inCompiler) ;
    } break ;
    case 3: {
      nt_transient_5F_declaration_ (var_documentName_1542, var_rootEntityName_1599, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 4: {
      nt_outlet_5F_declaration_ (var_outletDeclarationList_1656, inCompiler) ;
    } break ;
    case 5: {
      nt_controller_5F_declaration_ (var_documentName_1542, var_rootEntityName_1599, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("document.galgas", 55)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_documentDeclarationAST::constructor_new (var_documentName_1542, var_rootEntityName_1599, var_outletDeclarationList_1656, var_actionDeclarationList_1741  COMMA_SOURCE_FILE ("document.galgas", 56))  COMMA_SOURCE_FILE ("document.galgas", 56)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_transientDeclarationAST::constructor_new (var_documentName_1542, var_rootEntityName_1599, GALGAS_string ("String").getter_here (inCompiler COMMA_SOURCE_FILE ("document.galgas", 65)), GALGAS_string ("documentFilePath").getter_here (inCompiler COMMA_SOURCE_FILE ("document.galgas", 66)), GALGAS_observablePropertyList::constructor_emptyList (SOURCE_FILE ("document.galgas", 67)), GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("document.galgas", 68))  COMMA_SOURCE_FILE ("document.galgas", 62))  COMMA_SOURCE_FILE ("document.galgas", 62)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_document_5F_declaration_i6_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_document COMMA_SOURCE_FILE ("document.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document.galgas", 37)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("document.galgas", 38)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("document.galgas", 40)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_9 (inCompiler)) {
    case 2: {
      nt_action_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_transient_5F_declaration_parse (inCompiler) ;
    } break ;
    case 4: {
      nt_outlet_5F_declaration_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_controller_5F_declaration_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("document.galgas", 55)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_preferences_5F_declaration_i7_ (const GALGAS_bool /* constinArgument_inIsUserDefined */,
                                                                                                 GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                 C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("preferences.galgas", 50)) ;
  GALGAS_lstring var_prefs_1997 = GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 51)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("preferences.galgas", 51))  COMMA_SOURCE_FILE ("preferences.galgas", 51)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("preferences.galgas", 52)) ;
  GALGAS_stringset var_signatureList_2078 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("preferences.galgas", 53)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_10 (inCompiler)) {
    case 2: {
      nt_action_5F_declaration_ (ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mActionDeclarationList, inCompiler) ;
    } break ;
    case 3: {
      GALGAS_simpleStoredPropertyList var_simpleStoredPropertyList_2253 = GALGAS_simpleStoredPropertyList::constructor_emptyList (SOURCE_FILE ("preferences.galgas", 58)) ;
      nt_simple_5F_stored_5F_declaration_ (var_prefs_1997, var_simpleStoredPropertyList_2253, var_signatureList_2078, ioArgument_ioDeclarationAST, inCompiler) ;
      ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mSimpleStoredAttributeList.plusAssign_operation(var_simpleStoredPropertyList_2253, inCompiler  COMMA_SOURCE_FILE ("preferences.galgas", 64)) ;
    } break ;
    case 4: {
      nt_outlet_5F_declaration_ (ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mOutletDeclarationList, inCompiler) ;
    } break ;
    case 5: {
      nt_transient_5F_declaration_ (var_prefs_1997, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("preferences.galgas", 68)), ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 6: {
      nt_extern_5F_swift_5F_func_ (ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mExternSwiftFunctionList, inCompiler) ;
    } break ;
    case 7: {
      GALGAS_stringset joker_2797 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("preferences.galgas", 72)) ;
      nt_toMany_5F_relationship_ (var_prefs_1997, joker_2797, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 8: {
      nt_controller_5F_declaration_ (var_prefs_1997, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("preferences.galgas", 74)), ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mSignatureList.plusAssign_operation(var_signatureList_2078, inCompiler  COMMA_SOURCE_FILE ("preferences.galgas", 76)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("preferences.galgas", 77)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_preferences_5F_declaration_i7_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("preferences.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("preferences.galgas", 52)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_10 (inCompiler)) {
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
      nt_toMany_5F_relationship_parse (inCompiler) ;
    } break ;
    case 8: {
      nt_controller_5F_declaration_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("preferences.galgas", 77)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i8_ (const GALGAS_bool constinArgument_inIsUserDefined,
                                                                                                     GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                     C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_extern COMMA_SOURCE_FILE ("outlet-class.galgas", 42)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_outlet COMMA_SOURCE_FILE ("outlet-class.galgas", 43)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("outlet-class.galgas", 44)) ;
  GALGAS_lstring var_outletClassName_1699 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-class.galgas", 45)) ;
  GALGAS_lstring var_superClassName_1727 ;
  switch (select_easyBindings_5F_syntax_11 (inCompiler)) {
  case 1: {
    var_superClassName_1727 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas", 48)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("outlet-class.galgas", 50)) ;
    var_superClassName_1727 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-class.galgas", 51)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_bool var_hasRunAction_1854 = GALGAS_bool (false) ;
  GALGAS_bool var_hasEnabled_1883 = GALGAS_bool (false) ;
  GALGAS_bool var_hasHidden_1911 = GALGAS_bool (false) ;
  GALGAS_bool var_handlesTableViewBinding_1953 = GALGAS_bool (false) ;
  GALGAS_bool var_handlesGraphicControllerBinding_2003 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_12 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_tableValue COMMA_SOURCE_FILE ("outlet-class.galgas", 60)) ;
      var_handlesTableViewBinding_1953 = GALGAS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("outlet-class.galgas", 63)) ;
      var_hasRunAction_1854 = GALGAS_bool (true) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("outlet-class.galgas", 66)) ;
      var_hasEnabled_1883 = GALGAS_bool (true) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("outlet-class.galgas", 69)) ;
      var_hasHidden_1911 = GALGAS_bool (true) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_graphicController COMMA_SOURCE_FILE ("outlet-class.galgas", 72)) ;
      var_handlesGraphicControllerBinding_2003 = GALGAS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("outlet-class.galgas", 75)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_outletClassDeclarationAST::constructor_new (var_outletClassName_1699, constinArgument_inIsUserDefined, var_superClassName_1727, var_hasRunAction_1854, var_hasEnabled_1883, var_handlesTableViewBinding_1953, var_handlesGraphicControllerBinding_2003, var_hasHidden_1911  COMMA_SOURCE_FILE ("outlet-class.galgas", 76))  COMMA_SOURCE_FILE ("outlet-class.galgas", 76)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i8_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_extern COMMA_SOURCE_FILE ("outlet-class.galgas", 42)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_outlet COMMA_SOURCE_FILE ("outlet-class.galgas", 43)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("outlet-class.galgas", 44)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-class.galgas", 45)) ;
  switch (select_easyBindings_5F_syntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("outlet-class.galgas", 50)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-class.galgas", 51)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_12 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_tableValue COMMA_SOURCE_FILE ("outlet-class.galgas", 60)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("outlet-class.galgas", 63)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("outlet-class.galgas", 66)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("outlet-class.galgas", 69)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_graphicController COMMA_SOURCE_FILE ("outlet-class.galgas", 72)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("outlet-class.galgas", 75)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_binding_5F_specification_i9_ (const GALGAS_bool constinArgument_inIsUserDefined,
                                                                                               GALGAS_outletClassBindingSpecificationList & ioArgument_ioControllerTemplateList,
                                                                                               C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_binding COMMA_SOURCE_FILE ("binding-specification.galgas", 40)) ;
  GALGAS_lstring var_outletClassName_1571 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("binding-specification.galgas", 41)) ;
  GALGAS_lstring var_bindingName_1615 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("binding-specification.galgas", 42)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("binding-specification.galgas", 43)) ;
  GALGAS_outletClassBindingSpecificationModelList var_outletClassBindingSpecificationModelList_1710 = GALGAS_outletClassBindingSpecificationModelList::constructor_emptyList (SOURCE_FILE ("binding-specification.galgas", 44)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_bool var_modelShouldBeWritableProperty_1768 ;
    switch (select_easyBindings_5F_syntax_14 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("binding-specification.galgas", 48)) ;
      var_modelShouldBeWritableProperty_1768 = GALGAS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("binding-specification.galgas", 51)) ;
      var_modelShouldBeWritableProperty_1768 = GALGAS_bool (false) ;
    } break ;
    default:
      break ;
    }
    GALGAS_lstring var_modelTypeName_1959 ;
    switch (select_easyBindings_5F_syntax_15 (inCompiler)) {
    case 1: {
      var_modelTypeName_1959 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("binding-specification.galgas", 56)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("binding-specification.galgas", 58)) ;
      var_modelTypeName_1959 = GALGAS_lstring::constructor_new (GALGAS_string ("enum"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("binding-specification.galgas", 59))  COMMA_SOURCE_FILE ("binding-specification.galgas", 59)) ;
    } break ;
    default:
      break ;
    }
    var_outletClassBindingSpecificationModelList_1710.addAssign_operation (var_modelTypeName_1959, var_modelShouldBeWritableProperty_1768  COMMA_SOURCE_FILE ("binding-specification.galgas", 61)) ;
    switch (select_easyBindings_5F_syntax_13 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("binding-specification.galgas", 63)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_controllerBindingOptionList var_bindingOptionList_2263 = GALGAS_controllerBindingOptionList::constructor_emptyList (SOURCE_FILE ("binding-specification.galgas", 65)) ;
  switch (select_easyBindings_5F_syntax_16 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("binding-specification.galgas", 68)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GALGAS_lstring var_optionName_2355 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("binding-specification.galgas", 70)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("binding-specification.galgas", 71)) ;
      GALGAS_lstring var_optionType_2413 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("binding-specification.galgas", 72)) ;
      var_bindingOptionList_2263.addAssign_operation (var_optionName_2355, var_optionType_2413  COMMA_SOURCE_FILE ("binding-specification.galgas", 73)) ;
      switch (select_easyBindings_5F_syntax_17 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("binding-specification.galgas", 75)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("binding-specification.galgas", 77)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("binding-specification.galgas", 79)) ;
  ioArgument_ioControllerTemplateList.addAssign_operation (var_outletClassName_1571, constinArgument_inIsUserDefined, var_bindingName_1615, var_outletClassBindingSpecificationModelList_1710, var_bindingOptionList_2263  COMMA_SOURCE_FILE ("binding-specification.galgas", 80)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_binding_5F_specification_i9_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_binding COMMA_SOURCE_FILE ("binding-specification.galgas", 40)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("binding-specification.galgas", 41)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("binding-specification.galgas", 42)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("binding-specification.galgas", 43)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_14 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("binding-specification.galgas", 48)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("binding-specification.galgas", 51)) ;
    } break ;
    default:
      break ;
    }
    switch (select_easyBindings_5F_syntax_15 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("binding-specification.galgas", 56)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("binding-specification.galgas", 58)) ;
    } break ;
    default:
      break ;
    }
    switch (select_easyBindings_5F_syntax_13 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("binding-specification.galgas", 63)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_easyBindings_5F_syntax_16 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("binding-specification.galgas", 68)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("binding-specification.galgas", 70)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("binding-specification.galgas", 71)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("binding-specification.galgas", 72)) ;
      switch (select_easyBindings_5F_syntax_17 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("binding-specification.galgas", 75)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("binding-specification.galgas", 77)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("binding-specification.galgas", 79)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_declaration_i10_ (GALGAS_outletDeclarationList & ioArgument_ioOutletDeclarationList,
                                                                                             C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_outlet COMMA_SOURCE_FILE ("outlet-declaration.galgas", 46)) ;
  GALGAS_lstring var_outletTypeName_1821 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas", 47)) ;
  GALGAS_lstring var_outletName_1854 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas", 48)) ;
  GALGAS_tableValueBinding var_tableValueBinding_1880 = GALGAS_tableValueBinding::constructor_noTableValueBinding (SOURCE_FILE ("outlet-declaration.galgas", 49)) ;
  GALGAS_runActionDescriptor var_runActionDescriptor_1950 = GALGAS_runActionDescriptor::constructor_noAction (SOURCE_FILE ("outlet-declaration.galgas", 50)) ;
  GALGAS_multipleBindingDescriptor var_enabledBindingDescriptor_2016 = GALGAS_multipleBindingDescriptor::constructor_noBinding (SOURCE_FILE ("outlet-declaration.galgas", 51)) ;
  GALGAS_multipleBindingDescriptor var_hiddenBindingDescriptor_2087 = GALGAS_multipleBindingDescriptor::constructor_noBinding (SOURCE_FILE ("outlet-declaration.galgas", 52)) ;
  GALGAS_graphicController var_graphicController_2152 = GALGAS_graphicController::constructor_none (SOURCE_FILE ("outlet-declaration.galgas", 53)) ;
  GALGAS_regularBindingList var_regularBindingList_2221 = GALGAS_regularBindingList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 54)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_18 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_tableValue COMMA_SOURCE_FILE ("outlet-declaration.galgas", 57)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsNotEqual, var_tableValueBinding_1880.objectCompare (GALGAS_tableValueBinding::constructor_noTableValueBinding (SOURCE_FILE ("outlet-declaration.galgas", 58)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 59)), GALGAS_string ("duplicated $tableValue binding"), fixItArray2  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 59)) ;
        }
      }
      GALGAS_lstring var_controllerName_2435 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas", 61)) ;
      var_tableValueBinding_1880 = GALGAS_tableValueBinding::constructor_tableValueBinding (var_controllerName_2435  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 62)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("outlet-declaration.galgas", 64)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsNotEqual, var_runActionDescriptor_1950.objectCompare (GALGAS_runActionDescriptor::constructor_noAction (SOURCE_FILE ("outlet-declaration.galgas", 65)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 66)), GALGAS_string ("duplicated $run binding"), fixItArray4  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 66)) ;
        }
      }
      GALGAS_lstring var_runTargetName_2669 ;
      switch (select_easyBindings_5F_syntax_19 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("outlet-declaration.galgas", 70)) ;
        var_runTargetName_2669 = GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 71))  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 71)) ;
      } break ;
      case 2: {
        var_runTargetName_2669 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas", 73)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("outlet-declaration.galgas", 75)) ;
      GALGAS_lstring var_runActionName_2863 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas", 76)) ;
      var_runActionDescriptor_1950 = GALGAS_runActionDescriptor::constructor_action (var_runTargetName_2669, var_runActionName_2863  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 77)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("outlet-declaration.galgas", 80)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (kIsNotEqual, var_enabledBindingDescriptor_2016.objectCompare (GALGAS_multipleBindingDescriptor::constructor_noBinding (SOURCE_FILE ("outlet-declaration.galgas", 81)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 82)), GALGAS_string ("duplicated $enabled binding"), fixItArray6  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 82)) ;
        }
      }
      GALGAS_abstractBooleanMultipleBindingExpressionAST var_bindingExpression_3210 ;
      nt_booleanMultipleBindingExpression_ (var_bindingExpression_3210, inCompiler) ;
      var_enabledBindingDescriptor_2016 = GALGAS_multipleBindingDescriptor::constructor_binding (var_bindingExpression_3210  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 85)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("outlet-declaration.galgas", 88)) ;
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = GALGAS_bool (kIsNotEqual, var_hiddenBindingDescriptor_2087.objectCompare (GALGAS_multipleBindingDescriptor::constructor_noBinding (SOURCE_FILE ("outlet-declaration.galgas", 89)))).boolEnum () ;
        if (kBoolTrue == test_7) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 90)), GALGAS_string ("duplicated $hidden binding"), fixItArray8  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 90)) ;
        }
      }
      GALGAS_abstractBooleanMultipleBindingExpressionAST var_bindingExpression_3545 ;
      nt_booleanMultipleBindingExpression_ (var_bindingExpression_3545, inCompiler) ;
      var_hiddenBindingDescriptor_2087 = GALGAS_multipleBindingDescriptor::constructor_binding (var_bindingExpression_3545  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 93)) ;
    } break ;
    case 6: {
      GALGAS_lstring var_bindingName_3697 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("outlet-declaration.galgas", 96)) ;
      GALGAS_observablePropertyList var_observablePropertyList_3750 = GALGAS_observablePropertyList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.galgas", 97)) ;
      bool repeatFlag_9 = true ;
      while (repeatFlag_9) {
        GALGAS_observablePropertyAST var_observableProperty_3845 ;
        nt_observable_5F_property_ (var_observableProperty_3845, inCompiler) ;
        var_observablePropertyList_3750.addAssign_operation (var_observableProperty_3845  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 100)) ;
        switch (select_easyBindings_5F_syntax_20 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("outlet-declaration.galgas", 102)) ;
        } break ;
        default:
          repeatFlag_9 = false ;
          break ;
        }
      }
      GALGAS_bindingOptionList var_bindingOptions_3981 ;
      nt_binding_5F_option_5F_list_ (var_bindingOptions_3981, inCompiler) ;
      var_regularBindingList_2221.addAssign_operation (var_bindingName_3697, var_observablePropertyList_3750, var_bindingOptions_3981  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 105)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_graphicController COMMA_SOURCE_FILE ("outlet-declaration.galgas", 111)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("outlet-declaration.galgas", 112)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("outlet-declaration.galgas", 113)) ;
      GALGAS_lstring var_graphicControllerName_4234 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas", 114)) ;
      GALGAS_lstring var_propertyName_4262 ;
      switch (select_easyBindings_5F_syntax_21 (inCompiler)) {
      case 1: {
        var_propertyName_4262 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 117)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("outlet-declaration.galgas", 119)) ;
        var_propertyName_4262 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas", 120)) ;
      } break ;
      default:
        break ;
      }
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = var_graphicController_2152.getter_isNone (SOURCE_FILE ("outlet-declaration.galgas", 122)).boolEnum () ;
        if (kBoolTrue == test_10) {
          var_graphicController_2152 = GALGAS_graphicController::constructor_defined (var_graphicControllerName_4234, var_propertyName_4262  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 123)) ;
        }
      }
      if (kBoolFalse == test_10) {
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (var_graphicControllerName_4234.getter_location (SOURCE_FILE ("outlet-declaration.galgas", 125)), GALGAS_string ("binding already defined"), fixItArray11  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 125)) ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("outlet-declaration.galgas", 129)) ;
  ioArgument_ioOutletDeclarationList.addAssign_operation (var_outletTypeName_1821, var_outletName_1854, var_tableValueBinding_1880, var_runActionDescriptor_1950, var_enabledBindingDescriptor_2016, var_hiddenBindingDescriptor_2087, var_regularBindingList_2221, var_graphicController_2152  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 130)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_declaration_i10_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_outlet COMMA_SOURCE_FILE ("outlet-declaration.galgas", 46)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas", 47)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas", 48)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_18 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_tableValue COMMA_SOURCE_FILE ("outlet-declaration.galgas", 57)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas", 61)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("outlet-declaration.galgas", 64)) ;
      switch (select_easyBindings_5F_syntax_19 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("outlet-declaration.galgas", 70)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas", 73)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("outlet-declaration.galgas", 75)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas", 76)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("outlet-declaration.galgas", 80)) ;
      nt_booleanMultipleBindingExpression_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("outlet-declaration.galgas", 88)) ;
      nt_booleanMultipleBindingExpression_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("outlet-declaration.galgas", 96)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        nt_observable_5F_property_parse (inCompiler) ;
        switch (select_easyBindings_5F_syntax_20 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("outlet-declaration.galgas", 102)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      nt_binding_5F_option_5F_list_parse (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_graphicController COMMA_SOURCE_FILE ("outlet-declaration.galgas", 111)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("outlet-declaration.galgas", 112)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("outlet-declaration.galgas", 113)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas", 114)) ;
      switch (select_easyBindings_5F_syntax_21 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("outlet-declaration.galgas", 119)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas", 120)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("outlet-declaration.galgas", 129)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_observable_5F_property_i11_ (GALGAS_observablePropertyAST & outArgument_outObservablePropertyAST,
                                                                                              C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outObservablePropertyAST.drop () ; // Release 'out' argument
  switch (select_easyBindings_5F_syntax_22 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("observable-property.galgas", 40)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 41)) ;
    GALGAS_lstring var_propertyName_1974 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 42)) ;
    switch (select_easyBindings_5F_syntax_23 (inCompiler)) {
    case 1: {
      outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_rootProperty (var_propertyName_1974  COMMA_SOURCE_FILE ("observable-property.galgas", 44)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 46)) ;
      switch (select_easyBindings_5F_syntax_24 (inCompiler)) {
      case 1: {
        GALGAS_lstring var_optionName_2140 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 48)) ;
        outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_rootPropertyWithOption (var_propertyName_1974, var_optionName_2140  COMMA_SOURCE_FILE ("observable-property.galgas", 49)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.galgas", 51)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 52)) ;
        GALGAS_lstring var_observablePropertyName_2345 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 53)) ;
        outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_rootPropertyRelationship (var_propertyName_1974, var_observablePropertyName_2345  COMMA_SOURCE_FILE ("observable-property.galgas", 54)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_none COMMA_SOURCE_FILE ("observable-property.galgas", 58)) ;
        outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_rootPropertyNone (var_propertyName_1974  COMMA_SOURCE_FILE ("observable-property.galgas", 59)) ;
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
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("observable-property.galgas", 63)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 64)) ;
    GALGAS_lstring var_propertyName_2707 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 65)) ;
    switch (select_easyBindings_5F_syntax_25 (inCompiler)) {
    case 1: {
      outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_selfProperty (var_propertyName_2707  COMMA_SOURCE_FILE ("observable-property.galgas", 67)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 69)) ;
      switch (select_easyBindings_5F_syntax_26 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.galgas", 71)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 72)) ;
        GALGAS_lstring var_elementPropertyName_2914 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 73)) ;
        outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_selfPropertyArray (var_propertyName_2707, var_elementPropertyName_2914  COMMA_SOURCE_FILE ("observable-property.galgas", 74)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_one COMMA_SOURCE_FILE ("observable-property.galgas", 76)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 77)) ;
        GALGAS_lstring var_elementPropertyName_3129 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 78)) ;
        outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_selfPropertyObject (var_propertyName_2707, var_elementPropertyName_3129  COMMA_SOURCE_FILE ("observable-property.galgas", 79)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_none COMMA_SOURCE_FILE ("observable-property.galgas", 81)) ;
        outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_selfPropertyNone (var_propertyName_2707  COMMA_SOURCE_FILE ("observable-property.galgas", 82)) ;
      } break ;
      case 4: {
        GALGAS_lstring var_optionName_3418 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 84)) ;
        outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_selfPropertyWithOption (var_propertyName_2707, var_optionName_3418  COMMA_SOURCE_FILE ("observable-property.galgas", 85)) ;
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
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("observable-property.galgas", 89)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 90)) ;
    GALGAS_lstring var_propertyName_3621 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 91)) ;
    switch (select_easyBindings_5F_syntax_27 (inCompiler)) {
    case 1: {
      outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_prefsProperty (var_propertyName_3621  COMMA_SOURCE_FILE ("observable-property.galgas", 93)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 95)) ;
      GALGAS_lstring var_optionName_3773 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 96)) ;
      outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_prefsPropertyWithOption (var_propertyName_3621, var_optionName_3773  COMMA_SOURCE_FILE ("observable-property.galgas", 97)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    GALGAS_lstring var_controllerName_3941 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 100)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 101)) ;
    GALGAS_lstring var_propertyName_3988 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 102)) ;
    switch (select_easyBindings_5F_syntax_28 (inCompiler)) {
    case 1: {
      outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_selfControllerProperty (var_controllerName_3941, var_propertyName_3988  COMMA_SOURCE_FILE ("observable-property.galgas", 104)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 106)) ;
      GALGAS_lstring var_secondaryPropertyName_4189 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 107)) ;
      outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_selfControllerSecondaryProperty (var_controllerName_3941, var_propertyName_3988, var_secondaryPropertyName_4189  COMMA_SOURCE_FILE ("observable-property.galgas", 108)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_signature COMMA_SOURCE_FILE ("observable-property.galgas", 115)) ;
    outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_signatureProperty (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("observable-property.galgas", 116))  COMMA_SOURCE_FILE ("observable-property.galgas", 116)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_version COMMA_SOURCE_FILE ("observable-property.galgas", 118)) ;
    outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_versionProperty (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("observable-property.galgas", 119))  COMMA_SOURCE_FILE ("observable-property.galgas", 119)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange COMMA_SOURCE_FILE ("observable-property.galgas", 121)) ;
    outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_versionShouldChangeProperty (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("observable-property.galgas", 122))  COMMA_SOURCE_FILE ("observable-property.galgas", 122)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_observable_5F_property_i11_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_22 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("observable-property.galgas", 40)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 41)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 42)) ;
    switch (select_easyBindings_5F_syntax_23 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 46)) ;
      switch (select_easyBindings_5F_syntax_24 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 48)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.galgas", 51)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 52)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 53)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_none COMMA_SOURCE_FILE ("observable-property.galgas", 58)) ;
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
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("observable-property.galgas", 63)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 64)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 65)) ;
    switch (select_easyBindings_5F_syntax_25 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 69)) ;
      switch (select_easyBindings_5F_syntax_26 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.galgas", 71)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 72)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 73)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_one COMMA_SOURCE_FILE ("observable-property.galgas", 76)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 77)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 78)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_none COMMA_SOURCE_FILE ("observable-property.galgas", 81)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 84)) ;
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
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("observable-property.galgas", 89)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 90)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 91)) ;
    switch (select_easyBindings_5F_syntax_27 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 95)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 96)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 100)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 101)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 102)) ;
    switch (select_easyBindings_5F_syntax_28 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas", 106)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas", 107)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_signature COMMA_SOURCE_FILE ("observable-property.galgas", 115)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_version COMMA_SOURCE_FILE ("observable-property.galgas", 118)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange COMMA_SOURCE_FILE ("observable-property.galgas", 121)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_transient_5F_declaration_i12_ (const GALGAS_lstring constinArgument_inCurrentEntity,
                                                                                                const GALGAS_lstring constinArgument_inRootEntity,
                                                                                                GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_abstract COMMA_SOURCE_FILE ("transient-property.galgas", 82)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property.galgas", 83)) ;
  GALGAS_lstring var_transientTypeName_4425 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property.galgas", 84)) ;
  GALGAS_lstring var_transientName_4470 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("transient-property.galgas", 85)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property.galgas", 86)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_transientDeclarationAST::constructor_new (constinArgument_inCurrentEntity, constinArgument_inRootEntity, var_transientTypeName_4425, var_transientName_4470, GALGAS_observablePropertyList::constructor_emptyList (SOURCE_FILE ("transient-property.galgas", 92)), GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 93))  COMMA_SOURCE_FILE ("transient-property.galgas", 87))  COMMA_SOURCE_FILE ("transient-property.galgas", 87)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_transient_5F_declaration_i12_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_abstract COMMA_SOURCE_FILE ("transient-property.galgas", 82)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property.galgas", 83)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property.galgas", 84)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("transient-property.galgas", 85)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property.galgas", 86)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_transient_5F_declaration_i13_ (const GALGAS_lstring constinArgument_inCurrentEntity,
                                                                                                const GALGAS_lstring constinArgument_inRootEntity,
                                                                                                GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property.galgas", 104)) ;
  GALGAS_lstring var_transientTypeName_5034 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property.galgas", 105)) ;
  GALGAS_lstring var_transientName_5079 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("transient-property.galgas", 106)) ;
  GALGAS_lstring var_externFunctionName_5111 ;
  switch (select_easyBindings_5F_syntax_29 (inCompiler)) {
  case 1: {
    var_externFunctionName_5111 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 109)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_externFunc COMMA_SOURCE_FILE ("transient-property.galgas", 111)) ;
    var_externFunctionName_5111 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("transient-property.galgas", 112)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_dependsFrom COMMA_SOURCE_FILE ("transient-property.galgas", 114)) ;
  GALGAS_observablePropertyList var_dependanceList_5313 = GALGAS_observablePropertyList::constructor_emptyList (SOURCE_FILE ("transient-property.galgas", 115)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_observablePropertyAST var_observablePropertyAST_5407 ;
    nt_observable_5F_property_ (var_observablePropertyAST_5407, inCompiler) ;
    var_dependanceList_5313.addAssign_operation (var_observablePropertyAST_5407  COMMA_SOURCE_FILE ("transient-property.galgas", 118)) ;
    switch (select_easyBindings_5F_syntax_30 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("transient-property.galgas", 120)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property.galgas", 122)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_transientDeclarationAST::constructor_new (constinArgument_inCurrentEntity, constinArgument_inRootEntity, var_transientTypeName_5034, var_transientName_5079, var_dependanceList_5313, var_externFunctionName_5111  COMMA_SOURCE_FILE ("transient-property.galgas", 123))  COMMA_SOURCE_FILE ("transient-property.galgas", 123)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_transient_5F_declaration_i13_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property.galgas", 104)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property.galgas", 105)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("transient-property.galgas", 106)) ;
  switch (select_easyBindings_5F_syntax_29 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_externFunc COMMA_SOURCE_FILE ("transient-property.galgas", 111)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("transient-property.galgas", 112)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_dependsFrom COMMA_SOURCE_FILE ("transient-property.galgas", 114)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_observable_5F_property_parse (inCompiler) ;
    switch (select_easyBindings_5F_syntax_30 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("transient-property.galgas", 120)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property.galgas", 122)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i14_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                       GALGAS_simpleStoredPropertyList & ioArgument_ioAttributeList,
                                                                                                       GALGAS_stringset & ioArgument_ioSignatureList,
                                                                                                       GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                       C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("simple-stored-property.galgas", 50)) ;
  GALGAS_bool var_usedForSignature_2095 = GALGAS_bool (false) ;
  GALGAS_bool var_needsValidation_2129 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_31 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attributeName_2196 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("simple-stored-property.galgas", 55)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, var_attributeName_2196.getter_string (HERE).objectCompare (GALGAS_string ("signature"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = var_needsValidation_2129.boolEnum () ;
            if (kBoolTrue == test_2) {
              TC_Array <C_FixItDescription> fixItArray3 ;
              fixItArray3.appendObject (C_FixItDescription (kFixItRemove, "")) ;
              inCompiler->emitSemanticError (var_attributeName_2196.getter_location (SOURCE_FILE ("simple-stored-property.galgas", 58)), GALGAS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 58)) ;
            }
          }
          var_usedForSignature_2095 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_1) {
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (kIsEqual, var_attributeName_2196.getter_string (HERE).objectCompare (GALGAS_string ("validation"))).boolEnum () ;
          if (kBoolTrue == test_4) {
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = var_needsValidation_2129.boolEnum () ;
              if (kBoolTrue == test_5) {
                TC_Array <C_FixItDescription> fixItArray6 ;
                fixItArray6.appendObject (C_FixItDescription (kFixItRemove, "")) ;
                inCompiler->emitSemanticError (var_attributeName_2196.getter_location (SOURCE_FILE ("simple-stored-property.galgas", 63)), GALGAS_string ("duplicated attribute"), fixItArray6  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 63)) ;
              }
            }
            var_needsValidation_2129 = GALGAS_bool (true) ;
          }
        }
        if (kBoolFalse == test_4) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          appendFixItActions (fixItArray7, kFixItReplace, GALGAS_string ("@signature")) ;
          appendFixItActions (fixItArray7, kFixItReplace, GALGAS_string ("@validation")) ;
          inCompiler->emitSemanticError (var_attributeName_2196.getter_location (SOURCE_FILE ("simple-stored-property.galgas", 67)), GALGAS_string ("unknow attribute"), fixItArray7  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 67)) ;
        }
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_attributeTypeName_2775 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("simple-stored-property.galgas", 70)) ;
  GALGAS_lstring var_attributeName_2820 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("simple-stored-property.galgas", 71)) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = var_usedForSignature_2095.boolEnum () ;
    if (kBoolTrue == test_8) {
      ioArgument_ioSignatureList.addAssign_operation (var_attributeName_2820.getter_string (HERE)  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 73)) ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_default COMMA_SOURCE_FILE ("simple-stored-property.galgas", 75)) ;
  GALGAS_abstractDefaultValue var_defaultValue_2979 ;
  nt_explicit_5F_value_ (var_defaultValue_2979, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("simple-stored-property.galgas", 77)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_atomicPropertyDeclarationAST::constructor_new (constinArgument_inClassName, var_attributeTypeName_2775, var_attributeName_2820, var_defaultValue_2979, var_needsValidation_2129  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 78))  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 78)) ;
  ioArgument_ioAttributeList.addAssign_operation (var_attributeTypeName_2775, var_attributeName_2820, var_defaultValue_2979, var_needsValidation_2129  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 86)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i14_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("simple-stored-property.galgas", 50)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_31 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("simple-stored-property.galgas", 55)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("simple-stored-property.galgas", 70)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("simple-stored-property.galgas", 71)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_default COMMA_SOURCE_FILE ("simple-stored-property.galgas", 75)) ;
  nt_explicit_5F_value_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("simple-stored-property.galgas", 77)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_toOne_5F_relationship_i15_ (const GALGAS_lstring constinArgument_inCurrentEntity,
                                                                                             GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                             C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("to-one-relationship.galgas", 39)) ;
  GALGAS_lstring var_destinationEntityName_1875 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("to-one-relationship.galgas", 40)) ;
  GALGAS_lstring var_relationshipName_1923 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-one-relationship.galgas", 41)) ;
  GALGAS_propertyMultiplicity var_inverseRelationMultiplicity_1977 ;
  GALGAS_lstring var_inverseRelationshipName_2014 ;
  switch (select_easyBindings_5F_syntax_32 (inCompiler)) {
  case 1: {
    var_inverseRelationMultiplicity_1977 = GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("to-one-relationship.galgas", 45)) ;
    var_inverseRelationshipName_2014 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 46)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_inverse COMMA_SOURCE_FILE ("to-one-relationship.galgas", 48)) ;
    switch (select_easyBindings_5F_syntax_33 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("to-one-relationship.galgas", 50)) ;
      var_inverseRelationMultiplicity_1977 = GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("to-one-relationship.galgas", 51)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("to-one-relationship.galgas", 53)) ;
      var_inverseRelationMultiplicity_1977 = GALGAS_propertyMultiplicity::constructor_collection (SOURCE_FILE ("to-one-relationship.galgas", 54)) ;
    } break ;
    default:
      break ;
    }
    var_inverseRelationshipName_2014 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-one-relationship.galgas", 56)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("to-one-relationship.galgas", 58)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_toOneRelationshipAST::constructor_new (constinArgument_inCurrentEntity, var_destinationEntityName_1875, var_relationshipName_1923, var_inverseRelationshipName_2014, var_inverseRelationMultiplicity_1977  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 59))  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 59)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_toOne_5F_relationship_i15_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("to-one-relationship.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("to-one-relationship.galgas", 40)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-one-relationship.galgas", 41)) ;
  switch (select_easyBindings_5F_syntax_32 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_inverse COMMA_SOURCE_FILE ("to-one-relationship.galgas", 48)) ;
    switch (select_easyBindings_5F_syntax_33 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("to-one-relationship.galgas", 50)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("to-one-relationship.galgas", 53)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-one-relationship.galgas", 56)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("to-one-relationship.galgas", 58)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_toMany_5F_relationship_i16_ (const GALGAS_lstring constinArgument_inCurrentEntity,
                                                                                              GALGAS_stringset & ioArgument_ioSignatureList,
                                                                                              GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                              C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("to-many-relationship.galgas", 47)) ;
  GALGAS_bool var_usedForSignature_2074 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_34 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attributeName_2141 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("to-many-relationship.galgas", 51)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, var_attributeName_2141.getter_string (HERE).objectCompare (GALGAS_string ("signature"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = var_usedForSignature_2074.boolEnum () ;
            if (kBoolTrue == test_2) {
              TC_Array <C_FixItDescription> fixItArray3 ;
              fixItArray3.appendObject (C_FixItDescription (kFixItRemove, "")) ;
              inCompiler->emitSemanticError (var_attributeName_2141.getter_location (SOURCE_FILE ("to-many-relationship.galgas", 54)), GALGAS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 54)) ;
            }
          }
          var_usedForSignature_2074 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_1) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        appendFixItActions (fixItArray4, kFixItReplace, GALGAS_string ("@signature")) ;
        inCompiler->emitSemanticError (var_attributeName_2141.getter_location (SOURCE_FILE ("to-many-relationship.galgas", 58)), GALGAS_string ("unknow attribute"), fixItArray4  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 58)) ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_destinationEntityName_2493 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("to-many-relationship.galgas", 61)) ;
  GALGAS_lstring var_relationshipName_2532 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-many-relationship.galgas", 62)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = var_usedForSignature_2074.boolEnum () ;
    if (kBoolTrue == test_5) {
      ioArgument_ioSignatureList.addAssign_operation (var_relationshipName_2532.getter_string (HERE)  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 64)) ;
    }
  }
  GALGAS_toManyRelationshipOptionAST var_toManyRelationshipOption_2677 ;
  switch (select_easyBindings_5F_syntax_35 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_inverse COMMA_SOURCE_FILE ("to-many-relationship.galgas", 68)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("to-many-relationship.galgas", 69)) ;
    GALGAS_lstring var_inserseRelationshipName_2766 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-many-relationship.galgas", 70)) ;
    var_toManyRelationshipOption_2677 = GALGAS_toManyRelationshipOptionAST::constructor_hasOpposite (var_inserseRelationshipName_2766  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 71)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_dependsFrom COMMA_SOURCE_FILE ("to-many-relationship.galgas", 73)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("to-many-relationship.galgas", 74)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("to-many-relationship.galgas", 75)) ;
    GALGAS_lstring var_masterPropertyName_2946 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-many-relationship.galgas", 76)) ;
    var_toManyRelationshipOption_2677 = GALGAS_toManyRelationshipOptionAST::constructor_hasDependance (var_masterPropertyName_2946  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 77)) ;
  } break ;
  case 3: {
    var_toManyRelationshipOption_2677 = GALGAS_toManyRelationshipOptionAST::constructor_none (SOURCE_FILE ("to-many-relationship.galgas", 79)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("to-many-relationship.galgas", 81)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_toManyRelationshipAST::constructor_new (constinArgument_inCurrentEntity, var_destinationEntityName_2493, var_relationshipName_2532, var_toManyRelationshipOption_2677  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 82))  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 82)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_toMany_5F_relationship_i16_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("to-many-relationship.galgas", 47)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_34 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("to-many-relationship.galgas", 51)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("to-many-relationship.galgas", 61)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-many-relationship.galgas", 62)) ;
  switch (select_easyBindings_5F_syntax_35 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_inverse COMMA_SOURCE_FILE ("to-many-relationship.galgas", 68)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("to-many-relationship.galgas", 69)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-many-relationship.galgas", 70)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_dependsFrom COMMA_SOURCE_FILE ("to-many-relationship.galgas", 73)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("to-many-relationship.galgas", 74)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("to-many-relationship.galgas", 75)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-many-relationship.galgas", 76)) ;
  } break ;
  case 3: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("to-many-relationship.galgas", 81)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_action_5F_declaration_i17_ (GALGAS_lstringlist & ioArgument_ioActionDeclarationList,
                                                                                             C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_action COMMA_SOURCE_FILE ("run-action.galgas", 19)) ;
  GALGAS_lstring var_actionName_891 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("run-action.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("run-action.galgas", 21)) ;
  ioArgument_ioActionDeclarationList.addAssign_operation (var_actionName_891  COMMA_SOURCE_FILE ("run-action.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_action_5F_declaration_i17_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_action COMMA_SOURCE_FILE ("run-action.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("run-action.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("run-action.galgas", 21)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i18_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                        C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  nt_booleanMultipleBindingComparison_ (outArgument_outBinding, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_36 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 75)) ;
      GALGAS_abstractBooleanMultipleBindingExpressionAST var_binding_3134 ;
      nt_booleanMultipleBindingComparison_ (var_binding_3134, inCompiler) ;
      outArgument_outBinding = GALGAS_andBooleanMultipleBindingExpressionAST::constructor_new (outArgument_outBinding, var_binding_3134  COMMA_SOURCE_FILE ("multiple-binding.galgas", 77)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i18_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  nt_booleanMultipleBindingComparison_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_36 (inCompiler)) {
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

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i19_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                        C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  nt_booleanMultipleBindingTerm_ (outArgument_outBinding, inCompiler) ;
  switch (select_easyBindings_5F_syntax_37 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 87)) ;
    GALGAS_abstractBooleanMultipleBindingExpressionAST var_rightBinding_3589 ;
    nt_booleanMultipleBindingTerm_ (var_rightBinding_3589, inCompiler) ;
    outArgument_outBinding = GALGAS_comparisonMultipleBindingExpressionAST::constructor_new (outArgument_outBinding, GALGAS_multipleBindingComparisonAST::constructor_greater (SOURCE_FILE ("multiple-binding.galgas", 89)), var_rightBinding_3589  COMMA_SOURCE_FILE ("multiple-binding.galgas", 89)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 91)) ;
    GALGAS_abstractBooleanMultipleBindingExpressionAST var_rightBinding_3761 ;
    nt_booleanMultipleBindingTerm_ (var_rightBinding_3761, inCompiler) ;
    outArgument_outBinding = GALGAS_comparisonMultipleBindingExpressionAST::constructor_new (outArgument_outBinding, GALGAS_multipleBindingComparisonAST::constructor_greaterOrEqual (SOURCE_FILE ("multiple-binding.galgas", 93)), var_rightBinding_3761  COMMA_SOURCE_FILE ("multiple-binding.galgas", 93)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 95)) ;
    GALGAS_abstractBooleanMultipleBindingExpressionAST var_rightBinding_3940 ;
    nt_booleanMultipleBindingTerm_ (var_rightBinding_3940, inCompiler) ;
    outArgument_outBinding = GALGAS_comparisonMultipleBindingExpressionAST::constructor_new (outArgument_outBinding, GALGAS_multipleBindingComparisonAST::constructor_lowerOrEqual (SOURCE_FILE ("multiple-binding.galgas", 97)), var_rightBinding_3940  COMMA_SOURCE_FILE ("multiple-binding.galgas", 97)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 99)) ;
    GALGAS_abstractBooleanMultipleBindingExpressionAST var_rightBinding_4116 ;
    nt_booleanMultipleBindingTerm_ (var_rightBinding_4116, inCompiler) ;
    outArgument_outBinding = GALGAS_comparisonMultipleBindingExpressionAST::constructor_new (outArgument_outBinding, GALGAS_multipleBindingComparisonAST::constructor_lower (SOURCE_FILE ("multiple-binding.galgas", 101)), var_rightBinding_4116  COMMA_SOURCE_FILE ("multiple-binding.galgas", 101)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 103)) ;
    GALGAS_abstractBooleanMultipleBindingExpressionAST var_rightBinding_4286 ;
    nt_booleanMultipleBindingTerm_ (var_rightBinding_4286, inCompiler) ;
    outArgument_outBinding = GALGAS_comparisonMultipleBindingExpressionAST::constructor_new (outArgument_outBinding, GALGAS_multipleBindingComparisonAST::constructor_equal (SOURCE_FILE ("multiple-binding.galgas", 105)), var_rightBinding_4286  COMMA_SOURCE_FILE ("multiple-binding.galgas", 105)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 107)) ;
    GALGAS_abstractBooleanMultipleBindingExpressionAST var_rightBinding_4456 ;
    nt_booleanMultipleBindingTerm_ (var_rightBinding_4456, inCompiler) ;
    outArgument_outBinding = GALGAS_comparisonMultipleBindingExpressionAST::constructor_new (outArgument_outBinding, GALGAS_multipleBindingComparisonAST::constructor_notEqual (SOURCE_FILE ("multiple-binding.galgas", 109)), var_rightBinding_4456  COMMA_SOURCE_FILE ("multiple-binding.galgas", 109)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i19_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  nt_booleanMultipleBindingTerm_parse (inCompiler) ;
  switch (select_easyBindings_5F_syntax_37 (inCompiler)) {
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

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i20_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                  C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  nt_booleanMultipleBindingOperand_ (outArgument_outBinding, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_38 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 121)) ;
      GALGAS_abstractBooleanMultipleBindingExpressionAST var_binding_4974 ;
      nt_booleanMultipleBindingOperand_ (var_binding_4974, inCompiler) ;
      outArgument_outBinding = GALGAS_orBooleanMultipleBindingExpressionAST::constructor_new (outArgument_outBinding, var_binding_4974  COMMA_SOURCE_FILE ("multiple-binding.galgas", 123)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 125)) ;
      GALGAS_abstractBooleanMultipleBindingExpressionAST var_binding_5177 ;
      nt_booleanMultipleBindingOperand_ (var_binding_5177, inCompiler) ;
      outArgument_outBinding = GALGAS_xorBooleanMultipleBindingExpressionAST::constructor_new (outArgument_outBinding, var_binding_5177  COMMA_SOURCE_FILE ("multiple-binding.galgas", 127)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i20_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  nt_booleanMultipleBindingOperand_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_38 (inCompiler)) {
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

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i21_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                     C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  GALGAS_observablePropertyAST var_observablePropertyAST_5585 ;
  nt_observable_5F_property_ (var_observablePropertyAST_5585, inCompiler) ;
  outArgument_outBinding = GALGAS_observablePropertyInMultipleBindingExpressionAST::constructor_new (var_observablePropertyAST_5585  COMMA_SOURCE_FILE ("multiple-binding.galgas", 137)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i21_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  nt_observable_5F_property_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i22_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                     C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 145)) ;
  GALGAS_abstractBooleanMultipleBindingExpressionAST var_binding_6020 ;
  nt_booleanMultipleBindingOperand_ (var_binding_6020, inCompiler) ;
  outArgument_outBinding = GALGAS_negateBooleanMultipleBindingExpressionAST::constructor_new (var_binding_6020  COMMA_SOURCE_FILE ("multiple-binding.galgas", 147)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i22_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 145)) ;
  nt_booleanMultipleBindingOperand_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i23_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                     C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 155)) ;
  nt_booleanMultipleBindingExpression_ (outArgument_outBinding, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 157)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i23_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 155)) ;
  nt_booleanMultipleBindingExpression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("multiple-binding.galgas", 157)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i24_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                     C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  GALGAS_luint var_value_6667 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("multiple-binding.galgas", 165)) ;
  outArgument_outBinding = GALGAS_literalIntMultipleBindingExpressionAST::constructor_new (var_value_6667  COMMA_SOURCE_FILE ("multiple-binding.galgas", 166)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i24_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("multiple-binding.galgas", 165)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i25_ (GALGAS_bindingOptionList & outArgument_outBindingOptions,
                                                                                                 C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBindingOptions.drop () ; // Release 'out' argument
  outArgument_outBindingOptions = GALGAS_bindingOptionList::constructor_emptyList (SOURCE_FILE ("regular-binding.galgas", 20)) ;
  switch (select_easyBindings_5F_syntax_39 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("regular-binding.galgas", 23)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_optionName_997 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("regular-binding.galgas", 25)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("regular-binding.galgas", 26)) ;
      GALGAS_abstractDefaultValue var_optionValue_1073 ;
      nt_explicit_5F_value_ (var_optionValue_1073, inCompiler) ;
      outArgument_outBindingOptions.addAssign_operation (var_optionName_997, var_optionValue_1073  COMMA_SOURCE_FILE ("regular-binding.galgas", 28)) ;
      switch (select_easyBindings_5F_syntax_40 (inCompiler)) {
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

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i25_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_39 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("regular-binding.galgas", 23)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("regular-binding.galgas", 25)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("regular-binding.galgas", 26)) ;
      nt_explicit_5F_value_parse (inCompiler) ;
      switch (select_easyBindings_5F_syntax_40 (inCompiler)) {
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

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i26_ (const GALGAS_lstring constinArgument_inCurrentEntity,
                                                                                                 const GALGAS_lstring constinArgument_inRootEntity,
                                                                                                 GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                 C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_arrayController COMMA_SOURCE_FILE ("array-controller.galgas", 44)) ;
  GALGAS_lstring var_controllerName_2071 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("array-controller.galgas", 45)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("array-controller.galgas", 47)) ;
  GALGAS_bool var_isRoot_2109 ;
  switch (select_easyBindings_5F_syntax_41 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("array-controller.galgas", 50)) ;
    var_isRoot_2109 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("array-controller.galgas", 53)) ;
    var_isRoot_2109 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("array-controller.galgas", 56)) ;
  GALGAS_lstring var_relationshipName_2258 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("array-controller.galgas", 57)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("array-controller.galgas", 58)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_arrayControllerDeclarationAST::constructor_new (constinArgument_inCurrentEntity, var_controllerName_2071, var_isRoot_2109, constinArgument_inRootEntity, var_relationshipName_2258  COMMA_SOURCE_FILE ("array-controller.galgas", 59))  COMMA_SOURCE_FILE ("array-controller.galgas", 59)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i26_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_arrayController COMMA_SOURCE_FILE ("array-controller.galgas", 44)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("array-controller.galgas", 45)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("array-controller.galgas", 47)) ;
  switch (select_easyBindings_5F_syntax_41 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("array-controller.galgas", 50)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("array-controller.galgas", 53)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("array-controller.galgas", 56)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("array-controller.galgas", 57)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("array-controller.galgas", 58)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i27_ (const GALGAS_lstring constinArgument_inCurrentEntity,
                                                                                                 const GALGAS_lstring constinArgument_inRootEntity,
                                                                                                 GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                 C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_tableViewController COMMA_SOURCE_FILE ("table-view-controller.galgas", 72)) ;
  GALGAS_lstring var_controllerName_3182 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("table-view-controller.galgas", 73)) ;
  GALGAS_tableViewControllerAttributListAST var_arrayControllerAttributListAST_3253 = GALGAS_tableViewControllerAttributListAST::constructor_emptyList (SOURCE_FILE ("table-view-controller.galgas", 74)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("table-view-controller.galgas", 75)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_attributeName_3324 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("table-view-controller.galgas", 77)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("table-view-controller.galgas", 78)) ;
    GALGAS_abstractDefaultValue var_attributeValue_3399 ;
    nt_explicit_5F_value_ (var_attributeValue_3399, inCompiler) ;
    var_arrayControllerAttributListAST_3253.addAssign_operation (var_attributeName_3324, var_attributeValue_3399  COMMA_SOURCE_FILE ("table-view-controller.galgas", 80)) ;
    switch (select_easyBindings_5F_syntax_42 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("table-view-controller.galgas", 82)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("table-view-controller.galgas", 84)) ;
  GALGAS_bool var_isRoot_3536 ;
  switch (select_easyBindings_5F_syntax_43 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("table-view-controller.galgas", 88)) ;
    var_isRoot_3536 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("table-view-controller.galgas", 91)) ;
    var_isRoot_3536 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("table-view-controller.galgas", 94)) ;
  GALGAS_lstring var_relationshipName_3685 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("table-view-controller.galgas", 95)) ;
  GALGAS_lstringlist var_filterProperties_3719 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("table-view-controller.galgas", 96)) ;
  switch (select_easyBindings_5F_syntax_44 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_filter COMMA_SOURCE_FILE ("table-view-controller.galgas", 99)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GALGAS_lstring var_filterProperty_3820 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("table-view-controller.galgas", 101)) ;
      var_filterProperties_3719.addAssign_operation (var_filterProperty_3820  COMMA_SOURCE_FILE ("table-view-controller.galgas", 102)) ;
      switch (select_easyBindings_5F_syntax_45 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("table-view-controller.galgas", 104)) ;
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
  GALGAS_tableViewControllerBoundColumnListAST var_arrayControllerBoundColumnListAST_3983 = GALGAS_tableViewControllerBoundColumnListAST::constructor_emptyList (SOURCE_FILE ("table-view-controller.galgas", 107)) ;
  switch (select_easyBindings_5F_syntax_46 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("table-view-controller.galgas", 109)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("table-view-controller.galgas", 111)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      switch (select_easyBindings_5F_syntax_47 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_column COMMA_SOURCE_FILE ("table-view-controller.galgas", 114)) ;
        GALGAS_lstring var_columnName_4109 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("table-view-controller.galgas", 115)) ;
        GALGAS_lstring var_sortPropertyName_4143 ;
        switch (select_easyBindings_5F_syntax_48 (inCompiler)) {
        case 1: {
          var_sortPropertyName_4143 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("table-view-controller.galgas", 118)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_sort COMMA_SOURCE_FILE ("table-view-controller.galgas", 120)) ;
          var_sortPropertyName_4143 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("table-view-controller.galgas", 121)) ;
        } break ;
        default:
          break ;
        }
        GALGAS_lstring var_columnOutletTypeName_4328 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("table-view-controller.galgas", 123)) ;
        GALGAS_tableViewColumnBindingAST var_columnBindingAST_4403 ;
        nt_column_5F_bindings_ (var_columnBindingAST_4403, inCompiler) ;
        var_arrayControllerBoundColumnListAST_3983.addAssign_operation (var_columnName_4109, var_columnOutletTypeName_4328, var_columnBindingAST_4403, var_sortPropertyName_4143  COMMA_SOURCE_FILE ("table-view-controller.galgas", 125)) ;
      } break ;
      default:
        repeatFlag_2 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("table-view-controller.galgas", 131)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_tableViewControllerDeclarationAST::constructor_new (constinArgument_inCurrentEntity, var_controllerName_3182, var_isRoot_3536, constinArgument_inRootEntity, var_relationshipName_3685, var_filterProperties_3719, var_arrayControllerBoundColumnListAST_3983, var_arrayControllerAttributListAST_3253  COMMA_SOURCE_FILE ("table-view-controller.galgas", 133))  COMMA_SOURCE_FILE ("table-view-controller.galgas", 133)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i27_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_tableViewController COMMA_SOURCE_FILE ("table-view-controller.galgas", 72)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("table-view-controller.galgas", 73)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("table-view-controller.galgas", 75)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("table-view-controller.galgas", 77)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("table-view-controller.galgas", 78)) ;
    nt_explicit_5F_value_parse (inCompiler) ;
    switch (select_easyBindings_5F_syntax_42 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("table-view-controller.galgas", 82)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("table-view-controller.galgas", 84)) ;
  switch (select_easyBindings_5F_syntax_43 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("table-view-controller.galgas", 88)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("table-view-controller.galgas", 91)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("table-view-controller.galgas", 94)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("table-view-controller.galgas", 95)) ;
  switch (select_easyBindings_5F_syntax_44 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_filter COMMA_SOURCE_FILE ("table-view-controller.galgas", 99)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("table-view-controller.galgas", 101)) ;
      switch (select_easyBindings_5F_syntax_45 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("table-view-controller.galgas", 104)) ;
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
  switch (select_easyBindings_5F_syntax_46 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("table-view-controller.galgas", 109)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("table-view-controller.galgas", 111)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      switch (select_easyBindings_5F_syntax_47 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_column COMMA_SOURCE_FILE ("table-view-controller.galgas", 114)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("table-view-controller.galgas", 115)) ;
        switch (select_easyBindings_5F_syntax_48 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_sort COMMA_SOURCE_FILE ("table-view-controller.galgas", 120)) ;
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("table-view-controller.galgas", 121)) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("table-view-controller.galgas", 123)) ;
        nt_column_5F_bindings_parse (inCompiler) ;
      } break ;
      default:
        repeatFlag_2 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("table-view-controller.galgas", 131)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_column_5F_bindings_i28_ (GALGAS_tableViewColumnBindingAST & outArgument_outColumnBindingAST,
                                                                                          C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outColumnBindingAST.drop () ; // Release 'out' argument
  GALGAS_lstring var_runActionDescriptor_5123 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("table-view-controller.galgas", 148)) ;
  GALGAS_multipleBindingDescriptor var_enabledBindingDescriptor_5171 = GALGAS_multipleBindingDescriptor::constructor_noBinding (SOURCE_FILE ("table-view-controller.galgas", 149)) ;
  GALGAS_multipleBindingDescriptor var_hiddenBindingDescriptor_5242 = GALGAS_multipleBindingDescriptor::constructor_noBinding (SOURCE_FILE ("table-view-controller.galgas", 150)) ;
  GALGAS_regularBindingList var_regularBindingList_5324 = GALGAS_regularBindingList::constructor_emptyList (SOURCE_FILE ("table-view-controller.galgas", 151)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_49 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("table-view-controller.galgas", 154)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsNotEqual, var_runActionDescriptor_5123.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("table-view-controller.galgas", 156)), GALGAS_string ("duplicated $run binding"), fixItArray2  COMMA_SOURCE_FILE ("table-view-controller.galgas", 156)) ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("table-view-controller.galgas", 158)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("table-view-controller.galgas", 159)) ;
      var_runActionDescriptor_5123 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("table-view-controller.galgas", 160)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("table-view-controller.galgas", 163)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsNotEqual, var_enabledBindingDescriptor_5171.objectCompare (GALGAS_multipleBindingDescriptor::constructor_noBinding (SOURCE_FILE ("table-view-controller.galgas", 164)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("table-view-controller.galgas", 165)), GALGAS_string ("duplicated $enabled binding"), fixItArray4  COMMA_SOURCE_FILE ("table-view-controller.galgas", 165)) ;
        }
      }
      GALGAS_abstractBooleanMultipleBindingExpressionAST var_bindingExpression_5795 ;
      nt_booleanMultipleBindingExpression_ (var_bindingExpression_5795, inCompiler) ;
      var_enabledBindingDescriptor_5171 = GALGAS_multipleBindingDescriptor::constructor_binding (var_bindingExpression_5795  COMMA_SOURCE_FILE ("table-view-controller.galgas", 168)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("table-view-controller.galgas", 171)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (kIsNotEqual, var_hiddenBindingDescriptor_5242.objectCompare (GALGAS_multipleBindingDescriptor::constructor_noBinding (SOURCE_FILE ("table-view-controller.galgas", 172)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("table-view-controller.galgas", 173)), GALGAS_string ("duplicated $hidden binding"), fixItArray6  COMMA_SOURCE_FILE ("table-view-controller.galgas", 173)) ;
        }
      }
      GALGAS_abstractBooleanMultipleBindingExpressionAST var_bindingExpression_6130 ;
      nt_booleanMultipleBindingExpression_ (var_bindingExpression_6130, inCompiler) ;
      var_hiddenBindingDescriptor_5242 = GALGAS_multipleBindingDescriptor::constructor_binding (var_bindingExpression_6130  COMMA_SOURCE_FILE ("table-view-controller.galgas", 176)) ;
    } break ;
    case 5: {
      GALGAS_lstring var_bindingName_6282 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("table-view-controller.galgas", 179)) ;
      GALGAS_observablePropertyList var_observablePropertyList_6335 = GALGAS_observablePropertyList::constructor_emptyList (SOURCE_FILE ("table-view-controller.galgas", 180)) ;
      bool repeatFlag_7 = true ;
      while (repeatFlag_7) {
        GALGAS_observablePropertyAST var_observableProperty_6430 ;
        nt_observable_5F_property_ (var_observableProperty_6430, inCompiler) ;
        var_observablePropertyList_6335.addAssign_operation (var_observableProperty_6430  COMMA_SOURCE_FILE ("table-view-controller.galgas", 183)) ;
        switch (select_easyBindings_5F_syntax_50 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("table-view-controller.galgas", 185)) ;
        } break ;
        default:
          repeatFlag_7 = false ;
          break ;
        }
      }
      GALGAS_bindingOptionList var_bindingOptions_6566 ;
      nt_binding_5F_option_5F_list_ (var_bindingOptions_6566, inCompiler) ;
      var_regularBindingList_5324.addAssign_operation (var_bindingName_6282, var_observablePropertyList_6335, var_bindingOptions_6566  COMMA_SOURCE_FILE ("table-view-controller.galgas", 188)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outColumnBindingAST = GALGAS_tableViewColumnBindingAST::constructor_new (var_runActionDescriptor_5123, var_enabledBindingDescriptor_5171, var_hiddenBindingDescriptor_5242, var_regularBindingList_5324  COMMA_SOURCE_FILE ("table-view-controller.galgas", 194)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_column_5F_bindings_i28_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_49 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("table-view-controller.galgas", 154)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("table-view-controller.galgas", 158)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("table-view-controller.galgas", 159)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("table-view-controller.galgas", 160)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("table-view-controller.galgas", 163)) ;
      nt_booleanMultipleBindingExpression_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("table-view-controller.galgas", 171)) ;
      nt_booleanMultipleBindingExpression_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("table-view-controller.galgas", 179)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        nt_observable_5F_property_parse (inCompiler) ;
        switch (select_easyBindings_5F_syntax_50 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("table-view-controller.galgas", 185)) ;
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

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i29_ (const GALGAS_lstring constinArgument_inCurrentEntity,
                                                                                                 const GALGAS_lstring /* constinArgument_inRootEntity */,
                                                                                                 GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                 C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_selectionController COMMA_SOURCE_FILE ("selection-controller.galgas", 39)) ;
  GALGAS_lstring var_selectionEntityName_1947 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("selection-controller.galgas", 40)) ;
  GALGAS_lstring var_selectionControllerName_2002 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("selection-controller.galgas", 41)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("selection-controller.galgas", 42)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("selection-controller.galgas", 43)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("selection-controller.galgas", 44)) ;
  GALGAS_lstring var_modelControllerName_2071 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("selection-controller.galgas", 45)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("selection-controller.galgas", 46)) ;
  GALGAS_lstring var_propertyName_2123 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("selection-controller.galgas", 47)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("selection-controller.galgas", 48)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_selectionControllerDeclarationAST::constructor_new (constinArgument_inCurrentEntity, var_selectionControllerName_2002, var_modelControllerName_2071, var_propertyName_2123, var_selectionEntityName_1947  COMMA_SOURCE_FILE ("selection-controller.galgas", 49))  COMMA_SOURCE_FILE ("selection-controller.galgas", 49)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i29_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_selectionController COMMA_SOURCE_FILE ("selection-controller.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("selection-controller.galgas", 40)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("selection-controller.galgas", 41)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("selection-controller.galgas", 42)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("selection-controller.galgas", 43)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("selection-controller.galgas", 44)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("selection-controller.galgas", 45)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("selection-controller.galgas", 46)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("selection-controller.galgas", 47)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("selection-controller.galgas", 48)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_explicit_5F_value_i30_ (GALGAS_abstractDefaultValue & outArgument_outDefaultValue,
                                                                                         C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outDefaultValue.drop () ; // Release 'out' argument
  switch (select_easyBindings_5F_syntax_51 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("explicit-default-value.galgas", 62)) ;
    outArgument_outDefaultValue = GALGAS_boolAsDefaultValue::constructor_new (GALGAS_lbool::constructor_new (GALGAS_bool (true), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 63))  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 63))  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 63)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_no COMMA_SOURCE_FILE ("explicit-default-value.galgas", 65)) ;
    outArgument_outDefaultValue = GALGAS_boolAsDefaultValue::constructor_new (GALGAS_lbool::constructor_new (GALGAS_bool (false), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 66))  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 66))  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 66)) ;
  } break ;
  case 3: {
    GALGAS_luint var_integerValue_2451 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("explicit-default-value.galgas", 68)) ;
    outArgument_outDefaultValue = GALGAS_integerAsDefaultValue::constructor_new (var_integerValue_2451, GALGAS_bool (false)  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 69)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("explicit-default-value.galgas", 71)) ;
    GALGAS_luint var_integerValue_2592 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("explicit-default-value.galgas", 72)) ;
    outArgument_outDefaultValue = GALGAS_integerAsDefaultValue::constructor_new (var_integerValue_2592, GALGAS_bool (true)  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 73)) ;
  } break ;
  case 5: {
    GALGAS_ldouble var_doubleValue_2722 = inCompiler->synthetizedAttribute_floatValue () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double COMMA_SOURCE_FILE ("explicit-default-value.galgas", 75)) ;
    outArgument_outDefaultValue = GALGAS_doubleAsDefaultValue::constructor_new (var_doubleValue_2722  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 76)) ;
  } break ;
  case 6: {
    GALGAS_lstring var_stringValue_2846 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("explicit-default-value.galgas", 78)) ;
    outArgument_outDefaultValue = GALGAS_stringAsDefaultValue::constructor_new (var_stringValue_2846  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 79)) ;
  } break ;
  case 7: {
    GALGAS_lstring var_stringValue_2963 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("explicit-default-value.galgas", 81)) ;
    outArgument_outDefaultValue = GALGAS_identifierAsDefaultValue::constructor_new (var_stringValue_2963  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 82)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("explicit-default-value.galgas", 84)) ;
    GALGAS_location var_startLocation_3073 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 85)) ;
    GALGAS_defaultValueList var_defaultValueList_3131 = GALGAS_defaultValueList::constructor_emptyList (SOURCE_FILE ("explicit-default-value.galgas", 86)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_abstractDefaultValue var_defaultValue_3214 ;
      nt_explicit_5F_value_ (var_defaultValue_3214, inCompiler) ;
      var_defaultValueList_3131.addAssign_operation (var_defaultValue_3214  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 89)) ;
      switch (select_easyBindings_5F_syntax_52 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("explicit-default-value.galgas", 91)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("explicit-default-value.galgas", 93)) ;
    outArgument_outDefaultValue = GALGAS_listAsDefaultValue::constructor_new (var_startLocation_3073, var_defaultValueList_3131  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 94)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_explicit_5F_value_i30_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_51 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("explicit-default-value.galgas", 62)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_no COMMA_SOURCE_FILE ("explicit-default-value.galgas", 65)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("explicit-default-value.galgas", 68)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("explicit-default-value.galgas", 71)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("explicit-default-value.galgas", 72)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double COMMA_SOURCE_FILE ("explicit-default-value.galgas", 75)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("explicit-default-value.galgas", 78)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("explicit-default-value.galgas", 81)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("explicit-default-value.galgas", 84)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_explicit_5F_value_parse (inCompiler) ;
      switch (select_easyBindings_5F_syntax_52 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("explicit-default-value.galgas", 91)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("explicit-default-value.galgas", 93)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_xcode_5F_project_i31_ (GALGAS_lstring & ioArgument_ioXcodeProjectString,
                                                                                        C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject COMMA_SOURCE_FILE ("xcode-project.galgas", 12)) ;
  GALGAS_lstring var_xcodeProjectString_552 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("xcode-project.galgas", 13)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("xcode-project.galgas", 14)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, var_xcodeProjectString_552.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_xcodeProjectString_552.getter_location (SOURCE_FILE ("xcode-project.galgas", 16)), GALGAS_string ("string should not be empty"), fixItArray1  COMMA_SOURCE_FILE ("xcode-project.galgas", 16)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsNotEqual, ioArgument_ioXcodeProjectString.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_xcodeProjectString_552.getter_location (SOURCE_FILE ("xcode-project.galgas", 18)), GALGAS_string ("Xcode project already defined"), fixItArray3  COMMA_SOURCE_FILE ("xcode-project.galgas", 18)) ;
      }
    }
    if (kBoolFalse == test_2) {
      ioArgument_ioXcodeProjectString = var_xcodeProjectString_552 ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_xcode_5F_project_i31_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject COMMA_SOURCE_FILE ("xcode-project.galgas", 12)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("xcode-project.galgas", 13)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("xcode-project.galgas", 14)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_main_5F_xib_i32_ (GALGAS_mainXibDescriptorList & ioArgument_ioElementList,
                                                                                   C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_mainxib COMMA_SOURCE_FILE ("main-xib.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("main-xib.galgas", 34)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_54 (inCompiler)) {
    case 1: {
      GALGAS_lstring var_outletType_1313 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("main-xib.galgas", 37)) ;
      GALGAS_lstring var_outletName_1359 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("main-xib.galgas", 38)) ;
      GALGAS_mainXibLineDescriptorList temp_1 = GALGAS_mainXibLineDescriptorList::constructor_emptyList (SOURCE_FILE ("main-xib.galgas", 40)) ;
      temp_1.addAssign_operation (GALGAS_mainXibElement::constructor_outlet (var_outletType_1313, var_outletName_1359  COMMA_SOURCE_FILE ("main-xib.galgas", 40))  COMMA_SOURCE_FILE ("main-xib.galgas", 40)) ;
      ioArgument_ioElementList.addAssign_operation (temp_1  COMMA_SOURCE_FILE ("main-xib.galgas", 39)) ;
    } break ;
    case 2: {
      GALGAS_lstring var_s_1514 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("main-xib.galgas", 43)) ;
      GALGAS_mainXibLineDescriptorList temp_2 = GALGAS_mainXibLineDescriptorList::constructor_emptyList (SOURCE_FILE ("main-xib.galgas", 44)) ;
      temp_2.addAssign_operation (GALGAS_mainXibElement::constructor_text (var_s_1514  COMMA_SOURCE_FILE ("main-xib.galgas", 44))  COMMA_SOURCE_FILE ("main-xib.galgas", 44)) ;
      ioArgument_ioElementList.addAssign_operation (temp_2  COMMA_SOURCE_FILE ("main-xib.galgas", 44)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("main-xib.galgas", 46)) ;
      GALGAS_mainXibLineDescriptorList var_lineDescription_1652 ;
      nt_main_5F_xib_5F_line_ (var_lineDescription_1652, inCompiler) ;
      ioArgument_ioElementList.addAssign_operation (var_lineDescription_1652  COMMA_SOURCE_FILE ("main-xib.galgas", 48)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("main-xib.galgas", 49)) ;
    } break ;
    default:
      break ;
    }
    switch (select_easyBindings_5F_syntax_53 (inCompiler)) {
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

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_main_5F_xib_i32_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_mainxib COMMA_SOURCE_FILE ("main-xib.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("main-xib.galgas", 34)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_54 (inCompiler)) {
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
    switch (select_easyBindings_5F_syntax_53 (inCompiler)) {
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

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i33_ (GALGAS_mainXibLineDescriptorList & outArgument_outLineDescription,
                                                                                           C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outLineDescription.drop () ; // Release 'out' argument
  outArgument_outLineDescription = GALGAS_mainXibLineDescriptorList::constructor_emptyList (SOURCE_FILE ("main-xib.galgas", 62)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_56 (inCompiler)) {
    case 1: {
      GALGAS_lstring var_outletType_2057 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("main-xib.galgas", 65)) ;
      GALGAS_lstring var_outletName_2103 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("main-xib.galgas", 66)) ;
      outArgument_outLineDescription.addAssign_operation (GALGAS_mainXibElement::constructor_outlet (var_outletType_2057, var_outletName_2103  COMMA_SOURCE_FILE ("main-xib.galgas", 68))  COMMA_SOURCE_FILE ("main-xib.galgas", 67)) ;
    } break ;
    case 2: {
      GALGAS_lstring var_s_2250 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("main-xib.galgas", 70)) ;
      outArgument_outLineDescription.addAssign_operation (GALGAS_mainXibElement::constructor_text (var_s_2250  COMMA_SOURCE_FILE ("main-xib.galgas", 71))  COMMA_SOURCE_FILE ("main-xib.galgas", 71)) ;
    } break ;
    default:
      break ;
    }
    switch (select_easyBindings_5F_syntax_55 (inCompiler)) {
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

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i33_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_56 (inCompiler)) {
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
    switch (select_easyBindings_5F_syntax_55 (inCompiler)) {
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
//                                  Class for element of '@astDeclarationListEX' list                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_astDeclarationListEX : public cCollectionElement {
  public : GALGAS_astDeclarationListEX_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_astDeclarationListEX (const GALGAS_astDeclaration & in_mDeclaration
                                                    COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_astDeclarationListEX (const GALGAS_astDeclarationListEX_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_astDeclarationListEX::cCollectionElement_astDeclarationListEX (const GALGAS_astDeclaration & in_mDeclaration
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDeclaration) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_astDeclarationListEX::cCollectionElement_astDeclarationListEX (const GALGAS_astDeclarationListEX_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mDeclaration) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_astDeclarationListEX::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_astDeclarationListEX::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_astDeclarationListEX (mObject.mProperty_mDeclaration COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_astDeclarationListEX::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDeclaration" ":" ;
  mObject.mProperty_mDeclaration.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_astDeclarationListEX::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_astDeclarationListEX * operand = (cCollectionElement_astDeclarationListEX *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_astDeclarationListEX) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclarationListEX::GALGAS_astDeclarationListEX (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclarationListEX::GALGAS_astDeclarationListEX (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclarationListEX GALGAS_astDeclarationListEX::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_astDeclarationListEX  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclarationListEX GALGAS_astDeclarationListEX::constructor_listWithValue (const GALGAS_astDeclaration & inOperand0
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_astDeclarationListEX result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_astDeclarationListEX (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_astDeclarationListEX::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_astDeclarationListEX::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_astDeclaration & in_mDeclaration
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_astDeclarationListEX * p = NULL ;
  macroMyNew (p, cCollectionElement_astDeclarationListEX (in_mDeclaration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_astDeclarationListEX::addAssign_operation (const GALGAS_astDeclaration & inOperand0
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_astDeclarationListEX (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_astDeclarationListEX::setter_append (GALGAS_astDeclarationListEX_2D_element inElement,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_astDeclarationListEX (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_astDeclarationListEX::setter_insertAtIndex (const GALGAS_astDeclaration inOperand0,
                                                        const GALGAS_uint inInsertionIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_astDeclarationListEX (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_astDeclarationListEX::setter_removeAtIndex (GALGAS_astDeclaration & outOperand0,
                                                        const GALGAS_uint inRemoveIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_astDeclarationListEX * p = (cCollectionElement_astDeclarationListEX *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_astDeclarationListEX) ;
      outOperand0 = p->mObject.mProperty_mDeclaration ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_astDeclarationListEX::setter_popFirst (GALGAS_astDeclaration & outOperand0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astDeclarationListEX * p = (cCollectionElement_astDeclarationListEX *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astDeclarationListEX) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_astDeclarationListEX::setter_popLast (GALGAS_astDeclaration & outOperand0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astDeclarationListEX * p = (cCollectionElement_astDeclarationListEX *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astDeclarationListEX) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_astDeclarationListEX::method_first (GALGAS_astDeclaration & outOperand0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astDeclarationListEX * p = (cCollectionElement_astDeclarationListEX *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astDeclarationListEX) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_astDeclarationListEX::method_last (GALGAS_astDeclaration & outOperand0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astDeclarationListEX * p = (cCollectionElement_astDeclarationListEX *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astDeclarationListEX) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclarationListEX GALGAS_astDeclarationListEX::add_operation (const GALGAS_astDeclarationListEX & inOperand,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_astDeclarationListEX result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclarationListEX GALGAS_astDeclarationListEX::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_astDeclarationListEX result = GALGAS_astDeclarationListEX::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclarationListEX GALGAS_astDeclarationListEX::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_astDeclarationListEX result = GALGAS_astDeclarationListEX::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclarationListEX GALGAS_astDeclarationListEX::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_astDeclarationListEX result = GALGAS_astDeclarationListEX::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_astDeclarationListEX::plusAssign_operation (const GALGAS_astDeclarationListEX inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclaration GALGAS_astDeclarationListEX::getter_mDeclarationAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_astDeclarationListEX * p = (cCollectionElement_astDeclarationListEX *) attributes.ptr () ;
  GALGAS_astDeclaration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_astDeclarationListEX) ;
    result = p->mObject.mProperty_mDeclaration ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_astDeclarationListEX::cEnumerator_astDeclarationListEX (const GALGAS_astDeclarationListEX & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclarationListEX_2D_element cEnumerator_astDeclarationListEX::current (LOCATION_ARGS) const {
  const cCollectionElement_astDeclarationListEX * p = (const cCollectionElement_astDeclarationListEX *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_astDeclarationListEX) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclaration cEnumerator_astDeclarationListEX::current_mDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_astDeclarationListEX * p = (const cCollectionElement_astDeclarationListEX *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_astDeclarationListEX) ;
  return p->mObject.mProperty_mDeclaration ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @astDeclarationListEX type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astDeclarationListEX ("astDeclarationListEX",
                                             NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_astDeclarationListEX::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astDeclarationListEX ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_astDeclarationListEX::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astDeclarationListEX (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclarationListEX GALGAS_astDeclarationListEX::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_astDeclarationListEX result ;
  const GALGAS_astDeclarationListEX * p = (const GALGAS_astDeclarationListEX *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astDeclarationListEX *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astDeclarationListEX", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Class for element of '@declarationListAST' list                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_declarationListAST : public cCollectionElement {
  public : GALGAS_declarationListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_declarationListAST (const GALGAS_abstractDeclarationAST & in_mPropertyDeclaration
                                                  COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_declarationListAST (const GALGAS_declarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_declarationListAST::cCollectionElement_declarationListAST (const GALGAS_abstractDeclarationAST & in_mPropertyDeclaration
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mPropertyDeclaration) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_declarationListAST::cCollectionElement_declarationListAST (const GALGAS_declarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mPropertyDeclaration) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_declarationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_declarationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_declarationListAST (mObject.mProperty_mPropertyDeclaration COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_declarationListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyDeclaration" ":" ;
  mObject.mProperty_mPropertyDeclaration.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_declarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_declarationListAST * operand = (cCollectionElement_declarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_declarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationListAST::GALGAS_declarationListAST (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationListAST::GALGAS_declarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationListAST GALGAS_declarationListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_declarationListAST  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationListAST GALGAS_declarationListAST::constructor_listWithValue (const GALGAS_abstractDeclarationAST & inOperand0
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_declarationListAST result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_declarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_declarationListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GALGAS_abstractDeclarationAST & in_mPropertyDeclaration
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_declarationListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_declarationListAST (in_mPropertyDeclaration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationListAST::addAssign_operation (const GALGAS_abstractDeclarationAST & inOperand0
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_declarationListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationListAST::setter_append (GALGAS_declarationListAST_2D_element inElement,
                                               C_Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_declarationListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationListAST::setter_insertAtIndex (const GALGAS_abstractDeclarationAST inOperand0,
                                                      const GALGAS_uint inInsertionIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_declarationListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationListAST::setter_removeAtIndex (GALGAS_abstractDeclarationAST & outOperand0,
                                                      const GALGAS_uint inRemoveIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
      outOperand0 = p->mObject.mProperty_mPropertyDeclaration ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationListAST::setter_popFirst (GALGAS_abstractDeclarationAST & outOperand0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyDeclaration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationListAST::setter_popLast (GALGAS_abstractDeclarationAST & outOperand0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyDeclaration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationListAST::method_first (GALGAS_abstractDeclarationAST & outOperand0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyDeclaration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationListAST::method_last (GALGAS_abstractDeclarationAST & outOperand0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyDeclaration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationListAST GALGAS_declarationListAST::add_operation (const GALGAS_declarationListAST & inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_declarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationListAST GALGAS_declarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_declarationListAST result = GALGAS_declarationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationListAST GALGAS_declarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_declarationListAST result = GALGAS_declarationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationListAST GALGAS_declarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_declarationListAST result = GALGAS_declarationListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationListAST::plusAssign_operation (const GALGAS_declarationListAST inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDeclarationAST GALGAS_declarationListAST::getter_mPropertyDeclarationAtIndex (const GALGAS_uint & inIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_declarationListAST * p = (cCollectionElement_declarationListAST *) attributes.ptr () ;
  GALGAS_abstractDeclarationAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
    result = p->mObject.mProperty_mPropertyDeclaration ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_declarationListAST::cEnumerator_declarationListAST (const GALGAS_declarationListAST & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationListAST_2D_element cEnumerator_declarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_declarationListAST * p = (const cCollectionElement_declarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDeclarationAST cEnumerator_declarationListAST::current_mPropertyDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_declarationListAST * p = (const cCollectionElement_declarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_declarationListAST) ;
  return p->mObject.mProperty_mPropertyDeclaration ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @declarationListAST type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_declarationListAST ("declarationListAST",
                                           NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_declarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declarationListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_declarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_declarationListAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationListAST GALGAS_declarationListAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_declarationListAST result ;
  const GALGAS_declarationListAST * p = (const GALGAS_declarationListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_declarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Class for element of '@outletClassBindingSpecificationList' list                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_outletClassBindingSpecificationList : public cCollectionElement {
  public : GALGAS_outletClassBindingSpecificationList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_outletClassBindingSpecificationList (const GALGAS_lstring & in_mOutletClassName,
                                                                   const GALGAS_bool & in_mIsUserDefined,
                                                                   const GALGAS_lstring & in_mBindingName,
                                                                   const GALGAS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                                   const GALGAS_controllerBindingOptionList & in_mBindingOptionList
                                                                   COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_outletClassBindingSpecificationList (const GALGAS_outletClassBindingSpecificationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_outletClassBindingSpecificationList::cCollectionElement_outletClassBindingSpecificationList (const GALGAS_lstring & in_mOutletClassName,
                                                                                                                const GALGAS_bool & in_mIsUserDefined,
                                                                                                                const GALGAS_lstring & in_mBindingName,
                                                                                                                const GALGAS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                                                                                const GALGAS_controllerBindingOptionList & in_mBindingOptionList
                                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOutletClassName, in_mIsUserDefined, in_mBindingName, in_mOutletClassBindingSpecificationModelList, in_mBindingOptionList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_outletClassBindingSpecificationList::cCollectionElement_outletClassBindingSpecificationList (const GALGAS_outletClassBindingSpecificationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOutletClassName, inElement.mProperty_mIsUserDefined, inElement.mProperty_mBindingName, inElement.mProperty_mOutletClassBindingSpecificationModelList, inElement.mProperty_mBindingOptionList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_outletClassBindingSpecificationList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_outletClassBindingSpecificationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_outletClassBindingSpecificationList (mObject.mProperty_mOutletClassName, mObject.mProperty_mIsUserDefined, mObject.mProperty_mBindingName, mObject.mProperty_mOutletClassBindingSpecificationModelList, mObject.mProperty_mBindingOptionList COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_outletClassBindingSpecificationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOutletClassName" ":" ;
  mObject.mProperty_mOutletClassName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsUserDefined" ":" ;
  mObject.mProperty_mIsUserDefined.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBindingName" ":" ;
  mObject.mProperty_mBindingName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOutletClassBindingSpecificationModelList" ":" ;
  mObject.mProperty_mOutletClassBindingSpecificationModelList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBindingOptionList" ":" ;
  mObject.mProperty_mBindingOptionList.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_outletClassBindingSpecificationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_outletClassBindingSpecificationList * operand = (cCollectionElement_outletClassBindingSpecificationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_outletClassBindingSpecificationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationList::GALGAS_outletClassBindingSpecificationList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationList::GALGAS_outletClassBindingSpecificationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationList GALGAS_outletClassBindingSpecificationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_outletClassBindingSpecificationList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationList GALGAS_outletClassBindingSpecificationList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_bool & inOperand1,
                                                                                                                  const GALGAS_lstring & inOperand2,
                                                                                                                  const GALGAS_outletClassBindingSpecificationModelList & inOperand3,
                                                                                                                  const GALGAS_controllerBindingOptionList & inOperand4
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_outletClassBindingSpecificationList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_outletClassBindingSpecificationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_outletClassBindingSpecificationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassBindingSpecificationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                            const GALGAS_lstring & in_mOutletClassName,
                                                                            const GALGAS_bool & in_mIsUserDefined,
                                                                            const GALGAS_lstring & in_mBindingName,
                                                                            const GALGAS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                                            const GALGAS_controllerBindingOptionList & in_mBindingOptionList
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_outletClassBindingSpecificationList * p = NULL ;
  macroMyNew (p, cCollectionElement_outletClassBindingSpecificationList (in_mOutletClassName,
                                                                         in_mIsUserDefined,
                                                                         in_mBindingName,
                                                                         in_mOutletClassBindingSpecificationModelList,
                                                                         in_mBindingOptionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassBindingSpecificationList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_bool & inOperand1,
                                                                      const GALGAS_lstring & inOperand2,
                                                                      const GALGAS_outletClassBindingSpecificationModelList & inOperand3,
                                                                      const GALGAS_controllerBindingOptionList & inOperand4
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_outletClassBindingSpecificationList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassBindingSpecificationList::setter_append (GALGAS_outletClassBindingSpecificationList_2D_element inElement,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_outletClassBindingSpecificationList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassBindingSpecificationList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                       const GALGAS_bool inOperand1,
                                                                       const GALGAS_lstring inOperand2,
                                                                       const GALGAS_outletClassBindingSpecificationModelList inOperand3,
                                                                       const GALGAS_controllerBindingOptionList inOperand4,
                                                                       const GALGAS_uint inInsertionIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_outletClassBindingSpecificationList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassBindingSpecificationList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                       GALGAS_bool & outOperand1,
                                                                       GALGAS_lstring & outOperand2,
                                                                       GALGAS_outletClassBindingSpecificationModelList & outOperand3,
                                                                       GALGAS_controllerBindingOptionList & outOperand4,
                                                                       const GALGAS_uint inRemoveIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_outletClassBindingSpecificationList * p = (cCollectionElement_outletClassBindingSpecificationList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
      outOperand0 = p->mObject.mProperty_mOutletClassName ;
      outOperand1 = p->mObject.mProperty_mIsUserDefined ;
      outOperand2 = p->mObject.mProperty_mBindingName ;
      outOperand3 = p->mObject.mProperty_mOutletClassBindingSpecificationModelList ;
      outOperand4 = p->mObject.mProperty_mBindingOptionList ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassBindingSpecificationList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                  GALGAS_bool & outOperand1,
                                                                  GALGAS_lstring & outOperand2,
                                                                  GALGAS_outletClassBindingSpecificationModelList & outOperand3,
                                                                  GALGAS_controllerBindingOptionList & outOperand4,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassBindingSpecificationList * p = (cCollectionElement_outletClassBindingSpecificationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
    outOperand0 = p->mObject.mProperty_mOutletClassName ;
    outOperand1 = p->mObject.mProperty_mIsUserDefined ;
    outOperand2 = p->mObject.mProperty_mBindingName ;
    outOperand3 = p->mObject.mProperty_mOutletClassBindingSpecificationModelList ;
    outOperand4 = p->mObject.mProperty_mBindingOptionList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassBindingSpecificationList::setter_popLast (GALGAS_lstring & outOperand0,
                                                                 GALGAS_bool & outOperand1,
                                                                 GALGAS_lstring & outOperand2,
                                                                 GALGAS_outletClassBindingSpecificationModelList & outOperand3,
                                                                 GALGAS_controllerBindingOptionList & outOperand4,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassBindingSpecificationList * p = (cCollectionElement_outletClassBindingSpecificationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
    outOperand0 = p->mObject.mProperty_mOutletClassName ;
    outOperand1 = p->mObject.mProperty_mIsUserDefined ;
    outOperand2 = p->mObject.mProperty_mBindingName ;
    outOperand3 = p->mObject.mProperty_mOutletClassBindingSpecificationModelList ;
    outOperand4 = p->mObject.mProperty_mBindingOptionList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassBindingSpecificationList::method_first (GALGAS_lstring & outOperand0,
                                                               GALGAS_bool & outOperand1,
                                                               GALGAS_lstring & outOperand2,
                                                               GALGAS_outletClassBindingSpecificationModelList & outOperand3,
                                                               GALGAS_controllerBindingOptionList & outOperand4,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassBindingSpecificationList * p = (cCollectionElement_outletClassBindingSpecificationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
    outOperand0 = p->mObject.mProperty_mOutletClassName ;
    outOperand1 = p->mObject.mProperty_mIsUserDefined ;
    outOperand2 = p->mObject.mProperty_mBindingName ;
    outOperand3 = p->mObject.mProperty_mOutletClassBindingSpecificationModelList ;
    outOperand4 = p->mObject.mProperty_mBindingOptionList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassBindingSpecificationList::method_last (GALGAS_lstring & outOperand0,
                                                              GALGAS_bool & outOperand1,
                                                              GALGAS_lstring & outOperand2,
                                                              GALGAS_outletClassBindingSpecificationModelList & outOperand3,
                                                              GALGAS_controllerBindingOptionList & outOperand4,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassBindingSpecificationList * p = (cCollectionElement_outletClassBindingSpecificationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
    outOperand0 = p->mObject.mProperty_mOutletClassName ;
    outOperand1 = p->mObject.mProperty_mIsUserDefined ;
    outOperand2 = p->mObject.mProperty_mBindingName ;
    outOperand3 = p->mObject.mProperty_mOutletClassBindingSpecificationModelList ;
    outOperand4 = p->mObject.mProperty_mBindingOptionList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationList GALGAS_outletClassBindingSpecificationList::add_operation (const GALGAS_outletClassBindingSpecificationList & inOperand,
                                                                                                      C_Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_outletClassBindingSpecificationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationList GALGAS_outletClassBindingSpecificationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_outletClassBindingSpecificationList result = GALGAS_outletClassBindingSpecificationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationList GALGAS_outletClassBindingSpecificationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_outletClassBindingSpecificationList result = GALGAS_outletClassBindingSpecificationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationList GALGAS_outletClassBindingSpecificationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_outletClassBindingSpecificationList result = GALGAS_outletClassBindingSpecificationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassBindingSpecificationList::plusAssign_operation (const GALGAS_outletClassBindingSpecificationList inOperand,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_outletClassBindingSpecificationList::getter_mOutletClassNameAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassBindingSpecificationList * p = (cCollectionElement_outletClassBindingSpecificationList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
    result = p->mObject.mProperty_mOutletClassName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassBindingSpecificationList::getter_mIsUserDefinedAtIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassBindingSpecificationList * p = (cCollectionElement_outletClassBindingSpecificationList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
    result = p->mObject.mProperty_mIsUserDefined ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_outletClassBindingSpecificationList::getter_mBindingNameAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassBindingSpecificationList * p = (cCollectionElement_outletClassBindingSpecificationList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
    result = p->mObject.mProperty_mBindingName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationModelList GALGAS_outletClassBindingSpecificationList::getter_mOutletClassBindingSpecificationModelListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                                     C_Compiler * inCompiler
                                                                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassBindingSpecificationList * p = (cCollectionElement_outletClassBindingSpecificationList *) attributes.ptr () ;
  GALGAS_outletClassBindingSpecificationModelList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
    result = p->mObject.mProperty_mOutletClassBindingSpecificationModelList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionList GALGAS_outletClassBindingSpecificationList::getter_mBindingOptionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassBindingSpecificationList * p = (cCollectionElement_outletClassBindingSpecificationList *) attributes.ptr () ;
  GALGAS_controllerBindingOptionList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
    result = p->mObject.mProperty_mBindingOptionList ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_outletClassBindingSpecificationList::cEnumerator_outletClassBindingSpecificationList (const GALGAS_outletClassBindingSpecificationList & inEnumeratedObject,
                                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationList_2D_element cEnumerator_outletClassBindingSpecificationList::current (LOCATION_ARGS) const {
  const cCollectionElement_outletClassBindingSpecificationList * p = (const cCollectionElement_outletClassBindingSpecificationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_outletClassBindingSpecificationList::current_mOutletClassName (LOCATION_ARGS) const {
  const cCollectionElement_outletClassBindingSpecificationList * p = (const cCollectionElement_outletClassBindingSpecificationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
  return p->mObject.mProperty_mOutletClassName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_outletClassBindingSpecificationList::current_mIsUserDefined (LOCATION_ARGS) const {
  const cCollectionElement_outletClassBindingSpecificationList * p = (const cCollectionElement_outletClassBindingSpecificationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
  return p->mObject.mProperty_mIsUserDefined ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_outletClassBindingSpecificationList::current_mBindingName (LOCATION_ARGS) const {
  const cCollectionElement_outletClassBindingSpecificationList * p = (const cCollectionElement_outletClassBindingSpecificationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
  return p->mObject.mProperty_mBindingName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationModelList cEnumerator_outletClassBindingSpecificationList::current_mOutletClassBindingSpecificationModelList (LOCATION_ARGS) const {
  const cCollectionElement_outletClassBindingSpecificationList * p = (const cCollectionElement_outletClassBindingSpecificationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
  return p->mObject.mProperty_mOutletClassBindingSpecificationModelList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionList cEnumerator_outletClassBindingSpecificationList::current_mBindingOptionList (LOCATION_ARGS) const {
  const cCollectionElement_outletClassBindingSpecificationList * p = (const cCollectionElement_outletClassBindingSpecificationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationList) ;
  return p->mObject.mProperty_mBindingOptionList ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @outletClassBindingSpecificationList type                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletClassBindingSpecificationList ("outletClassBindingSpecificationList",
                                                            NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_outletClassBindingSpecificationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassBindingSpecificationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_outletClassBindingSpecificationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletClassBindingSpecificationList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationList GALGAS_outletClassBindingSpecificationList::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_outletClassBindingSpecificationList result ;
  const GALGAS_outletClassBindingSpecificationList * p = (const GALGAS_outletClassBindingSpecificationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletClassBindingSpecificationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletClassBindingSpecificationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_classMap::cMapElement_classMap (const GALGAS_lstring & inKey,
                                            const GALGAS_classKind & in_mClassKind,
                                            const GALGAS_propertyMap & in_mPropertyMap,
                                            const GALGAS_actionMap & in_mActionMap,
                                            const GALGAS_propertyGenerationList & in_mPropertyGenerationList
                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mClassKind (in_mClassKind),
mProperty_mPropertyMap (in_mPropertyMap),
mProperty_mActionMap (in_mActionMap),
mProperty_mPropertyGenerationList (in_mPropertyGenerationList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_classMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mClassKind.isValid () && mProperty_mPropertyMap.isValid () && mProperty_mActionMap.isValid () && mProperty_mPropertyGenerationList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_classMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_classMap (mProperty_lkey, mProperty_mClassKind, mProperty_mPropertyMap, mProperty_mActionMap, mProperty_mPropertyGenerationList COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_classMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mClassKind" ":" ;
  mProperty_mClassKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyMap" ":" ;
  mProperty_mPropertyMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActionMap" ":" ;
  mProperty_mActionMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyGenerationList" ":" ;
  mProperty_mPropertyGenerationList.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_classMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_classMap * operand = (cMapElement_classMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassKind.objectCompare (operand->mProperty_mClassKind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyMap.objectCompare (operand->mProperty_mPropertyMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActionMap.objectCompare (operand->mProperty_mActionMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyGenerationList.objectCompare (operand->mProperty_mPropertyGenerationList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classMap::GALGAS_classMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classMap::GALGAS_classMap (const GALGAS_classMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classMap & GALGAS_classMap::operator = (const GALGAS_classMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classMap GALGAS_classMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_classMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classMap GALGAS_classMap::constructor_mapWithMapToOverride (const GALGAS_classMap & inMapToOverride
                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_classMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classMap GALGAS_classMap::getter_overriddenMap (C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_classMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_classMap::addAssign_operation (const GALGAS_lstring & inKey,
                                           const GALGAS_classKind & inArgument0,
                                           const GALGAS_propertyMap & inArgument1,
                                           const GALGAS_actionMap & inArgument2,
                                           const GALGAS_propertyGenerationList & inArgument3,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_classMap * p = NULL ;
  macroMyNew (p, cMapElement_classMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@classMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_classMap::setter_insertKey (GALGAS_lstring inKey,
                                        GALGAS_classKind inArgument0,
                                        GALGAS_propertyMap inArgument1,
                                        GALGAS_actionMap inArgument2,
                                        GALGAS_propertyGenerationList inArgument3,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  cMapElement_classMap * p = NULL ;
  macroMyNew (p, cMapElement_classMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' class is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_classMap_searchKey = "there is no '%K' class" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_classMap::method_searchKey (GALGAS_lstring inKey,
                                        GALGAS_classKind & outArgument0,
                                        GALGAS_propertyMap & outArgument1,
                                        GALGAS_actionMap & outArgument2,
                                        GALGAS_propertyGenerationList & outArgument3,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  const cMapElement_classMap * p = (const cMapElement_classMap *) performSearch (inKey,
                                                                                 inCompiler,
                                                                                 kSearchErrorMessage_classMap_searchKey
                                                                                 COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_classMap) ;
    outArgument0 = p->mProperty_mClassKind ;
    outArgument1 = p->mProperty_mPropertyMap ;
    outArgument2 = p->mProperty_mActionMap ;
    outArgument3 = p->mProperty_mPropertyGenerationList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classKind GALGAS_classMap::getter_mClassKindForKey (const GALGAS_string & inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_classMap * p = (const cMapElement_classMap *) attributes ;
  GALGAS_classKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_classMap) ;
    result = p->mProperty_mClassKind ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMap GALGAS_classMap::getter_mPropertyMapForKey (const GALGAS_string & inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_classMap * p = (const cMapElement_classMap *) attributes ;
  GALGAS_propertyMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_classMap) ;
    result = p->mProperty_mPropertyMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionMap GALGAS_classMap::getter_mActionMapForKey (const GALGAS_string & inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_classMap * p = (const cMapElement_classMap *) attributes ;
  GALGAS_actionMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_classMap) ;
    result = p->mProperty_mActionMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyGenerationList GALGAS_classMap::getter_mPropertyGenerationListForKey (const GALGAS_string & inKey,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_classMap * p = (const cMapElement_classMap *) attributes ;
  GALGAS_propertyGenerationList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_classMap) ;
    result = p->mProperty_mPropertyGenerationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_classMap::setter_setMClassKindForKey (GALGAS_classKind inAttributeValue,
                                                  GALGAS_string inKey,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_classMap * p = (cMapElement_classMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_classMap) ;
    p->mProperty_mClassKind = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_classMap::setter_setMPropertyMapForKey (GALGAS_propertyMap inAttributeValue,
                                                    GALGAS_string inKey,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_classMap * p = (cMapElement_classMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_classMap) ;
    p->mProperty_mPropertyMap = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_classMap::setter_setMActionMapForKey (GALGAS_actionMap inAttributeValue,
                                                  GALGAS_string inKey,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_classMap * p = (cMapElement_classMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_classMap) ;
    p->mProperty_mActionMap = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_classMap::setter_setMPropertyGenerationListForKey (GALGAS_propertyGenerationList inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_classMap * p = (cMapElement_classMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_classMap) ;
    p->mProperty_mPropertyGenerationList = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_classMap * GALGAS_classMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                           const GALGAS_string & inKey
                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_classMap * result = (cMapElement_classMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_classMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_classMap::cEnumerator_classMap (const GALGAS_classMap & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classMap_2D_element cEnumerator_classMap::current (LOCATION_ARGS) const {
  const cMapElement_classMap * p = (const cMapElement_classMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_classMap) ;
  return GALGAS_classMap_2D_element (p->mProperty_lkey, p->mProperty_mClassKind, p->mProperty_mPropertyMap, p->mProperty_mActionMap, p->mProperty_mPropertyGenerationList) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_classMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classKind cEnumerator_classMap::current_mClassKind (LOCATION_ARGS) const {
  const cMapElement_classMap * p = (const cMapElement_classMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_classMap) ;
  return p->mProperty_mClassKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMap cEnumerator_classMap::current_mPropertyMap (LOCATION_ARGS) const {
  const cMapElement_classMap * p = (const cMapElement_classMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_classMap) ;
  return p->mProperty_mPropertyMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionMap cEnumerator_classMap::current_mActionMap (LOCATION_ARGS) const {
  const cMapElement_classMap * p = (const cMapElement_classMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_classMap) ;
  return p->mProperty_mActionMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyGenerationList cEnumerator_classMap::current_mPropertyGenerationList (LOCATION_ARGS) const {
  const cMapElement_classMap * p = (const cMapElement_classMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_classMap) ;
  return p->mProperty_mPropertyGenerationList ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                   @classMap type                                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_classMap ("classMap",
                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_classMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_classMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_classMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classMap GALGAS_classMap::extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_classMap result ;
  const GALGAS_classMap * p = (const GALGAS_classMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_classMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_outletClassMap::cMapElement_outletClassMap (const GALGAS_lstring & inKey,
                                                        const GALGAS_lstring & in_mSuperClassName,
                                                        const GALGAS_bool & in_mHandlesRunAction,
                                                        const GALGAS_bool & in_mHandlesTableValueBinding,
                                                        const GALGAS_bool & in_mHandleEnabledBinding,
                                                        const GALGAS_bool & in_mHandleHiddenBinding,
                                                        const GALGAS_bool & in_mHandleGraphicControllerBinding,
                                                        const GALGAS_bool & in_mUserDefined
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mSuperClassName (in_mSuperClassName),
mProperty_mHandlesRunAction (in_mHandlesRunAction),
mProperty_mHandlesTableValueBinding (in_mHandlesTableValueBinding),
mProperty_mHandleEnabledBinding (in_mHandleEnabledBinding),
mProperty_mHandleHiddenBinding (in_mHandleHiddenBinding),
mProperty_mHandleGraphicControllerBinding (in_mHandleGraphicControllerBinding),
mProperty_mUserDefined (in_mUserDefined) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_outletClassMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mSuperClassName.isValid () && mProperty_mHandlesRunAction.isValid () && mProperty_mHandlesTableValueBinding.isValid () && mProperty_mHandleEnabledBinding.isValid () && mProperty_mHandleHiddenBinding.isValid () && mProperty_mHandleGraphicControllerBinding.isValid () && mProperty_mUserDefined.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_outletClassMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_outletClassMap (mProperty_lkey, mProperty_mSuperClassName, mProperty_mHandlesRunAction, mProperty_mHandlesTableValueBinding, mProperty_mHandleEnabledBinding, mProperty_mHandleHiddenBinding, mProperty_mHandleGraphicControllerBinding, mProperty_mUserDefined COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_outletClassMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSuperClassName" ":" ;
  mProperty_mSuperClassName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHandlesRunAction" ":" ;
  mProperty_mHandlesRunAction.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHandlesTableValueBinding" ":" ;
  mProperty_mHandlesTableValueBinding.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHandleEnabledBinding" ":" ;
  mProperty_mHandleEnabledBinding.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHandleHiddenBinding" ":" ;
  mProperty_mHandleHiddenBinding.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHandleGraphicControllerBinding" ":" ;
  mProperty_mHandleGraphicControllerBinding.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mUserDefined" ":" ;
  mProperty_mUserDefined.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_outletClassMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_outletClassMap * operand = (cMapElement_outletClassMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mSuperClassName.objectCompare (operand->mProperty_mSuperClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHandlesRunAction.objectCompare (operand->mProperty_mHandlesRunAction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHandlesTableValueBinding.objectCompare (operand->mProperty_mHandlesTableValueBinding) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHandleEnabledBinding.objectCompare (operand->mProperty_mHandleEnabledBinding) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHandleHiddenBinding.objectCompare (operand->mProperty_mHandleHiddenBinding) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHandleGraphicControllerBinding.objectCompare (operand->mProperty_mHandleGraphicControllerBinding) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUserDefined.objectCompare (operand->mProperty_mUserDefined) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassMap::GALGAS_outletClassMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassMap::GALGAS_outletClassMap (const GALGAS_outletClassMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassMap & GALGAS_outletClassMap::operator = (const GALGAS_outletClassMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassMap GALGAS_outletClassMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_outletClassMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassMap GALGAS_outletClassMap::constructor_mapWithMapToOverride (const GALGAS_outletClassMap & inMapToOverride
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_outletClassMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassMap GALGAS_outletClassMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_outletClassMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                 const GALGAS_lstring & inArgument0,
                                                 const GALGAS_bool & inArgument1,
                                                 const GALGAS_bool & inArgument2,
                                                 const GALGAS_bool & inArgument3,
                                                 const GALGAS_bool & inArgument4,
                                                 const GALGAS_bool & inArgument5,
                                                 const GALGAS_bool & inArgument6,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_outletClassMap * p = NULL ;
  macroMyNew (p, cMapElement_outletClassMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@outletClassMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassMap::setter_insertKey (GALGAS_lstring inKey,
                                              GALGAS_lstring inArgument0,
                                              GALGAS_bool inArgument1,
                                              GALGAS_bool inArgument2,
                                              GALGAS_bool inArgument3,
                                              GALGAS_bool inArgument4,
                                              GALGAS_bool inArgument5,
                                              GALGAS_bool inArgument6,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_outletClassMap * p = NULL ;
  macroMyNew (p, cMapElement_outletClassMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' outlet class is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_outletClassMap_searchKey = "there is no '%K' outlet class" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassMap::method_searchKey (GALGAS_lstring inKey,
                                              GALGAS_lstring & outArgument0,
                                              GALGAS_bool & outArgument1,
                                              GALGAS_bool & outArgument2,
                                              GALGAS_bool & outArgument3,
                                              GALGAS_bool & outArgument4,
                                              GALGAS_bool & outArgument5,
                                              GALGAS_bool & outArgument6,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_outletClassMap * p = (const cMapElement_outletClassMap *) performSearch (inKey,
                                                                                             inCompiler,
                                                                                             kSearchErrorMessage_outletClassMap_searchKey
                                                                                             COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
    outArgument6.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_outletClassMap) ;
    outArgument0 = p->mProperty_mSuperClassName ;
    outArgument1 = p->mProperty_mHandlesRunAction ;
    outArgument2 = p->mProperty_mHandlesTableValueBinding ;
    outArgument3 = p->mProperty_mHandleEnabledBinding ;
    outArgument4 = p->mProperty_mHandleHiddenBinding ;
    outArgument5 = p->mProperty_mHandleGraphicControllerBinding ;
    outArgument6 = p->mProperty_mUserDefined ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_outletClassMap::getter_mSuperClassNameForKey (const GALGAS_string & inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_outletClassMap * p = (const cMapElement_outletClassMap *) attributes ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_outletClassMap) ;
    result = p->mProperty_mSuperClassName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassMap::getter_mHandlesRunActionForKey (const GALGAS_string & inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_outletClassMap * p = (const cMapElement_outletClassMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_outletClassMap) ;
    result = p->mProperty_mHandlesRunAction ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassMap::getter_mHandlesTableValueBindingForKey (const GALGAS_string & inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_outletClassMap * p = (const cMapElement_outletClassMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_outletClassMap) ;
    result = p->mProperty_mHandlesTableValueBinding ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassMap::getter_mHandleEnabledBindingForKey (const GALGAS_string & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_outletClassMap * p = (const cMapElement_outletClassMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_outletClassMap) ;
    result = p->mProperty_mHandleEnabledBinding ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassMap::getter_mHandleHiddenBindingForKey (const GALGAS_string & inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_outletClassMap * p = (const cMapElement_outletClassMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_outletClassMap) ;
    result = p->mProperty_mHandleHiddenBinding ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassMap::getter_mHandleGraphicControllerBindingForKey (const GALGAS_string & inKey,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_outletClassMap * p = (const cMapElement_outletClassMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_outletClassMap) ;
    result = p->mProperty_mHandleGraphicControllerBinding ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassMap::getter_mUserDefinedForKey (const GALGAS_string & inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_outletClassMap * p = (const cMapElement_outletClassMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_outletClassMap) ;
    result = p->mProperty_mUserDefined ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassMap::setter_setMSuperClassNameForKey (GALGAS_lstring inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_outletClassMap * p = (cMapElement_outletClassMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_outletClassMap) ;
    p->mProperty_mSuperClassName = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassMap::setter_setMHandlesRunActionForKey (GALGAS_bool inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_outletClassMap * p = (cMapElement_outletClassMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_outletClassMap) ;
    p->mProperty_mHandlesRunAction = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassMap::setter_setMHandlesTableValueBindingForKey (GALGAS_bool inAttributeValue,
                                                                       GALGAS_string inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_outletClassMap * p = (cMapElement_outletClassMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_outletClassMap) ;
    p->mProperty_mHandlesTableValueBinding = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassMap::setter_setMHandleEnabledBindingForKey (GALGAS_bool inAttributeValue,
                                                                   GALGAS_string inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_outletClassMap * p = (cMapElement_outletClassMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_outletClassMap) ;
    p->mProperty_mHandleEnabledBinding = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassMap::setter_setMHandleHiddenBindingForKey (GALGAS_bool inAttributeValue,
                                                                  GALGAS_string inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_outletClassMap * p = (cMapElement_outletClassMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_outletClassMap) ;
    p->mProperty_mHandleHiddenBinding = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassMap::setter_setMHandleGraphicControllerBindingForKey (GALGAS_bool inAttributeValue,
                                                                             GALGAS_string inKey,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_outletClassMap * p = (cMapElement_outletClassMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_outletClassMap) ;
    p->mProperty_mHandleGraphicControllerBinding = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassMap::setter_setMUserDefinedForKey (GALGAS_bool inAttributeValue,
                                                          GALGAS_string inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_outletClassMap * p = (cMapElement_outletClassMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_outletClassMap) ;
    p->mProperty_mUserDefined = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_outletClassMap * GALGAS_outletClassMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_outletClassMap * result = (cMapElement_outletClassMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_outletClassMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_outletClassMap::cEnumerator_outletClassMap (const GALGAS_outletClassMap & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassMap_2D_element cEnumerator_outletClassMap::current (LOCATION_ARGS) const {
  const cMapElement_outletClassMap * p = (const cMapElement_outletClassMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_outletClassMap) ;
  return GALGAS_outletClassMap_2D_element (p->mProperty_lkey, p->mProperty_mSuperClassName, p->mProperty_mHandlesRunAction, p->mProperty_mHandlesTableValueBinding, p->mProperty_mHandleEnabledBinding, p->mProperty_mHandleHiddenBinding, p->mProperty_mHandleGraphicControllerBinding, p->mProperty_mUserDefined) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_outletClassMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_outletClassMap::current_mSuperClassName (LOCATION_ARGS) const {
  const cMapElement_outletClassMap * p = (const cMapElement_outletClassMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_outletClassMap) ;
  return p->mProperty_mSuperClassName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_outletClassMap::current_mHandlesRunAction (LOCATION_ARGS) const {
  const cMapElement_outletClassMap * p = (const cMapElement_outletClassMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_outletClassMap) ;
  return p->mProperty_mHandlesRunAction ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_outletClassMap::current_mHandlesTableValueBinding (LOCATION_ARGS) const {
  const cMapElement_outletClassMap * p = (const cMapElement_outletClassMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_outletClassMap) ;
  return p->mProperty_mHandlesTableValueBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_outletClassMap::current_mHandleEnabledBinding (LOCATION_ARGS) const {
  const cMapElement_outletClassMap * p = (const cMapElement_outletClassMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_outletClassMap) ;
  return p->mProperty_mHandleEnabledBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_outletClassMap::current_mHandleHiddenBinding (LOCATION_ARGS) const {
  const cMapElement_outletClassMap * p = (const cMapElement_outletClassMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_outletClassMap) ;
  return p->mProperty_mHandleHiddenBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_outletClassMap::current_mHandleGraphicControllerBinding (LOCATION_ARGS) const {
  const cMapElement_outletClassMap * p = (const cMapElement_outletClassMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_outletClassMap) ;
  return p->mProperty_mHandleGraphicControllerBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_outletClassMap::current_mUserDefined (LOCATION_ARGS) const {
  const cMapElement_outletClassMap * p = (const cMapElement_outletClassMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_outletClassMap) ;
  return p->mProperty_mUserDefined ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @outletClassMap type                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletClassMap ("outletClassMap",
                                       NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_outletClassMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_outletClassMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletClassMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassMap GALGAS_outletClassMap::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_outletClassMap result ;
  const GALGAS_outletClassMap * p = (const GALGAS_outletClassMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletClassMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletClassMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_bindingSpecificationMap::cMapElement_bindingSpecificationMap (const GALGAS_lstring & inKey,
                                                                          const GALGAS_lstring & in_mOutletSuperClassName,
                                                                          const GALGAS_outletBindingSpecificationMap & in_mBindingMap
                                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mOutletSuperClassName (in_mOutletSuperClassName),
mProperty_mBindingMap (in_mBindingMap) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_bindingSpecificationMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mOutletSuperClassName.isValid () && mProperty_mBindingMap.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_bindingSpecificationMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_bindingSpecificationMap (mProperty_lkey, mProperty_mOutletSuperClassName, mProperty_mBindingMap COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_bindingSpecificationMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOutletSuperClassName" ":" ;
  mProperty_mOutletSuperClassName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBindingMap" ":" ;
  mProperty_mBindingMap.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_bindingSpecificationMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_bindingSpecificationMap * operand = (cMapElement_bindingSpecificationMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mOutletSuperClassName.objectCompare (operand->mProperty_mOutletSuperClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBindingMap.objectCompare (operand->mProperty_mBindingMap) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingSpecificationMap::GALGAS_bindingSpecificationMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingSpecificationMap::GALGAS_bindingSpecificationMap (const GALGAS_bindingSpecificationMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingSpecificationMap & GALGAS_bindingSpecificationMap::operator = (const GALGAS_bindingSpecificationMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingSpecificationMap GALGAS_bindingSpecificationMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_bindingSpecificationMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingSpecificationMap GALGAS_bindingSpecificationMap::constructor_mapWithMapToOverride (const GALGAS_bindingSpecificationMap & inMapToOverride
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_bindingSpecificationMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingSpecificationMap GALGAS_bindingSpecificationMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_bindingSpecificationMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_bindingSpecificationMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                          const GALGAS_lstring & inArgument0,
                                                          const GALGAS_outletBindingSpecificationMap & inArgument1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cMapElement_bindingSpecificationMap * p = NULL ;
  macroMyNew (p, cMapElement_bindingSpecificationMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@bindingSpecificationMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_bindingSpecificationMap::setter_insertKey (GALGAS_lstring inKey,
                                                       GALGAS_lstring inArgument0,
                                                       GALGAS_outletBindingSpecificationMap inArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cMapElement_bindingSpecificationMap * p = NULL ;
  macroMyNew (p, cMapElement_bindingSpecificationMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' binding is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_bindingSpecificationMap_searchKey = "there is no '%K' binding" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_bindingSpecificationMap::method_searchKey (GALGAS_lstring inKey,
                                                       GALGAS_lstring & outArgument0,
                                                       GALGAS_outletBindingSpecificationMap & outArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cMapElement_bindingSpecificationMap * p = (const cMapElement_bindingSpecificationMap *) performSearch (inKey,
                                                                                                               inCompiler,
                                                                                                               kSearchErrorMessage_bindingSpecificationMap_searchKey
                                                                                                               COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_bindingSpecificationMap) ;
    outArgument0 = p->mProperty_mOutletSuperClassName ;
    outArgument1 = p->mProperty_mBindingMap ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_bindingSpecificationMap::setter_removeKey (GALGAS_lstring inKey,
                                                       GALGAS_lstring & outArgument0,
                                                       GALGAS_outletBindingSpecificationMap & outArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  const char * kRemoveErrorMessage = "there is no '%K' binding" ;
  capCollectionElement attributes ;
  performRemove (inKey, attributes, inCompiler, kRemoveErrorMessage COMMA_THERE) ;
  cMapElement_bindingSpecificationMap * p = (cMapElement_bindingSpecificationMap *) attributes.ptr () ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_bindingSpecificationMap) ;
    outArgument0 = p->mProperty_mOutletSuperClassName ;
    outArgument1 = p->mProperty_mBindingMap ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_bindingSpecificationMap::getter_mOutletSuperClassNameForKey (const GALGAS_string & inKey,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_bindingSpecificationMap * p = (const cMapElement_bindingSpecificationMap *) attributes ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_bindingSpecificationMap) ;
    result = p->mProperty_mOutletSuperClassName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationMap GALGAS_bindingSpecificationMap::getter_mBindingMapForKey (const GALGAS_string & inKey,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_bindingSpecificationMap * p = (const cMapElement_bindingSpecificationMap *) attributes ;
  GALGAS_outletBindingSpecificationMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_bindingSpecificationMap) ;
    result = p->mProperty_mBindingMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_bindingSpecificationMap::setter_setMOutletSuperClassNameForKey (GALGAS_lstring inAttributeValue,
                                                                            GALGAS_string inKey,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_bindingSpecificationMap * p = (cMapElement_bindingSpecificationMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_bindingSpecificationMap) ;
    p->mProperty_mOutletSuperClassName = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_bindingSpecificationMap::setter_setMBindingMapForKey (GALGAS_outletBindingSpecificationMap inAttributeValue,
                                                                  GALGAS_string inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_bindingSpecificationMap * p = (cMapElement_bindingSpecificationMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_bindingSpecificationMap) ;
    p->mProperty_mBindingMap = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_bindingSpecificationMap * GALGAS_bindingSpecificationMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                         const GALGAS_string & inKey
                                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_bindingSpecificationMap * result = (cMapElement_bindingSpecificationMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_bindingSpecificationMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_bindingSpecificationMap::cEnumerator_bindingSpecificationMap (const GALGAS_bindingSpecificationMap & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingSpecificationMap_2D_element cEnumerator_bindingSpecificationMap::current (LOCATION_ARGS) const {
  const cMapElement_bindingSpecificationMap * p = (const cMapElement_bindingSpecificationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_bindingSpecificationMap) ;
  return GALGAS_bindingSpecificationMap_2D_element (p->mProperty_lkey, p->mProperty_mOutletSuperClassName, p->mProperty_mBindingMap) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_bindingSpecificationMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_bindingSpecificationMap::current_mOutletSuperClassName (LOCATION_ARGS) const {
  const cMapElement_bindingSpecificationMap * p = (const cMapElement_bindingSpecificationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_bindingSpecificationMap) ;
  return p->mProperty_mOutletSuperClassName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationMap cEnumerator_bindingSpecificationMap::current_mBindingMap (LOCATION_ARGS) const {
  const cMapElement_bindingSpecificationMap * p = (const cMapElement_bindingSpecificationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_bindingSpecificationMap) ;
  return p->mProperty_mBindingMap ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @bindingSpecificationMap type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bindingSpecificationMap ("bindingSpecificationMap",
                                                NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_bindingSpecificationMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bindingSpecificationMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_bindingSpecificationMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bindingSpecificationMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingSpecificationMap GALGAS_bindingSpecificationMap::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_bindingSpecificationMap result ;
  const GALGAS_bindingSpecificationMap * p = (const GALGAS_bindingSpecificationMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bindingSpecificationMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bindingSpecificationMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         '@declarationPrecedenceGraph' graph                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationPrecedenceGraph::GALGAS_declarationPrecedenceGraph (void) :
AC_GALGAS_graph () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationPrecedenceGraph GALGAS_declarationPrecedenceGraph::constructor_emptyGraph (LOCATION_ARGS) {
  GALGAS_declarationPrecedenceGraph result ;
  result.makeNewEmptyGraph (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationPrecedenceGraph::setter_addNode (GALGAS_lstring inKey,
                                                        GALGAS_abstractDeclarationAST inArgument_0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  GALGAS_declarationListAST::makeAttributesFromObjects (attributes, inArgument_0 COMMA_THERE) ;
  const char * kErrorMessage = "the '%K' symbol is already declared at %L" ;
  internalAddNode (inKey, kErrorMessage, attributes, inCompiler COMMA_THERE) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationPrecedenceGraph::method_topologicalSort (GALGAS_declarationListAST & outSortedList,
                                                                GALGAS_lstringlist & outSortedKeyList,
                                                                GALGAS_declarationListAST & outUnsortedList,
                                                                GALGAS_lstringlist & outUnsortedKeyList,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GALGAS_declarationListAST (sortedList) ;
  outUnsortedList = GALGAS_declarationListAST (unsortedList) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationPrecedenceGraph::method_depthFirstTopologicalSort (GALGAS_declarationListAST & outSortedList,
                                                                          GALGAS_lstringlist & outSortedKeyList,
                                                                          GALGAS_declarationListAST & outUnsortedList,
                                                                          GALGAS_lstringlist & outUnsortedKeyList,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GALGAS_declarationListAST (sortedList) ;
  outUnsortedList = GALGAS_declarationListAST (unsortedList) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationPrecedenceGraph GALGAS_declarationPrecedenceGraph::getter_reversedGraph (LOCATION_ARGS) const {
  GALGAS_declarationPrecedenceGraph result ;
  result.reversedGraphFromGraph (*this COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationPrecedenceGraph::method_circularities (GALGAS_declarationListAST & outInfoList,
                                                              GALGAS_lstringlist & outKeyList
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_declarationListAST (infoList) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationPrecedenceGraph::method_nodesWithNoSuccessor (GALGAS_declarationListAST & outInfoList,
                                                                     GALGAS_lstringlist & outKeyList
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_declarationListAST (infoList) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationPrecedenceGraph::method_nodesWithNoPredecessor (GALGAS_declarationListAST & outInfoList,
                                                                       GALGAS_lstringlist & outKeyList
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_declarationListAST (infoList) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationPrecedenceGraph GALGAS_declarationPrecedenceGraph::getter_subgraphFromNodes (const GALGAS_lstringlist & inStartKeyList,
                                                                                               const GALGAS_stringset & inKeysToExclude,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_declarationPrecedenceGraph result ;
  subGraph (result, inStartKeyList, inKeysToExclude, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_declarationPrecedenceGraph::getter_accessibleNodesFrom (const GALGAS_lstringlist & inStartKeyList,
                                                                                  const GALGAS_stringset & inNodesToExclude,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  GALGAS_declarationPrecedenceGraph resultingGraph ;
  subGraph (resultingGraph,
            inStartKeyList,
            inNodesToExclude,
            inCompiler
            COMMA_THERE) ;
  if (resultingGraph.isValid ()) {
    result = resultingGraph.getter_lkeyList (THERE) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @declarationPrecedenceGraph type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_declarationPrecedenceGraph ("declarationPrecedenceGraph",
                                                   NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_declarationPrecedenceGraph::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declarationPrecedenceGraph ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_declarationPrecedenceGraph::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_declarationPrecedenceGraph (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationPrecedenceGraph GALGAS_declarationPrecedenceGraph::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_declarationPrecedenceGraph result ;
  const GALGAS_declarationPrecedenceGraph * p = (const GALGAS_declarationPrecedenceGraph *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_declarationPrecedenceGraph *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declarationPrecedenceGraph", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Class for element of '@externSwiftDelegateList' list                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_externSwiftDelegateList : public cCollectionElement {
  public : GALGAS_externSwiftDelegateList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_externSwiftDelegateList (const GALGAS_lstring & in_mExternSwiftDelegateName
                                                       COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_externSwiftDelegateList (const GALGAS_externSwiftDelegateList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_externSwiftDelegateList::cCollectionElement_externSwiftDelegateList (const GALGAS_externSwiftDelegateList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mExternSwiftDelegateName) {
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

void GALGAS_externSwiftDelegateList::setter_append (GALGAS_externSwiftDelegateList_2D_element inElement,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_externSwiftDelegateList (inElement COMMA_THERE)) ;
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

//--- Constructors
  public : cCollectionElement_externSwiftFunctionList (const GALGAS_lstring & in_mExternSwiftFunctionName,
                                                       const GALGAS_lstring & in_mCallerName
                                                       COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_externSwiftFunctionList (const GALGAS_externSwiftFunctionList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_externSwiftFunctionList::cCollectionElement_externSwiftFunctionList (const GALGAS_externSwiftFunctionList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mExternSwiftFunctionName, inElement.mProperty_mCallerName) {
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

void GALGAS_externSwiftFunctionList::setter_append (GALGAS_externSwiftFunctionList_2D_element inElement,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_externSwiftFunctionList (inElement COMMA_THERE)) ;
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
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*



typeComparisonResult GALGAS_abstractFileGeneration::objectCompare (const GALGAS_abstractFileGeneration & inOperand) const {
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

GALGAS_abstractFileGeneration::GALGAS_abstractFileGeneration (void) :
AC_GALGAS_class (false) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractFileGeneration::GALGAS_abstractFileGeneration (const cPtr_abstractFileGeneration * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractFileGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @abstractFileGeneration class                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_abstractFileGeneration::cPtr_abstractFileGeneration (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @abstractFileGeneration type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractFileGeneration ("abstractFileGeneration",
                                               NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_abstractFileGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractFileGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_abstractFileGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractFileGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractFileGeneration GALGAS_abstractFileGeneration::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_abstractFileGeneration result ;
  const GALGAS_abstractFileGeneration * p = (const GALGAS_abstractFileGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractFileGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractFileGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

cEnumAssociatedValues_typeKind_entityType::cEnumAssociatedValues_typeKind_entityType (const GALGAS_string & inAssociatedValue0,
                                                                                      const GALGAS_bool & inAssociatedValue1
                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_typeKind_entityType::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
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
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
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

GALGAS_typeKind GALGAS_typeKind::constructor_dataType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_dataType ;
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

GALGAS_typeKind GALGAS_typeKind::constructor_colorType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_colorType ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_typeKind::constructor_bezierPathType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_bezierPathType ;
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

GALGAS_typeKind GALGAS_typeKind::constructor_entityType (const GALGAS_string & inAssociatedValue0,
                                                         const GALGAS_bool & inAssociatedValue1
                                                         COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_entityType ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_entityType (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
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
                                         GALGAS_bool & outAssociatedValue1,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_entityType) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @typeKind entityType invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_entityType * ptr = (const cEnumAssociatedValues_typeKind_entityType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
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

static const char * gEnumNameArrayFor_typeKind [14] = {
  "(not built)",
  "boolType",
  "integerType",
  "doubleType",
  "stringType",
  "dataType",
  "dateType",
  "fontType",
  "colorType",
  "bezierPathType",
  "enumType",
  "entityType",
  "classType",
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

GALGAS_bool GALGAS_typeKind::getter_isDataType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_dataType == mEnum) ;
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

GALGAS_bool GALGAS_typeKind::getter_isColorType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_colorType == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_typeKind::getter_isBezierPathType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_bezierPathType == mEnum) ;
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
//                                                                                                                     *
//                                Class for element of '@simpleStoredPropertyList' list                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_simpleStoredPropertyList : public cCollectionElement {
  public : GALGAS_simpleStoredPropertyList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_simpleStoredPropertyList (const GALGAS_lstring & in_mPropertyTypeName,
                                                        const GALGAS_lstring & in_mPropertyName,
                                                        const GALGAS_abstractDefaultValue & in_mDefaultValue,
                                                        const GALGAS_bool & in_mNeedsValidation
                                                        COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_simpleStoredPropertyList (const GALGAS_simpleStoredPropertyList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_simpleStoredPropertyList::cCollectionElement_simpleStoredPropertyList (const GALGAS_simpleStoredPropertyList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mPropertyTypeName, inElement.mProperty_mPropertyName, inElement.mProperty_mDefaultValue, inElement.mProperty_mNeedsValidation) {
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

void GALGAS_simpleStoredPropertyList::setter_append (GALGAS_simpleStoredPropertyList_2D_element inElement,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_simpleStoredPropertyList (inElement COMMA_THERE)) ;
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
//                                 Class for element of '@propertyGenerationList' list                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_propertyGenerationList : public cCollectionElement {
  public : GALGAS_propertyGenerationList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_propertyGenerationList (const GALGAS_propertyGeneration & in_mProperty
                                                      COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_propertyGenerationList (const GALGAS_propertyGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_propertyGenerationList::cCollectionElement_propertyGenerationList (const GALGAS_propertyGeneration & in_mProperty
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mProperty) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_propertyGenerationList::cCollectionElement_propertyGenerationList (const GALGAS_propertyGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mProperty) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_propertyGenerationList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_propertyGenerationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_propertyGenerationList (mObject.mProperty_mProperty COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_propertyGenerationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProperty" ":" ;
  mObject.mProperty_mProperty.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_propertyGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_propertyGenerationList * operand = (cCollectionElement_propertyGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_propertyGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyGenerationList::GALGAS_propertyGenerationList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyGenerationList::GALGAS_propertyGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyGenerationList GALGAS_propertyGenerationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_propertyGenerationList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyGenerationList GALGAS_propertyGenerationList::constructor_listWithValue (const GALGAS_propertyGeneration & inOperand0
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_propertyGenerationList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_propertyGenerationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_propertyGenerationList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_propertyGeneration & in_mProperty
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_propertyGenerationList * p = NULL ;
  macroMyNew (p, cCollectionElement_propertyGenerationList (in_mProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyGenerationList::addAssign_operation (const GALGAS_propertyGeneration & inOperand0
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_propertyGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyGenerationList::setter_append (GALGAS_propertyGenerationList_2D_element inElement,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_propertyGenerationList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyGenerationList::setter_insertAtIndex (const GALGAS_propertyGeneration inOperand0,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_propertyGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyGenerationList::setter_removeAtIndex (GALGAS_propertyGeneration & outOperand0,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_propertyGenerationList * p = (cCollectionElement_propertyGenerationList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_propertyGenerationList) ;
      outOperand0 = p->mObject.mProperty_mProperty ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyGenerationList::setter_popFirst (GALGAS_propertyGeneration & outOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyGenerationList * p = (cCollectionElement_propertyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyGenerationList::setter_popLast (GALGAS_propertyGeneration & outOperand0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyGenerationList * p = (cCollectionElement_propertyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyGenerationList::method_first (GALGAS_propertyGeneration & outOperand0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyGenerationList * p = (cCollectionElement_propertyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyGenerationList::method_last (GALGAS_propertyGeneration & outOperand0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyGenerationList * p = (cCollectionElement_propertyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyGenerationList GALGAS_propertyGenerationList::add_operation (const GALGAS_propertyGenerationList & inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyGenerationList GALGAS_propertyGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_propertyGenerationList result = GALGAS_propertyGenerationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyGenerationList GALGAS_propertyGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_propertyGenerationList result = GALGAS_propertyGenerationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyGenerationList GALGAS_propertyGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_propertyGenerationList result = GALGAS_propertyGenerationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyGenerationList::plusAssign_operation (const GALGAS_propertyGenerationList inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyGeneration GALGAS_propertyGenerationList::getter_mPropertyAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyGenerationList * p = (cCollectionElement_propertyGenerationList *) attributes.ptr () ;
  GALGAS_propertyGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_propertyGenerationList) ;
    result = p->mObject.mProperty_mProperty ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_propertyGenerationList::cEnumerator_propertyGenerationList (const GALGAS_propertyGenerationList & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyGenerationList_2D_element cEnumerator_propertyGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_propertyGenerationList * p = (const cCollectionElement_propertyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_propertyGenerationList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyGeneration cEnumerator_propertyGenerationList::current_mProperty (LOCATION_ARGS) const {
  const cCollectionElement_propertyGenerationList * p = (const cCollectionElement_propertyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_propertyGenerationList) ;
  return p->mObject.mProperty_mProperty ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @propertyGenerationList type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyGenerationList ("propertyGenerationList",
                                               NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_propertyGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_propertyGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyGenerationList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyGenerationList GALGAS_propertyGenerationList::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_propertyGenerationList result ;
  const GALGAS_propertyGenerationList * p = (const GALGAS_propertyGenerationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Class for element of '@entityListForGeneratingEBManagedObjectContext' list                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_entityListForGeneratingEBManagedObjectContext : public cCollectionElement {
  public : GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_entityListForGeneratingEBManagedObjectContext (const GALGAS_string & in_mEntityName,
                                                                             const GALGAS_lstringlist & in_mObsoleteEntityNames
                                                                             COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_entityListForGeneratingEBManagedObjectContext (const GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_entityListForGeneratingEBManagedObjectContext::cCollectionElement_entityListForGeneratingEBManagedObjectContext (const GALGAS_string & in_mEntityName,
                                                                                                                                    const GALGAS_lstringlist & in_mObsoleteEntityNames
                                                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEntityName, in_mObsoleteEntityNames) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_entityListForGeneratingEBManagedObjectContext::cCollectionElement_entityListForGeneratingEBManagedObjectContext (const GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mEntityName, inElement.mProperty_mObsoleteEntityNames) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_entityListForGeneratingEBManagedObjectContext::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_entityListForGeneratingEBManagedObjectContext::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_entityListForGeneratingEBManagedObjectContext (mObject.mProperty_mEntityName, mObject.mProperty_mObsoleteEntityNames COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_entityListForGeneratingEBManagedObjectContext::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEntityName" ":" ;
  mObject.mProperty_mEntityName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mObsoleteEntityNames" ":" ;
  mObject.mProperty_mObsoleteEntityNames.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_entityListForGeneratingEBManagedObjectContext::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_entityListForGeneratingEBManagedObjectContext * operand = (cCollectionElement_entityListForGeneratingEBManagedObjectContext *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_entityListForGeneratingEBManagedObjectContext) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityListForGeneratingEBManagedObjectContext::GALGAS_entityListForGeneratingEBManagedObjectContext (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityListForGeneratingEBManagedObjectContext::GALGAS_entityListForGeneratingEBManagedObjectContext (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityListForGeneratingEBManagedObjectContext GALGAS_entityListForGeneratingEBManagedObjectContext::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_entityListForGeneratingEBManagedObjectContext  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityListForGeneratingEBManagedObjectContext GALGAS_entityListForGeneratingEBManagedObjectContext::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                                                      const GALGAS_lstringlist & inOperand1
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_entityListForGeneratingEBManagedObjectContext result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_entityListForGeneratingEBManagedObjectContext (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_entityListForGeneratingEBManagedObjectContext::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_entityListForGeneratingEBManagedObjectContext::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                      const GALGAS_string & in_mEntityName,
                                                                                      const GALGAS_lstringlist & in_mObsoleteEntityNames
                                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_entityListForGeneratingEBManagedObjectContext * p = NULL ;
  macroMyNew (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext (in_mEntityName,
                                                                                   in_mObsoleteEntityNames COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_entityListForGeneratingEBManagedObjectContext::addAssign_operation (const GALGAS_string & inOperand0,
                                                                                const GALGAS_lstringlist & inOperand1
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_entityListForGeneratingEBManagedObjectContext::setter_append (GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element inElement,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_entityListForGeneratingEBManagedObjectContext::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                                 const GALGAS_lstringlist inOperand1,
                                                                                 const GALGAS_uint inInsertionIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_entityListForGeneratingEBManagedObjectContext::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                                 GALGAS_lstringlist & outOperand1,
                                                                                 const GALGAS_uint inRemoveIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_entityListForGeneratingEBManagedObjectContext * p = (cCollectionElement_entityListForGeneratingEBManagedObjectContext *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext) ;
      outOperand0 = p->mObject.mProperty_mEntityName ;
      outOperand1 = p->mObject.mProperty_mObsoleteEntityNames ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_entityListForGeneratingEBManagedObjectContext::setter_popFirst (GALGAS_string & outOperand0,
                                                                            GALGAS_lstringlist & outOperand1,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_entityListForGeneratingEBManagedObjectContext * p = (cCollectionElement_entityListForGeneratingEBManagedObjectContext *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext) ;
    outOperand0 = p->mObject.mProperty_mEntityName ;
    outOperand1 = p->mObject.mProperty_mObsoleteEntityNames ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_entityListForGeneratingEBManagedObjectContext::setter_popLast (GALGAS_string & outOperand0,
                                                                           GALGAS_lstringlist & outOperand1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_entityListForGeneratingEBManagedObjectContext * p = (cCollectionElement_entityListForGeneratingEBManagedObjectContext *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext) ;
    outOperand0 = p->mObject.mProperty_mEntityName ;
    outOperand1 = p->mObject.mProperty_mObsoleteEntityNames ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_entityListForGeneratingEBManagedObjectContext::method_first (GALGAS_string & outOperand0,
                                                                         GALGAS_lstringlist & outOperand1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_entityListForGeneratingEBManagedObjectContext * p = (cCollectionElement_entityListForGeneratingEBManagedObjectContext *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext) ;
    outOperand0 = p->mObject.mProperty_mEntityName ;
    outOperand1 = p->mObject.mProperty_mObsoleteEntityNames ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_entityListForGeneratingEBManagedObjectContext::method_last (GALGAS_string & outOperand0,
                                                                        GALGAS_lstringlist & outOperand1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_entityListForGeneratingEBManagedObjectContext * p = (cCollectionElement_entityListForGeneratingEBManagedObjectContext *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext) ;
    outOperand0 = p->mObject.mProperty_mEntityName ;
    outOperand1 = p->mObject.mProperty_mObsoleteEntityNames ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityListForGeneratingEBManagedObjectContext GALGAS_entityListForGeneratingEBManagedObjectContext::add_operation (const GALGAS_entityListForGeneratingEBManagedObjectContext & inOperand,
                                                                                                                          C_Compiler * /* inCompiler */
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_entityListForGeneratingEBManagedObjectContext result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityListForGeneratingEBManagedObjectContext GALGAS_entityListForGeneratingEBManagedObjectContext::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_entityListForGeneratingEBManagedObjectContext result = GALGAS_entityListForGeneratingEBManagedObjectContext::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityListForGeneratingEBManagedObjectContext GALGAS_entityListForGeneratingEBManagedObjectContext::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_entityListForGeneratingEBManagedObjectContext result = GALGAS_entityListForGeneratingEBManagedObjectContext::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityListForGeneratingEBManagedObjectContext GALGAS_entityListForGeneratingEBManagedObjectContext::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_entityListForGeneratingEBManagedObjectContext result = GALGAS_entityListForGeneratingEBManagedObjectContext::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_entityListForGeneratingEBManagedObjectContext::plusAssign_operation (const GALGAS_entityListForGeneratingEBManagedObjectContext inOperand,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_entityListForGeneratingEBManagedObjectContext::getter_mEntityNameAtIndex (const GALGAS_uint & inIndex,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_entityListForGeneratingEBManagedObjectContext * p = (cCollectionElement_entityListForGeneratingEBManagedObjectContext *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext) ;
    result = p->mObject.mProperty_mEntityName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_entityListForGeneratingEBManagedObjectContext::getter_mObsoleteEntityNamesAtIndex (const GALGAS_uint & inIndex,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_entityListForGeneratingEBManagedObjectContext * p = (cCollectionElement_entityListForGeneratingEBManagedObjectContext *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext) ;
    result = p->mObject.mProperty_mObsoleteEntityNames ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_entityListForGeneratingEBManagedObjectContext::cEnumerator_entityListForGeneratingEBManagedObjectContext (const GALGAS_entityListForGeneratingEBManagedObjectContext & inEnumeratedObject,
                                                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element cEnumerator_entityListForGeneratingEBManagedObjectContext::current (LOCATION_ARGS) const {
  const cCollectionElement_entityListForGeneratingEBManagedObjectContext * p = (const cCollectionElement_entityListForGeneratingEBManagedObjectContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_entityListForGeneratingEBManagedObjectContext::current_mEntityName (LOCATION_ARGS) const {
  const cCollectionElement_entityListForGeneratingEBManagedObjectContext * p = (const cCollectionElement_entityListForGeneratingEBManagedObjectContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext) ;
  return p->mObject.mProperty_mEntityName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cEnumerator_entityListForGeneratingEBManagedObjectContext::current_mObsoleteEntityNames (LOCATION_ARGS) const {
  const cCollectionElement_entityListForGeneratingEBManagedObjectContext * p = (const cCollectionElement_entityListForGeneratingEBManagedObjectContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext) ;
  return p->mObject.mProperty_mObsoleteEntityNames ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 @entityListForGeneratingEBManagedObjectContext type                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_entityListForGeneratingEBManagedObjectContext ("entityListForGeneratingEBManagedObjectContext",
                                                                      NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_entityListForGeneratingEBManagedObjectContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityListForGeneratingEBManagedObjectContext ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_entityListForGeneratingEBManagedObjectContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_entityListForGeneratingEBManagedObjectContext (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityListForGeneratingEBManagedObjectContext GALGAS_entityListForGeneratingEBManagedObjectContext::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_entityListForGeneratingEBManagedObjectContext result ;
  const GALGAS_entityListForGeneratingEBManagedObjectContext * p = (const GALGAS_entityListForGeneratingEBManagedObjectContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_entityListForGeneratingEBManagedObjectContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityListForGeneratingEBManagedObjectContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Class for element of '@outletDeclarationList' list                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_outletDeclarationList : public cCollectionElement {
  public : GALGAS_outletDeclarationList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_outletDeclarationList (const GALGAS_lstring & in_mOutletTypeName,
                                                     const GALGAS_lstring & in_mOutletName,
                                                     const GALGAS_tableValueBinding & in_mTableValueBindingDescriptor,
                                                     const GALGAS_runActionDescriptor & in_mRunDescriptor,
                                                     const GALGAS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                                     const GALGAS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                                     const GALGAS_regularBindingList & in_mRegularBindingList,
                                                     const GALGAS_graphicController & in_mGraphicController
                                                     COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_outletDeclarationList (const GALGAS_outletDeclarationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_outletDeclarationList::cCollectionElement_outletDeclarationList (const GALGAS_lstring & in_mOutletTypeName,
                                                                                    const GALGAS_lstring & in_mOutletName,
                                                                                    const GALGAS_tableValueBinding & in_mTableValueBindingDescriptor,
                                                                                    const GALGAS_runActionDescriptor & in_mRunDescriptor,
                                                                                    const GALGAS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                                                                    const GALGAS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                                                                    const GALGAS_regularBindingList & in_mRegularBindingList,
                                                                                    const GALGAS_graphicController & in_mGraphicController
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOutletTypeName, in_mOutletName, in_mTableValueBindingDescriptor, in_mRunDescriptor, in_mEnabledBindingDescriptor, in_mHiddenBindingDescriptor, in_mRegularBindingList, in_mGraphicController) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_outletDeclarationList::cCollectionElement_outletDeclarationList (const GALGAS_outletDeclarationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOutletTypeName, inElement.mProperty_mOutletName, inElement.mProperty_mTableValueBindingDescriptor, inElement.mProperty_mRunDescriptor, inElement.mProperty_mEnabledBindingDescriptor, inElement.mProperty_mHiddenBindingDescriptor, inElement.mProperty_mRegularBindingList, inElement.mProperty_mGraphicController) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_outletDeclarationList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_outletDeclarationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_outletDeclarationList (mObject.mProperty_mOutletTypeName, mObject.mProperty_mOutletName, mObject.mProperty_mTableValueBindingDescriptor, mObject.mProperty_mRunDescriptor, mObject.mProperty_mEnabledBindingDescriptor, mObject.mProperty_mHiddenBindingDescriptor, mObject.mProperty_mRegularBindingList, mObject.mProperty_mGraphicController COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_outletDeclarationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOutletTypeName" ":" ;
  mObject.mProperty_mOutletTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOutletName" ":" ;
  mObject.mProperty_mOutletName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTableValueBindingDescriptor" ":" ;
  mObject.mProperty_mTableValueBindingDescriptor.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRunDescriptor" ":" ;
  mObject.mProperty_mRunDescriptor.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEnabledBindingDescriptor" ":" ;
  mObject.mProperty_mEnabledBindingDescriptor.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHiddenBindingDescriptor" ":" ;
  mObject.mProperty_mHiddenBindingDescriptor.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegularBindingList" ":" ;
  mObject.mProperty_mRegularBindingList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGraphicController" ":" ;
  mObject.mProperty_mGraphicController.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_outletDeclarationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_outletDeclarationList * operand = (cCollectionElement_outletDeclarationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_outletDeclarationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletDeclarationList::GALGAS_outletDeclarationList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletDeclarationList::GALGAS_outletDeclarationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletDeclarationList GALGAS_outletDeclarationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_outletDeclarationList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletDeclarationList GALGAS_outletDeclarationList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_lstring & inOperand1,
                                                                                      const GALGAS_tableValueBinding & inOperand2,
                                                                                      const GALGAS_runActionDescriptor & inOperand3,
                                                                                      const GALGAS_multipleBindingDescriptor & inOperand4,
                                                                                      const GALGAS_multipleBindingDescriptor & inOperand5,
                                                                                      const GALGAS_regularBindingList & inOperand6,
                                                                                      const GALGAS_graphicController & inOperand7
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_outletDeclarationList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_outletDeclarationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_outletDeclarationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletDeclarationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GALGAS_lstring & in_mOutletTypeName,
                                                              const GALGAS_lstring & in_mOutletName,
                                                              const GALGAS_tableValueBinding & in_mTableValueBindingDescriptor,
                                                              const GALGAS_runActionDescriptor & in_mRunDescriptor,
                                                              const GALGAS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                                              const GALGAS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                                              const GALGAS_regularBindingList & in_mRegularBindingList,
                                                              const GALGAS_graphicController & in_mGraphicController
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_outletDeclarationList * p = NULL ;
  macroMyNew (p, cCollectionElement_outletDeclarationList (in_mOutletTypeName,
                                                           in_mOutletName,
                                                           in_mTableValueBindingDescriptor,
                                                           in_mRunDescriptor,
                                                           in_mEnabledBindingDescriptor,
                                                           in_mHiddenBindingDescriptor,
                                                           in_mRegularBindingList,
                                                           in_mGraphicController COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletDeclarationList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                        const GALGAS_lstring & inOperand1,
                                                        const GALGAS_tableValueBinding & inOperand2,
                                                        const GALGAS_runActionDescriptor & inOperand3,
                                                        const GALGAS_multipleBindingDescriptor & inOperand4,
                                                        const GALGAS_multipleBindingDescriptor & inOperand5,
                                                        const GALGAS_regularBindingList & inOperand6,
                                                        const GALGAS_graphicController & inOperand7
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_outletDeclarationList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletDeclarationList::setter_append (GALGAS_outletDeclarationList_2D_element inElement,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_outletDeclarationList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletDeclarationList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                         const GALGAS_lstring inOperand1,
                                                         const GALGAS_tableValueBinding inOperand2,
                                                         const GALGAS_runActionDescriptor inOperand3,
                                                         const GALGAS_multipleBindingDescriptor inOperand4,
                                                         const GALGAS_multipleBindingDescriptor inOperand5,
                                                         const GALGAS_regularBindingList inOperand6,
                                                         const GALGAS_graphicController inOperand7,
                                                         const GALGAS_uint inInsertionIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_outletDeclarationList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletDeclarationList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         GALGAS_tableValueBinding & outOperand2,
                                                         GALGAS_runActionDescriptor & outOperand3,
                                                         GALGAS_multipleBindingDescriptor & outOperand4,
                                                         GALGAS_multipleBindingDescriptor & outOperand5,
                                                         GALGAS_regularBindingList & outOperand6,
                                                         GALGAS_graphicController & outOperand7,
                                                         const GALGAS_uint inRemoveIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
      outOperand6.drop () ;
      outOperand7.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
      outOperand0 = p->mObject.mProperty_mOutletTypeName ;
      outOperand1 = p->mObject.mProperty_mOutletName ;
      outOperand2 = p->mObject.mProperty_mTableValueBindingDescriptor ;
      outOperand3 = p->mObject.mProperty_mRunDescriptor ;
      outOperand4 = p->mObject.mProperty_mEnabledBindingDescriptor ;
      outOperand5 = p->mObject.mProperty_mHiddenBindingDescriptor ;
      outOperand6 = p->mObject.mProperty_mRegularBindingList ;
      outOperand7 = p->mObject.mProperty_mGraphicController ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletDeclarationList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    GALGAS_tableValueBinding & outOperand2,
                                                    GALGAS_runActionDescriptor & outOperand3,
                                                    GALGAS_multipleBindingDescriptor & outOperand4,
                                                    GALGAS_multipleBindingDescriptor & outOperand5,
                                                    GALGAS_regularBindingList & outOperand6,
                                                    GALGAS_graphicController & outOperand7,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mOutletTypeName ;
    outOperand1 = p->mObject.mProperty_mOutletName ;
    outOperand2 = p->mObject.mProperty_mTableValueBindingDescriptor ;
    outOperand3 = p->mObject.mProperty_mRunDescriptor ;
    outOperand4 = p->mObject.mProperty_mEnabledBindingDescriptor ;
    outOperand5 = p->mObject.mProperty_mHiddenBindingDescriptor ;
    outOperand6 = p->mObject.mProperty_mRegularBindingList ;
    outOperand7 = p->mObject.mProperty_mGraphicController ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletDeclarationList::setter_popLast (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   GALGAS_tableValueBinding & outOperand2,
                                                   GALGAS_runActionDescriptor & outOperand3,
                                                   GALGAS_multipleBindingDescriptor & outOperand4,
                                                   GALGAS_multipleBindingDescriptor & outOperand5,
                                                   GALGAS_regularBindingList & outOperand6,
                                                   GALGAS_graphicController & outOperand7,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mOutletTypeName ;
    outOperand1 = p->mObject.mProperty_mOutletName ;
    outOperand2 = p->mObject.mProperty_mTableValueBindingDescriptor ;
    outOperand3 = p->mObject.mProperty_mRunDescriptor ;
    outOperand4 = p->mObject.mProperty_mEnabledBindingDescriptor ;
    outOperand5 = p->mObject.mProperty_mHiddenBindingDescriptor ;
    outOperand6 = p->mObject.mProperty_mRegularBindingList ;
    outOperand7 = p->mObject.mProperty_mGraphicController ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletDeclarationList::method_first (GALGAS_lstring & outOperand0,
                                                 GALGAS_lstring & outOperand1,
                                                 GALGAS_tableValueBinding & outOperand2,
                                                 GALGAS_runActionDescriptor & outOperand3,
                                                 GALGAS_multipleBindingDescriptor & outOperand4,
                                                 GALGAS_multipleBindingDescriptor & outOperand5,
                                                 GALGAS_regularBindingList & outOperand6,
                                                 GALGAS_graphicController & outOperand7,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mOutletTypeName ;
    outOperand1 = p->mObject.mProperty_mOutletName ;
    outOperand2 = p->mObject.mProperty_mTableValueBindingDescriptor ;
    outOperand3 = p->mObject.mProperty_mRunDescriptor ;
    outOperand4 = p->mObject.mProperty_mEnabledBindingDescriptor ;
    outOperand5 = p->mObject.mProperty_mHiddenBindingDescriptor ;
    outOperand6 = p->mObject.mProperty_mRegularBindingList ;
    outOperand7 = p->mObject.mProperty_mGraphicController ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletDeclarationList::method_last (GALGAS_lstring & outOperand0,
                                                GALGAS_lstring & outOperand1,
                                                GALGAS_tableValueBinding & outOperand2,
                                                GALGAS_runActionDescriptor & outOperand3,
                                                GALGAS_multipleBindingDescriptor & outOperand4,
                                                GALGAS_multipleBindingDescriptor & outOperand5,
                                                GALGAS_regularBindingList & outOperand6,
                                                GALGAS_graphicController & outOperand7,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mOutletTypeName ;
    outOperand1 = p->mObject.mProperty_mOutletName ;
    outOperand2 = p->mObject.mProperty_mTableValueBindingDescriptor ;
    outOperand3 = p->mObject.mProperty_mRunDescriptor ;
    outOperand4 = p->mObject.mProperty_mEnabledBindingDescriptor ;
    outOperand5 = p->mObject.mProperty_mHiddenBindingDescriptor ;
    outOperand6 = p->mObject.mProperty_mRegularBindingList ;
    outOperand7 = p->mObject.mProperty_mGraphicController ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletDeclarationList GALGAS_outletDeclarationList::add_operation (const GALGAS_outletDeclarationList & inOperand,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_outletDeclarationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletDeclarationList GALGAS_outletDeclarationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_outletDeclarationList result = GALGAS_outletDeclarationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletDeclarationList GALGAS_outletDeclarationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_outletDeclarationList result = GALGAS_outletDeclarationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletDeclarationList GALGAS_outletDeclarationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_outletDeclarationList result = GALGAS_outletDeclarationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletDeclarationList::plusAssign_operation (const GALGAS_outletDeclarationList inOperand,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_outletDeclarationList::getter_mOutletTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    result = p->mObject.mProperty_mOutletTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_outletDeclarationList::getter_mOutletNameAtIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    result = p->mObject.mProperty_mOutletName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableValueBinding GALGAS_outletDeclarationList::getter_mTableValueBindingDescriptorAtIndex (const GALGAS_uint & inIndex,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  GALGAS_tableValueBinding result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    result = p->mObject.mProperty_mTableValueBindingDescriptor ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_runActionDescriptor GALGAS_outletDeclarationList::getter_mRunDescriptorAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  GALGAS_runActionDescriptor result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    result = p->mObject.mProperty_mRunDescriptor ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingDescriptor GALGAS_outletDeclarationList::getter_mEnabledBindingDescriptorAtIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  GALGAS_multipleBindingDescriptor result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    result = p->mObject.mProperty_mEnabledBindingDescriptor ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingDescriptor GALGAS_outletDeclarationList::getter_mHiddenBindingDescriptorAtIndex (const GALGAS_uint & inIndex,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  GALGAS_multipleBindingDescriptor result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    result = p->mObject.mProperty_mHiddenBindingDescriptor ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingList GALGAS_outletDeclarationList::getter_mRegularBindingListAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  GALGAS_regularBindingList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    result = p->mObject.mProperty_mRegularBindingList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_graphicController GALGAS_outletDeclarationList::getter_mGraphicControllerAtIndex (const GALGAS_uint & inIndex,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  GALGAS_graphicController result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    result = p->mObject.mProperty_mGraphicController ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_outletDeclarationList::cEnumerator_outletDeclarationList (const GALGAS_outletDeclarationList & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletDeclarationList_2D_element cEnumerator_outletDeclarationList::current (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_outletDeclarationList::current_mOutletTypeName (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject.mProperty_mOutletTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_outletDeclarationList::current_mOutletName (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject.mProperty_mOutletName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableValueBinding cEnumerator_outletDeclarationList::current_mTableValueBindingDescriptor (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject.mProperty_mTableValueBindingDescriptor ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_runActionDescriptor cEnumerator_outletDeclarationList::current_mRunDescriptor (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject.mProperty_mRunDescriptor ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingDescriptor cEnumerator_outletDeclarationList::current_mEnabledBindingDescriptor (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject.mProperty_mEnabledBindingDescriptor ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingDescriptor cEnumerator_outletDeclarationList::current_mHiddenBindingDescriptor (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject.mProperty_mHiddenBindingDescriptor ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingList cEnumerator_outletDeclarationList::current_mRegularBindingList (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject.mProperty_mRegularBindingList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_graphicController cEnumerator_outletDeclarationList::current_mGraphicController (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject.mProperty_mGraphicController ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @outletDeclarationList type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletDeclarationList ("outletDeclarationList",
                                              NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_outletDeclarationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletDeclarationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_outletDeclarationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletDeclarationList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletDeclarationList GALGAS_outletDeclarationList::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_outletDeclarationList result ;
  const GALGAS_outletDeclarationList * p = (const GALGAS_outletDeclarationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletDeclarationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletDeclarationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_decoratedOutletMap::cMapElement_decoratedOutletMap (const GALGAS_lstring & inKey,
                                                                const GALGAS_string & in_mOutletTypeName
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mOutletTypeName (in_mOutletTypeName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_decoratedOutletMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mOutletTypeName.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_decoratedOutletMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_decoratedOutletMap (mProperty_lkey, mProperty_mOutletTypeName COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_decoratedOutletMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOutletTypeName" ":" ;
  mProperty_mOutletTypeName.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_decoratedOutletMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_decoratedOutletMap * operand = (cMapElement_decoratedOutletMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mOutletTypeName.objectCompare (operand->mProperty_mOutletTypeName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedOutletMap::GALGAS_decoratedOutletMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedOutletMap::GALGAS_decoratedOutletMap (const GALGAS_decoratedOutletMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedOutletMap & GALGAS_decoratedOutletMap::operator = (const GALGAS_decoratedOutletMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedOutletMap GALGAS_decoratedOutletMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_decoratedOutletMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedOutletMap GALGAS_decoratedOutletMap::constructor_mapWithMapToOverride (const GALGAS_decoratedOutletMap & inMapToOverride
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_decoratedOutletMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedOutletMap GALGAS_decoratedOutletMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedOutletMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedOutletMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                     const GALGAS_string & inArgument0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_decoratedOutletMap * p = NULL ;
  macroMyNew (p, cMapElement_decoratedOutletMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@decoratedOutletMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedOutletMap::setter_insertKey (GALGAS_lstring inKey,
                                                  GALGAS_string inArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_decoratedOutletMap * p = NULL ;
  macroMyNew (p, cMapElement_decoratedOutletMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' outlet is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_decoratedOutletMap_searchKey = "the '%K' outlet is not declared" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedOutletMap::method_searchKey (GALGAS_lstring inKey,
                                                  GALGAS_string & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  const cMapElement_decoratedOutletMap * p = (const cMapElement_decoratedOutletMap *) performSearch (inKey,
                                                                                                     inCompiler,
                                                                                                     kSearchErrorMessage_decoratedOutletMap_searchKey
                                                                                                     COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_decoratedOutletMap) ;
    outArgument0 = p->mProperty_mOutletTypeName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_decoratedOutletMap::getter_mOutletTypeNameForKey (const GALGAS_string & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_decoratedOutletMap * p = (const cMapElement_decoratedOutletMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_decoratedOutletMap) ;
    result = p->mProperty_mOutletTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedOutletMap::setter_setMOutletTypeNameForKey (GALGAS_string inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_decoratedOutletMap * p = (cMapElement_decoratedOutletMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_decoratedOutletMap) ;
    p->mProperty_mOutletTypeName = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_decoratedOutletMap * GALGAS_decoratedOutletMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_decoratedOutletMap * result = (cMapElement_decoratedOutletMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_decoratedOutletMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_decoratedOutletMap::cEnumerator_decoratedOutletMap (const GALGAS_decoratedOutletMap & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedOutletMap_2D_element cEnumerator_decoratedOutletMap::current (LOCATION_ARGS) const {
  const cMapElement_decoratedOutletMap * p = (const cMapElement_decoratedOutletMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_decoratedOutletMap) ;
  return GALGAS_decoratedOutletMap_2D_element (p->mProperty_lkey, p->mProperty_mOutletTypeName) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_decoratedOutletMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_decoratedOutletMap::current_mOutletTypeName (LOCATION_ARGS) const {
  const cMapElement_decoratedOutletMap * p = (const cMapElement_decoratedOutletMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_decoratedOutletMap) ;
  return p->mProperty_mOutletTypeName ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @decoratedOutletMap type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedOutletMap ("decoratedOutletMap",
                                           NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_decoratedOutletMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedOutletMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_decoratedOutletMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedOutletMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedOutletMap GALGAS_decoratedOutletMap::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_decoratedOutletMap result ;
  const GALGAS_decoratedOutletMap * p = (const GALGAS_decoratedOutletMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedOutletMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedOutletMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Class for element of '@actionBindingListForGeneration' list                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_actionBindingListForGeneration : public cCollectionElement {
  public : GALGAS_actionBindingListForGeneration_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_actionBindingListForGeneration (const GALGAS_string & in_mOutletName,
                                                              const GALGAS_string & in_mTargetName,
                                                              const GALGAS_string & in_mActionName,
                                                              const GALGAS_string & in_mTargetTypeName
                                                              COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_actionBindingListForGeneration (const GALGAS_actionBindingListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_actionBindingListForGeneration::cCollectionElement_actionBindingListForGeneration (const GALGAS_string & in_mOutletName,
                                                                                                      const GALGAS_string & in_mTargetName,
                                                                                                      const GALGAS_string & in_mActionName,
                                                                                                      const GALGAS_string & in_mTargetTypeName
                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOutletName, in_mTargetName, in_mActionName, in_mTargetTypeName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_actionBindingListForGeneration::cCollectionElement_actionBindingListForGeneration (const GALGAS_actionBindingListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOutletName, inElement.mProperty_mTargetName, inElement.mProperty_mActionName, inElement.mProperty_mTargetTypeName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_actionBindingListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_actionBindingListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_actionBindingListForGeneration (mObject.mProperty_mOutletName, mObject.mProperty_mTargetName, mObject.mProperty_mActionName, mObject.mProperty_mTargetTypeName COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_actionBindingListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOutletName" ":" ;
  mObject.mProperty_mOutletName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTargetName" ":" ;
  mObject.mProperty_mTargetName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActionName" ":" ;
  mObject.mProperty_mActionName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTargetTypeName" ":" ;
  mObject.mProperty_mTargetTypeName.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_actionBindingListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_actionBindingListForGeneration * operand = (cCollectionElement_actionBindingListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_actionBindingListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionBindingListForGeneration::GALGAS_actionBindingListForGeneration (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionBindingListForGeneration::GALGAS_actionBindingListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionBindingListForGeneration GALGAS_actionBindingListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_actionBindingListForGeneration  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionBindingListForGeneration GALGAS_actionBindingListForGeneration::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                        const GALGAS_string & inOperand1,
                                                                                                        const GALGAS_string & inOperand2,
                                                                                                        const GALGAS_string & inOperand3
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_actionBindingListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_actionBindingListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_actionBindingListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_actionBindingListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                       const GALGAS_string & in_mOutletName,
                                                                       const GALGAS_string & in_mTargetName,
                                                                       const GALGAS_string & in_mActionName,
                                                                       const GALGAS_string & in_mTargetTypeName
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_actionBindingListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_actionBindingListForGeneration (in_mOutletName,
                                                                    in_mTargetName,
                                                                    in_mActionName,
                                                                    in_mTargetTypeName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_actionBindingListForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                                 const GALGAS_string & inOperand1,
                                                                 const GALGAS_string & inOperand2,
                                                                 const GALGAS_string & inOperand3
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_actionBindingListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_actionBindingListForGeneration::setter_append (GALGAS_actionBindingListForGeneration_2D_element inElement,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_actionBindingListForGeneration (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_actionBindingListForGeneration::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                  const GALGAS_string inOperand1,
                                                                  const GALGAS_string inOperand2,
                                                                  const GALGAS_string inOperand3,
                                                                  const GALGAS_uint inInsertionIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_actionBindingListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_actionBindingListForGeneration::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                  GALGAS_string & outOperand1,
                                                                  GALGAS_string & outOperand2,
                                                                  GALGAS_string & outOperand3,
                                                                  const GALGAS_uint inRemoveIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_actionBindingListForGeneration * p = (cCollectionElement_actionBindingListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mOutletName ;
      outOperand1 = p->mObject.mProperty_mTargetName ;
      outOperand2 = p->mObject.mProperty_mActionName ;
      outOperand3 = p->mObject.mProperty_mTargetTypeName ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_actionBindingListForGeneration::setter_popFirst (GALGAS_string & outOperand0,
                                                             GALGAS_string & outOperand1,
                                                             GALGAS_string & outOperand2,
                                                             GALGAS_string & outOperand3,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actionBindingListForGeneration * p = (cCollectionElement_actionBindingListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mOutletName ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mActionName ;
    outOperand3 = p->mObject.mProperty_mTargetTypeName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_actionBindingListForGeneration::setter_popLast (GALGAS_string & outOperand0,
                                                            GALGAS_string & outOperand1,
                                                            GALGAS_string & outOperand2,
                                                            GALGAS_string & outOperand3,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actionBindingListForGeneration * p = (cCollectionElement_actionBindingListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mOutletName ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mActionName ;
    outOperand3 = p->mObject.mProperty_mTargetTypeName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_actionBindingListForGeneration::method_first (GALGAS_string & outOperand0,
                                                          GALGAS_string & outOperand1,
                                                          GALGAS_string & outOperand2,
                                                          GALGAS_string & outOperand3,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actionBindingListForGeneration * p = (cCollectionElement_actionBindingListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mOutletName ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mActionName ;
    outOperand3 = p->mObject.mProperty_mTargetTypeName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_actionBindingListForGeneration::method_last (GALGAS_string & outOperand0,
                                                         GALGAS_string & outOperand1,
                                                         GALGAS_string & outOperand2,
                                                         GALGAS_string & outOperand3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actionBindingListForGeneration * p = (cCollectionElement_actionBindingListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mOutletName ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mActionName ;
    outOperand3 = p->mObject.mProperty_mTargetTypeName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionBindingListForGeneration GALGAS_actionBindingListForGeneration::add_operation (const GALGAS_actionBindingListForGeneration & inOperand,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_actionBindingListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionBindingListForGeneration GALGAS_actionBindingListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_actionBindingListForGeneration result = GALGAS_actionBindingListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionBindingListForGeneration GALGAS_actionBindingListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_actionBindingListForGeneration result = GALGAS_actionBindingListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionBindingListForGeneration GALGAS_actionBindingListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_actionBindingListForGeneration result = GALGAS_actionBindingListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_actionBindingListForGeneration::plusAssign_operation (const GALGAS_actionBindingListForGeneration inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_actionBindingListForGeneration::getter_mOutletNameAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_actionBindingListForGeneration * p = (cCollectionElement_actionBindingListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
    result = p->mObject.mProperty_mOutletName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_actionBindingListForGeneration::getter_mTargetNameAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_actionBindingListForGeneration * p = (cCollectionElement_actionBindingListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
    result = p->mObject.mProperty_mTargetName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_actionBindingListForGeneration::getter_mActionNameAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_actionBindingListForGeneration * p = (cCollectionElement_actionBindingListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
    result = p->mObject.mProperty_mActionName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_actionBindingListForGeneration::getter_mTargetTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_actionBindingListForGeneration * p = (cCollectionElement_actionBindingListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
    result = p->mObject.mProperty_mTargetTypeName ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_actionBindingListForGeneration::cEnumerator_actionBindingListForGeneration (const GALGAS_actionBindingListForGeneration & inEnumeratedObject,
                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionBindingListForGeneration_2D_element cEnumerator_actionBindingListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_actionBindingListForGeneration * p = (const cCollectionElement_actionBindingListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_actionBindingListForGeneration::current_mOutletName (LOCATION_ARGS) const {
  const cCollectionElement_actionBindingListForGeneration * p = (const cCollectionElement_actionBindingListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
  return p->mObject.mProperty_mOutletName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_actionBindingListForGeneration::current_mTargetName (LOCATION_ARGS) const {
  const cCollectionElement_actionBindingListForGeneration * p = (const cCollectionElement_actionBindingListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
  return p->mObject.mProperty_mTargetName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_actionBindingListForGeneration::current_mActionName (LOCATION_ARGS) const {
  const cCollectionElement_actionBindingListForGeneration * p = (const cCollectionElement_actionBindingListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
  return p->mObject.mProperty_mActionName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_actionBindingListForGeneration::current_mTargetTypeName (LOCATION_ARGS) const {
  const cCollectionElement_actionBindingListForGeneration * p = (const cCollectionElement_actionBindingListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
  return p->mObject.mProperty_mTargetTypeName ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @actionBindingListForGeneration type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actionBindingListForGeneration ("actionBindingListForGeneration",
                                                       NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_actionBindingListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionBindingListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_actionBindingListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actionBindingListForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionBindingListForGeneration GALGAS_actionBindingListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_actionBindingListForGeneration result ;
  const GALGAS_actionBindingListForGeneration * p = (const GALGAS_actionBindingListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_actionBindingListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actionBindingListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Class for element of '@regularBindingsGenerationList' list                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_regularBindingsGenerationList : public cCollectionElement {
  public : GALGAS_regularBindingsGenerationList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_regularBindingsGenerationList (const GALGAS_string & in_mOutletName,
                                                             const GALGAS_string & in_mBindingName,
                                                             const GALGAS_boundObjectList & in_mBoundObjectList,
                                                             const GALGAS_string & in_mBindingOptionsString
                                                             COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_regularBindingsGenerationList (const GALGAS_regularBindingsGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_regularBindingsGenerationList::cCollectionElement_regularBindingsGenerationList (const GALGAS_string & in_mOutletName,
                                                                                                    const GALGAS_string & in_mBindingName,
                                                                                                    const GALGAS_boundObjectList & in_mBoundObjectList,
                                                                                                    const GALGAS_string & in_mBindingOptionsString
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOutletName, in_mBindingName, in_mBoundObjectList, in_mBindingOptionsString) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_regularBindingsGenerationList::cCollectionElement_regularBindingsGenerationList (const GALGAS_regularBindingsGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOutletName, inElement.mProperty_mBindingName, inElement.mProperty_mBoundObjectList, inElement.mProperty_mBindingOptionsString) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_regularBindingsGenerationList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_regularBindingsGenerationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_regularBindingsGenerationList (mObject.mProperty_mOutletName, mObject.mProperty_mBindingName, mObject.mProperty_mBoundObjectList, mObject.mProperty_mBindingOptionsString COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_regularBindingsGenerationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOutletName" ":" ;
  mObject.mProperty_mOutletName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBindingName" ":" ;
  mObject.mProperty_mBindingName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBoundObjectList" ":" ;
  mObject.mProperty_mBoundObjectList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBindingOptionsString" ":" ;
  mObject.mProperty_mBindingOptionsString.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_regularBindingsGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_regularBindingsGenerationList * operand = (cCollectionElement_regularBindingsGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_regularBindingsGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList::GALGAS_regularBindingsGenerationList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList::GALGAS_regularBindingsGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList GALGAS_regularBindingsGenerationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_regularBindingsGenerationList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList GALGAS_regularBindingsGenerationList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                      const GALGAS_string & inOperand1,
                                                                                                      const GALGAS_boundObjectList & inOperand2,
                                                                                                      const GALGAS_string & inOperand3
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_regularBindingsGenerationList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_regularBindingsGenerationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_regularBindingsGenerationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_regularBindingsGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GALGAS_string & in_mOutletName,
                                                                      const GALGAS_string & in_mBindingName,
                                                                      const GALGAS_boundObjectList & in_mBoundObjectList,
                                                                      const GALGAS_string & in_mBindingOptionsString
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_regularBindingsGenerationList * p = NULL ;
  macroMyNew (p, cCollectionElement_regularBindingsGenerationList (in_mOutletName,
                                                                   in_mBindingName,
                                                                   in_mBoundObjectList,
                                                                   in_mBindingOptionsString COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_regularBindingsGenerationList::addAssign_operation (const GALGAS_string & inOperand0,
                                                                const GALGAS_string & inOperand1,
                                                                const GALGAS_boundObjectList & inOperand2,
                                                                const GALGAS_string & inOperand3
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_regularBindingsGenerationList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_regularBindingsGenerationList::setter_append (GALGAS_regularBindingsGenerationList_2D_element inElement,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_regularBindingsGenerationList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_regularBindingsGenerationList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                 const GALGAS_string inOperand1,
                                                                 const GALGAS_boundObjectList inOperand2,
                                                                 const GALGAS_string inOperand3,
                                                                 const GALGAS_uint inInsertionIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_regularBindingsGenerationList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_regularBindingsGenerationList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                 GALGAS_string & outOperand1,
                                                                 GALGAS_boundObjectList & outOperand2,
                                                                 GALGAS_string & outOperand3,
                                                                 const GALGAS_uint inRemoveIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_regularBindingsGenerationList * p = (cCollectionElement_regularBindingsGenerationList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
      outOperand0 = p->mObject.mProperty_mOutletName ;
      outOperand1 = p->mObject.mProperty_mBindingName ;
      outOperand2 = p->mObject.mProperty_mBoundObjectList ;
      outOperand3 = p->mObject.mProperty_mBindingOptionsString ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_regularBindingsGenerationList::setter_popFirst (GALGAS_string & outOperand0,
                                                            GALGAS_string & outOperand1,
                                                            GALGAS_boundObjectList & outOperand2,
                                                            GALGAS_string & outOperand3,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingsGenerationList * p = (cCollectionElement_regularBindingsGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
    outOperand0 = p->mObject.mProperty_mOutletName ;
    outOperand1 = p->mObject.mProperty_mBindingName ;
    outOperand2 = p->mObject.mProperty_mBoundObjectList ;
    outOperand3 = p->mObject.mProperty_mBindingOptionsString ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_regularBindingsGenerationList::setter_popLast (GALGAS_string & outOperand0,
                                                           GALGAS_string & outOperand1,
                                                           GALGAS_boundObjectList & outOperand2,
                                                           GALGAS_string & outOperand3,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingsGenerationList * p = (cCollectionElement_regularBindingsGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
    outOperand0 = p->mObject.mProperty_mOutletName ;
    outOperand1 = p->mObject.mProperty_mBindingName ;
    outOperand2 = p->mObject.mProperty_mBoundObjectList ;
    outOperand3 = p->mObject.mProperty_mBindingOptionsString ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_regularBindingsGenerationList::method_first (GALGAS_string & outOperand0,
                                                         GALGAS_string & outOperand1,
                                                         GALGAS_boundObjectList & outOperand2,
                                                         GALGAS_string & outOperand3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingsGenerationList * p = (cCollectionElement_regularBindingsGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
    outOperand0 = p->mObject.mProperty_mOutletName ;
    outOperand1 = p->mObject.mProperty_mBindingName ;
    outOperand2 = p->mObject.mProperty_mBoundObjectList ;
    outOperand3 = p->mObject.mProperty_mBindingOptionsString ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_regularBindingsGenerationList::method_last (GALGAS_string & outOperand0,
                                                        GALGAS_string & outOperand1,
                                                        GALGAS_boundObjectList & outOperand2,
                                                        GALGAS_string & outOperand3,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingsGenerationList * p = (cCollectionElement_regularBindingsGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
    outOperand0 = p->mObject.mProperty_mOutletName ;
    outOperand1 = p->mObject.mProperty_mBindingName ;
    outOperand2 = p->mObject.mProperty_mBoundObjectList ;
    outOperand3 = p->mObject.mProperty_mBindingOptionsString ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList GALGAS_regularBindingsGenerationList::add_operation (const GALGAS_regularBindingsGenerationList & inOperand,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_regularBindingsGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList GALGAS_regularBindingsGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_regularBindingsGenerationList result = GALGAS_regularBindingsGenerationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList GALGAS_regularBindingsGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_regularBindingsGenerationList result = GALGAS_regularBindingsGenerationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList GALGAS_regularBindingsGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_regularBindingsGenerationList result = GALGAS_regularBindingsGenerationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_regularBindingsGenerationList::plusAssign_operation (const GALGAS_regularBindingsGenerationList inOperand,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_regularBindingsGenerationList::getter_mOutletNameAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingsGenerationList * p = (cCollectionElement_regularBindingsGenerationList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
    result = p->mObject.mProperty_mOutletName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_regularBindingsGenerationList::getter_mBindingNameAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingsGenerationList * p = (cCollectionElement_regularBindingsGenerationList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
    result = p->mObject.mProperty_mBindingName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_boundObjectList GALGAS_regularBindingsGenerationList::getter_mBoundObjectListAtIndex (const GALGAS_uint & inIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingsGenerationList * p = (cCollectionElement_regularBindingsGenerationList *) attributes.ptr () ;
  GALGAS_boundObjectList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
    result = p->mObject.mProperty_mBoundObjectList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_regularBindingsGenerationList::getter_mBindingOptionsStringAtIndex (const GALGAS_uint & inIndex,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingsGenerationList * p = (cCollectionElement_regularBindingsGenerationList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
    result = p->mObject.mProperty_mBindingOptionsString ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_regularBindingsGenerationList::cEnumerator_regularBindingsGenerationList (const GALGAS_regularBindingsGenerationList & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList_2D_element cEnumerator_regularBindingsGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_regularBindingsGenerationList * p = (const cCollectionElement_regularBindingsGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_regularBindingsGenerationList::current_mOutletName (LOCATION_ARGS) const {
  const cCollectionElement_regularBindingsGenerationList * p = (const cCollectionElement_regularBindingsGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
  return p->mObject.mProperty_mOutletName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_regularBindingsGenerationList::current_mBindingName (LOCATION_ARGS) const {
  const cCollectionElement_regularBindingsGenerationList * p = (const cCollectionElement_regularBindingsGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
  return p->mObject.mProperty_mBindingName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_boundObjectList cEnumerator_regularBindingsGenerationList::current_mBoundObjectList (LOCATION_ARGS) const {
  const cCollectionElement_regularBindingsGenerationList * p = (const cCollectionElement_regularBindingsGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
  return p->mObject.mProperty_mBoundObjectList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_regularBindingsGenerationList::current_mBindingOptionsString (LOCATION_ARGS) const {
  const cCollectionElement_regularBindingsGenerationList * p = (const cCollectionElement_regularBindingsGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
  return p->mObject.mProperty_mBindingOptionsString ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @regularBindingsGenerationList type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_regularBindingsGenerationList ("regularBindingsGenerationList",
                                                      NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_regularBindingsGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_regularBindingsGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_regularBindingsGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_regularBindingsGenerationList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList GALGAS_regularBindingsGenerationList::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_regularBindingsGenerationList result ;
  const GALGAS_regularBindingsGenerationList * p = (const GALGAS_regularBindingsGenerationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_regularBindingsGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("regularBindingsGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Class for element of '@multipleBindingGenerationList' list                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_multipleBindingGenerationList : public cCollectionElement {
  public : GALGAS_multipleBindingGenerationList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_multipleBindingGenerationList (const GALGAS_string & in_mOutletName,
                                                             const GALGAS_string & in_mBindingName,
                                                             const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression
                                                             COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_multipleBindingGenerationList (const GALGAS_multipleBindingGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_multipleBindingGenerationList::cCollectionElement_multipleBindingGenerationList (const GALGAS_string & in_mOutletName,
                                                                                                    const GALGAS_string & in_mBindingName,
                                                                                                    const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOutletName, in_mBindingName, in_mBoundObjectExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_multipleBindingGenerationList::cCollectionElement_multipleBindingGenerationList (const GALGAS_multipleBindingGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOutletName, inElement.mProperty_mBindingName, inElement.mProperty_mBoundObjectExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_multipleBindingGenerationList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_multipleBindingGenerationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_multipleBindingGenerationList (mObject.mProperty_mOutletName, mObject.mProperty_mBindingName, mObject.mProperty_mBoundObjectExpression COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_multipleBindingGenerationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOutletName" ":" ;
  mObject.mProperty_mOutletName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBindingName" ":" ;
  mObject.mProperty_mBindingName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBoundObjectExpression" ":" ;
  mObject.mProperty_mBoundObjectExpression.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_multipleBindingGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_multipleBindingGenerationList * operand = (cCollectionElement_multipleBindingGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_multipleBindingGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingGenerationList::GALGAS_multipleBindingGenerationList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingGenerationList::GALGAS_multipleBindingGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingGenerationList GALGAS_multipleBindingGenerationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_multipleBindingGenerationList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingGenerationList GALGAS_multipleBindingGenerationList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                      const GALGAS_string & inOperand1,
                                                                                                      const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand2
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_multipleBindingGenerationList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_multipleBindingGenerationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_multipleBindingGenerationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_multipleBindingGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GALGAS_string & in_mOutletName,
                                                                      const GALGAS_string & in_mBindingName,
                                                                      const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_multipleBindingGenerationList * p = NULL ;
  macroMyNew (p, cCollectionElement_multipleBindingGenerationList (in_mOutletName,
                                                                   in_mBindingName,
                                                                   in_mBoundObjectExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_multipleBindingGenerationList::addAssign_operation (const GALGAS_string & inOperand0,
                                                                const GALGAS_string & inOperand1,
                                                                const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand2
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_multipleBindingGenerationList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_multipleBindingGenerationList::setter_append (GALGAS_multipleBindingGenerationList_2D_element inElement,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_multipleBindingGenerationList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_multipleBindingGenerationList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                 const GALGAS_string inOperand1,
                                                                 const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inOperand2,
                                                                 const GALGAS_uint inInsertionIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_multipleBindingGenerationList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_multipleBindingGenerationList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                 GALGAS_string & outOperand1,
                                                                 GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outOperand2,
                                                                 const GALGAS_uint inRemoveIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_multipleBindingGenerationList * p = (cCollectionElement_multipleBindingGenerationList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
      outOperand0 = p->mObject.mProperty_mOutletName ;
      outOperand1 = p->mObject.mProperty_mBindingName ;
      outOperand2 = p->mObject.mProperty_mBoundObjectExpression ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_multipleBindingGenerationList::setter_popFirst (GALGAS_string & outOperand0,
                                                            GALGAS_string & outOperand1,
                                                            GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outOperand2,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_multipleBindingGenerationList * p = (cCollectionElement_multipleBindingGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
    outOperand0 = p->mObject.mProperty_mOutletName ;
    outOperand1 = p->mObject.mProperty_mBindingName ;
    outOperand2 = p->mObject.mProperty_mBoundObjectExpression ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_multipleBindingGenerationList::setter_popLast (GALGAS_string & outOperand0,
                                                           GALGAS_string & outOperand1,
                                                           GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outOperand2,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_multipleBindingGenerationList * p = (cCollectionElement_multipleBindingGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
    outOperand0 = p->mObject.mProperty_mOutletName ;
    outOperand1 = p->mObject.mProperty_mBindingName ;
    outOperand2 = p->mObject.mProperty_mBoundObjectExpression ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_multipleBindingGenerationList::method_first (GALGAS_string & outOperand0,
                                                         GALGAS_string & outOperand1,
                                                         GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outOperand2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_multipleBindingGenerationList * p = (cCollectionElement_multipleBindingGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
    outOperand0 = p->mObject.mProperty_mOutletName ;
    outOperand1 = p->mObject.mProperty_mBindingName ;
    outOperand2 = p->mObject.mProperty_mBoundObjectExpression ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_multipleBindingGenerationList::method_last (GALGAS_string & outOperand0,
                                                        GALGAS_string & outOperand1,
                                                        GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outOperand2,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_multipleBindingGenerationList * p = (cCollectionElement_multipleBindingGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
    outOperand0 = p->mObject.mProperty_mOutletName ;
    outOperand1 = p->mObject.mProperty_mBindingName ;
    outOperand2 = p->mObject.mProperty_mBoundObjectExpression ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingGenerationList GALGAS_multipleBindingGenerationList::add_operation (const GALGAS_multipleBindingGenerationList & inOperand,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_multipleBindingGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingGenerationList GALGAS_multipleBindingGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_multipleBindingGenerationList result = GALGAS_multipleBindingGenerationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingGenerationList GALGAS_multipleBindingGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_multipleBindingGenerationList result = GALGAS_multipleBindingGenerationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingGenerationList GALGAS_multipleBindingGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_multipleBindingGenerationList result = GALGAS_multipleBindingGenerationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_multipleBindingGenerationList::plusAssign_operation (const GALGAS_multipleBindingGenerationList inOperand,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_multipleBindingGenerationList::getter_mOutletNameAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_multipleBindingGenerationList * p = (cCollectionElement_multipleBindingGenerationList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
    result = p->mObject.mProperty_mOutletName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_multipleBindingGenerationList::getter_mBindingNameAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_multipleBindingGenerationList * p = (cCollectionElement_multipleBindingGenerationList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
    result = p->mObject.mProperty_mBindingName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_multipleBindingGenerationList::getter_mBoundObjectExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                         C_Compiler * inCompiler
                                                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_multipleBindingGenerationList * p = (cCollectionElement_multipleBindingGenerationList *) attributes.ptr () ;
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
    result = p->mObject.mProperty_mBoundObjectExpression ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_multipleBindingGenerationList::cEnumerator_multipleBindingGenerationList (const GALGAS_multipleBindingGenerationList & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingGenerationList_2D_element cEnumerator_multipleBindingGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_multipleBindingGenerationList * p = (const cCollectionElement_multipleBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_multipleBindingGenerationList::current_mOutletName (LOCATION_ARGS) const {
  const cCollectionElement_multipleBindingGenerationList * p = (const cCollectionElement_multipleBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
  return p->mObject.mProperty_mOutletName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_multipleBindingGenerationList::current_mBindingName (LOCATION_ARGS) const {
  const cCollectionElement_multipleBindingGenerationList * p = (const cCollectionElement_multipleBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
  return p->mObject.mProperty_mBindingName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration cEnumerator_multipleBindingGenerationList::current_mBoundObjectExpression (LOCATION_ARGS) const {
  const cCollectionElement_multipleBindingGenerationList * p = (const cCollectionElement_multipleBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
  return p->mObject.mProperty_mBoundObjectExpression ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @multipleBindingGenerationList type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_multipleBindingGenerationList ("multipleBindingGenerationList",
                                                      NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_multipleBindingGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multipleBindingGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_multipleBindingGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_multipleBindingGenerationList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingGenerationList GALGAS_multipleBindingGenerationList::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_multipleBindingGenerationList result ;
  const GALGAS_multipleBindingGenerationList * p = (const GALGAS_multipleBindingGenerationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_multipleBindingGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("multipleBindingGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Class for element of '@tableViewBindingGenerationList' list                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_tableViewBindingGenerationList : public cCollectionElement {
  public : GALGAS_tableViewBindingGenerationList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_tableViewBindingGenerationList (const GALGAS_string & in_mTableValueBindingOutletName,
                                                              const GALGAS_string & in_mTableValueBindingControllerName
                                                              COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_tableViewBindingGenerationList (const GALGAS_tableViewBindingGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_tableViewBindingGenerationList::cCollectionElement_tableViewBindingGenerationList (const GALGAS_string & in_mTableValueBindingOutletName,
                                                                                                      const GALGAS_string & in_mTableValueBindingControllerName
                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTableValueBindingOutletName, in_mTableValueBindingControllerName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_tableViewBindingGenerationList::cCollectionElement_tableViewBindingGenerationList (const GALGAS_tableViewBindingGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTableValueBindingOutletName, inElement.mProperty_mTableValueBindingControllerName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_tableViewBindingGenerationList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_tableViewBindingGenerationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_tableViewBindingGenerationList (mObject.mProperty_mTableValueBindingOutletName, mObject.mProperty_mTableValueBindingControllerName COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_tableViewBindingGenerationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTableValueBindingOutletName" ":" ;
  mObject.mProperty_mTableValueBindingOutletName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTableValueBindingControllerName" ":" ;
  mObject.mProperty_mTableValueBindingControllerName.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_tableViewBindingGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_tableViewBindingGenerationList * operand = (cCollectionElement_tableViewBindingGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_tableViewBindingGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList::GALGAS_tableViewBindingGenerationList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList::GALGAS_tableViewBindingGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList GALGAS_tableViewBindingGenerationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_tableViewBindingGenerationList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList GALGAS_tableViewBindingGenerationList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                        const GALGAS_string & inOperand1
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_tableViewBindingGenerationList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_tableViewBindingGenerationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_tableViewBindingGenerationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_tableViewBindingGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                       const GALGAS_string & in_mTableValueBindingOutletName,
                                                                       const GALGAS_string & in_mTableValueBindingControllerName
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_tableViewBindingGenerationList * p = NULL ;
  macroMyNew (p, cCollectionElement_tableViewBindingGenerationList (in_mTableValueBindingOutletName,
                                                                    in_mTableValueBindingControllerName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_tableViewBindingGenerationList::addAssign_operation (const GALGAS_string & inOperand0,
                                                                 const GALGAS_string & inOperand1
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_tableViewBindingGenerationList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_tableViewBindingGenerationList::setter_append (GALGAS_tableViewBindingGenerationList_2D_element inElement,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_tableViewBindingGenerationList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_tableViewBindingGenerationList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                  const GALGAS_string inOperand1,
                                                                  const GALGAS_uint inInsertionIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_tableViewBindingGenerationList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_tableViewBindingGenerationList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                  GALGAS_string & outOperand1,
                                                                  const GALGAS_uint inRemoveIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_tableViewBindingGenerationList * p = (cCollectionElement_tableViewBindingGenerationList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_tableViewBindingGenerationList) ;
      outOperand0 = p->mObject.mProperty_mTableValueBindingOutletName ;
      outOperand1 = p->mObject.mProperty_mTableValueBindingControllerName ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_tableViewBindingGenerationList::setter_popFirst (GALGAS_string & outOperand0,
                                                             GALGAS_string & outOperand1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewBindingGenerationList * p = (cCollectionElement_tableViewBindingGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_tableViewBindingGenerationList) ;
    outOperand0 = p->mObject.mProperty_mTableValueBindingOutletName ;
    outOperand1 = p->mObject.mProperty_mTableValueBindingControllerName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_tableViewBindingGenerationList::setter_popLast (GALGAS_string & outOperand0,
                                                            GALGAS_string & outOperand1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewBindingGenerationList * p = (cCollectionElement_tableViewBindingGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_tableViewBindingGenerationList) ;
    outOperand0 = p->mObject.mProperty_mTableValueBindingOutletName ;
    outOperand1 = p->mObject.mProperty_mTableValueBindingControllerName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_tableViewBindingGenerationList::method_first (GALGAS_string & outOperand0,
                                                          GALGAS_string & outOperand1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewBindingGenerationList * p = (cCollectionElement_tableViewBindingGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_tableViewBindingGenerationList) ;
    outOperand0 = p->mObject.mProperty_mTableValueBindingOutletName ;
    outOperand1 = p->mObject.mProperty_mTableValueBindingControllerName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_tableViewBindingGenerationList::method_last (GALGAS_string & outOperand0,
                                                         GALGAS_string & outOperand1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewBindingGenerationList * p = (cCollectionElement_tableViewBindingGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_tableViewBindingGenerationList) ;
    outOperand0 = p->mObject.mProperty_mTableValueBindingOutletName ;
    outOperand1 = p->mObject.mProperty_mTableValueBindingControllerName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList GALGAS_tableViewBindingGenerationList::add_operation (const GALGAS_tableViewBindingGenerationList & inOperand,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_tableViewBindingGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList GALGAS_tableViewBindingGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_tableViewBindingGenerationList result = GALGAS_tableViewBindingGenerationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList GALGAS_tableViewBindingGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_tableViewBindingGenerationList result = GALGAS_tableViewBindingGenerationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList GALGAS_tableViewBindingGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_tableViewBindingGenerationList result = GALGAS_tableViewBindingGenerationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_tableViewBindingGenerationList::plusAssign_operation (const GALGAS_tableViewBindingGenerationList inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_tableViewBindingGenerationList::getter_mTableValueBindingOutletNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewBindingGenerationList * p = (cCollectionElement_tableViewBindingGenerationList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewBindingGenerationList) ;
    result = p->mObject.mProperty_mTableValueBindingOutletName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_tableViewBindingGenerationList::getter_mTableValueBindingControllerNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewBindingGenerationList * p = (cCollectionElement_tableViewBindingGenerationList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewBindingGenerationList) ;
    result = p->mObject.mProperty_mTableValueBindingControllerName ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_tableViewBindingGenerationList::cEnumerator_tableViewBindingGenerationList (const GALGAS_tableViewBindingGenerationList & inEnumeratedObject,
                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList_2D_element cEnumerator_tableViewBindingGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_tableViewBindingGenerationList * p = (const cCollectionElement_tableViewBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_tableViewBindingGenerationList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_tableViewBindingGenerationList::current_mTableValueBindingOutletName (LOCATION_ARGS) const {
  const cCollectionElement_tableViewBindingGenerationList * p = (const cCollectionElement_tableViewBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_tableViewBindingGenerationList) ;
  return p->mObject.mProperty_mTableValueBindingOutletName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_tableViewBindingGenerationList::current_mTableValueBindingControllerName (LOCATION_ARGS) const {
  const cCollectionElement_tableViewBindingGenerationList * p = (const cCollectionElement_tableViewBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_tableViewBindingGenerationList) ;
  return p->mObject.mProperty_mTableValueBindingControllerName ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @tableViewBindingGenerationList type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableViewBindingGenerationList ("tableViewBindingGenerationList",
                                                       NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_tableViewBindingGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewBindingGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_tableViewBindingGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableViewBindingGenerationList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList GALGAS_tableViewBindingGenerationList::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_tableViewBindingGenerationList result ;
  const GALGAS_tableViewBindingGenerationList * p = (const GALGAS_tableViewBindingGenerationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_tableViewBindingGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tableViewBindingGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Class for element of '@ebViewGraphicControllerBindingGenerationList' list                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_ebViewGraphicControllerBindingGenerationList : public cCollectionElement {
  public : GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_ebViewGraphicControllerBindingGenerationList (const GALGAS_string & in_mEBViewOutletName,
                                                                            const GALGAS_string & in_mArrayControllerControllerName
                                                                            COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_ebViewGraphicControllerBindingGenerationList (const GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_ebViewGraphicControllerBindingGenerationList::cCollectionElement_ebViewGraphicControllerBindingGenerationList (const GALGAS_string & in_mEBViewOutletName,
                                                                                                                                  const GALGAS_string & in_mArrayControllerControllerName
                                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEBViewOutletName, in_mArrayControllerControllerName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_ebViewGraphicControllerBindingGenerationList::cCollectionElement_ebViewGraphicControllerBindingGenerationList (const GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mEBViewOutletName, inElement.mProperty_mArrayControllerControllerName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_ebViewGraphicControllerBindingGenerationList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_ebViewGraphicControllerBindingGenerationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_ebViewGraphicControllerBindingGenerationList (mObject.mProperty_mEBViewOutletName, mObject.mProperty_mArrayControllerControllerName COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_ebViewGraphicControllerBindingGenerationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEBViewOutletName" ":" ;
  mObject.mProperty_mEBViewOutletName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mArrayControllerControllerName" ":" ;
  mObject.mProperty_mArrayControllerControllerName.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_ebViewGraphicControllerBindingGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_ebViewGraphicControllerBindingGenerationList * operand = (cCollectionElement_ebViewGraphicControllerBindingGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ebViewGraphicControllerBindingGenerationList::GALGAS_ebViewGraphicControllerBindingGenerationList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ebViewGraphicControllerBindingGenerationList::GALGAS_ebViewGraphicControllerBindingGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ebViewGraphicControllerBindingGenerationList GALGAS_ebViewGraphicControllerBindingGenerationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_ebViewGraphicControllerBindingGenerationList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ebViewGraphicControllerBindingGenerationList GALGAS_ebViewGraphicControllerBindingGenerationList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                                                    const GALGAS_string & inOperand1
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ebViewGraphicControllerBindingGenerationList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_ebViewGraphicControllerBindingGenerationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_ebViewGraphicControllerBindingGenerationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ebViewGraphicControllerBindingGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                     const GALGAS_string & in_mEBViewOutletName,
                                                                                     const GALGAS_string & in_mArrayControllerControllerName
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = NULL ;
  macroMyNew (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList (in_mEBViewOutletName,
                                                                                  in_mArrayControllerControllerName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ebViewGraphicControllerBindingGenerationList::addAssign_operation (const GALGAS_string & inOperand0,
                                                                               const GALGAS_string & inOperand1
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ebViewGraphicControllerBindingGenerationList::setter_append (GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element inElement,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ebViewGraphicControllerBindingGenerationList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                                const GALGAS_string inOperand1,
                                                                                const GALGAS_uint inInsertionIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ebViewGraphicControllerBindingGenerationList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                                GALGAS_string & outOperand1,
                                                                                const GALGAS_uint inRemoveIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = (cCollectionElement_ebViewGraphicControllerBindingGenerationList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
      outOperand0 = p->mObject.mProperty_mEBViewOutletName ;
      outOperand1 = p->mObject.mProperty_mArrayControllerControllerName ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ebViewGraphicControllerBindingGenerationList::setter_popFirst (GALGAS_string & outOperand0,
                                                                           GALGAS_string & outOperand1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = (cCollectionElement_ebViewGraphicControllerBindingGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
    outOperand0 = p->mObject.mProperty_mEBViewOutletName ;
    outOperand1 = p->mObject.mProperty_mArrayControllerControllerName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ebViewGraphicControllerBindingGenerationList::setter_popLast (GALGAS_string & outOperand0,
                                                                          GALGAS_string & outOperand1,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = (cCollectionElement_ebViewGraphicControllerBindingGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
    outOperand0 = p->mObject.mProperty_mEBViewOutletName ;
    outOperand1 = p->mObject.mProperty_mArrayControllerControllerName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ebViewGraphicControllerBindingGenerationList::method_first (GALGAS_string & outOperand0,
                                                                        GALGAS_string & outOperand1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = (cCollectionElement_ebViewGraphicControllerBindingGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
    outOperand0 = p->mObject.mProperty_mEBViewOutletName ;
    outOperand1 = p->mObject.mProperty_mArrayControllerControllerName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ebViewGraphicControllerBindingGenerationList::method_last (GALGAS_string & outOperand0,
                                                                       GALGAS_string & outOperand1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = (cCollectionElement_ebViewGraphicControllerBindingGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
    outOperand0 = p->mObject.mProperty_mEBViewOutletName ;
    outOperand1 = p->mObject.mProperty_mArrayControllerControllerName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ebViewGraphicControllerBindingGenerationList GALGAS_ebViewGraphicControllerBindingGenerationList::add_operation (const GALGAS_ebViewGraphicControllerBindingGenerationList & inOperand,
                                                                                                                        C_Compiler * /* inCompiler */
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_ebViewGraphicControllerBindingGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ebViewGraphicControllerBindingGenerationList GALGAS_ebViewGraphicControllerBindingGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_ebViewGraphicControllerBindingGenerationList result = GALGAS_ebViewGraphicControllerBindingGenerationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ebViewGraphicControllerBindingGenerationList GALGAS_ebViewGraphicControllerBindingGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_ebViewGraphicControllerBindingGenerationList result = GALGAS_ebViewGraphicControllerBindingGenerationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ebViewGraphicControllerBindingGenerationList GALGAS_ebViewGraphicControllerBindingGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_ebViewGraphicControllerBindingGenerationList result = GALGAS_ebViewGraphicControllerBindingGenerationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ebViewGraphicControllerBindingGenerationList::plusAssign_operation (const GALGAS_ebViewGraphicControllerBindingGenerationList inOperand,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_ebViewGraphicControllerBindingGenerationList::getter_mEBViewOutletNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = (cCollectionElement_ebViewGraphicControllerBindingGenerationList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
    result = p->mObject.mProperty_mEBViewOutletName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_ebViewGraphicControllerBindingGenerationList::getter_mArrayControllerControllerNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = (cCollectionElement_ebViewGraphicControllerBindingGenerationList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
    result = p->mObject.mProperty_mArrayControllerControllerName ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_ebViewGraphicControllerBindingGenerationList::cEnumerator_ebViewGraphicControllerBindingGenerationList (const GALGAS_ebViewGraphicControllerBindingGenerationList & inEnumeratedObject,
                                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element cEnumerator_ebViewGraphicControllerBindingGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = (const cCollectionElement_ebViewGraphicControllerBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_ebViewGraphicControllerBindingGenerationList::current_mEBViewOutletName (LOCATION_ARGS) const {
  const cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = (const cCollectionElement_ebViewGraphicControllerBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
  return p->mObject.mProperty_mEBViewOutletName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_ebViewGraphicControllerBindingGenerationList::current_mArrayControllerControllerName (LOCATION_ARGS) const {
  const cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = (const cCollectionElement_ebViewGraphicControllerBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
  return p->mObject.mProperty_mArrayControllerControllerName ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 @ebViewGraphicControllerBindingGenerationList type                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ebViewGraphicControllerBindingGenerationList ("ebViewGraphicControllerBindingGenerationList",
                                                                     NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_ebViewGraphicControllerBindingGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ebViewGraphicControllerBindingGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_ebViewGraphicControllerBindingGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ebViewGraphicControllerBindingGenerationList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ebViewGraphicControllerBindingGenerationList GALGAS_ebViewGraphicControllerBindingGenerationList::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ebViewGraphicControllerBindingGenerationList result ;
  const GALGAS_ebViewGraphicControllerBindingGenerationList * p = (const GALGAS_ebViewGraphicControllerBindingGenerationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ebViewGraphicControllerBindingGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ebViewGraphicControllerBindingGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

