//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

import AppKit

//--------------------------------------------------------------------------------------------------
//   LEXIQUE easyBindings_lexique
//--------------------------------------------------------------------------------------------------

@MainActor fileprivate let gFont_easyBindings_lexique = EBPreferenceProperty <NSFont> (
  defaultValue: NSFont.monospacedSystemFont (ofSize: 13.0, weight: .regular),
  prefKey: "FontFor_" + easyBindings_lexique_lexiqueIdentifier ()
)

//--------------------------------------------------------------------------------------------------

@MainActor fileprivate let gLineHeight_easyBindings_lexique = EBPreferenceProperty <Int> (
  defaultValue: 12,
  prefKey: "LineHeightFor_" + easyBindings_lexique_lexiqueIdentifier ()
)

//--------------------------------------------------------------------------------------------------

@MainActor fileprivate let gColors_easyBindings_lexique : [EBPreferenceProperty <NSColor>] = [
  EBPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_easyBindings_lexique"),
  EBPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_easyBindings_lexique-keywordsStyle"),
  EBPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_easyBindings_lexique-idfStyle"),
  EBPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_easyBindings_lexique-IdfStyle"),
  EBPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_easyBindings_lexique-attributeStyle"),
  EBPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_easyBindings_lexique-bindingNameStyle"),
  EBPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_easyBindings_lexique-reservedBindingNameStyle"),
  EBPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_easyBindings_lexique-controllerNameStyle"),
  EBPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_easyBindings_lexique-viewNameStyle"),
  EBPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_easyBindings_lexique-integerStyle"),
  EBPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_easyBindings_lexique-floatStyle"),
  EBPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_easyBindings_lexique-stringStyle"),
  EBPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_easyBindings_lexique-delimitersStyle"),
  EBPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_easyBindings_lexique-commentStyle"),
  EBPreferenceProperty <NSColor> (defaultValue: .red, prefKey: "ColorFor_easyBindings_lexique_lexical_error"),
  EBPreferenceProperty <NSColor> (defaultValue: .gray, prefKey: "ColorFor_easyBindings_lexique_template")
]

//--------------------------------------------------------------------------------------------------

@MainActor fileprivate let gBoldStyle_easyBindings_lexique : [EBPreferenceProperty <Bool>] = [
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_easyBindings_lexique"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_easyBindings_lexique-keywordsStyle"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_easyBindings_lexique-idfStyle"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_easyBindings_lexique-IdfStyle"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_easyBindings_lexique-attributeStyle"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_easyBindings_lexique-bindingNameStyle"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_easyBindings_lexique-reservedBindingNameStyle"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_easyBindings_lexique-controllerNameStyle"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_easyBindings_lexique-viewNameStyle"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_easyBindings_lexique-integerStyle"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_easyBindings_lexique-floatStyle"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_easyBindings_lexique-stringStyle"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_easyBindings_lexique-delimitersStyle"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_easyBindings_lexique-commentStyle"),
  EBPreferenceProperty <Bool> (defaultValue: true, prefKey: "BoldFor_easyBindings_lexique_lexical_error"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_easyBindings_lexique_template")
]

//--------------------------------------------------------------------------------------------------

@MainActor fileprivate let gItalicStyle_easyBindings_lexique : [EBPreferenceProperty <Bool>] = [
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_easyBindings_lexique"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_easyBindings_lexique-keywordsStyle"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_easyBindings_lexique-idfStyle"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_easyBindings_lexique-IdfStyle"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_easyBindings_lexique-attributeStyle"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_easyBindings_lexique-bindingNameStyle"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_easyBindings_lexique-reservedBindingNameStyle"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_easyBindings_lexique-controllerNameStyle"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_easyBindings_lexique-viewNameStyle"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_easyBindings_lexique-integerStyle"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_easyBindings_lexique-floatStyle"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_easyBindings_lexique-stringStyle"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_easyBindings_lexique-delimitersStyle"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_easyBindings_lexique-commentStyle"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_easyBindings_lexique_lexical_error"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_easyBindings_lexique_template")
]

//--------------------------------------------------------------------------------------------------
//                           Template Replacements
//--------------------------------------------------------------------------------------------------



//--------------------------------------------------------------------------------------------------
//                           Template Delimiters
//--------------------------------------------------------------------------------------------------



//--------------------------------------------------------------------------------------------------
//         T E R M I N A L    S Y M B O L    E N U M E R A T I O N
//--------------------------------------------------------------------------------------------------

let easyBindings_lexique_1_ : UInt16 = 0
let easyBindings_lexique_1_identifier : UInt16 = 1
let easyBindings_lexique_1_Identifier : UInt16 = 2
let easyBindings_lexique_1__40_attribute : UInt16 = 3
let easyBindings_lexique_1_bindingName : UInt16 = 4
let easyBindings_lexique_1_controllerName : UInt16 = 5
let easyBindings_lexique_1_viewName : UInt16 = 6
let easyBindings_lexique_1_literal_5F_integer : UInt16 = 7
let easyBindings_lexique_1_literal_5F_double : UInt16 = 8
let easyBindings_lexique_1_literal_5F_string : UInt16 = 9
let easyBindings_lexique_1_comment : UInt16 = 10
let easyBindings_lexique_1_abstract : UInt16 = 11
let easyBindings_lexique_1_action : UInt16 = 12
let easyBindings_lexique_1_all : UInt16 = 13
let easyBindings_lexique_1_arrayController : UInt16 = 14
let easyBindings_lexique_1_autolayout : UInt16 = 15
let easyBindings_lexique_1_autoLayoutDocument : UInt16 = 16
let easyBindings_lexique_1_binding : UInt16 = 17
let easyBindings_lexique_1_calledBy : UInt16 = 18
let easyBindings_lexique_1_class : UInt16 = 19
let easyBindings_lexique_1_classForSwift : UInt16 = 20
let easyBindings_lexique_1_column : UInt16 = 21
let easyBindings_lexique_1_computed : UInt16 = 22
let easyBindings_lexique_1_configurator : UInt16 = 23
let easyBindings_lexique_1_default : UInt16 = 24
let easyBindings_lexique_1_dependsFrom : UInt16 = 25
let easyBindings_lexique_1_divider : UInt16 = 26
let easyBindings_lexique_1_enum : UInt16 = 27
let easyBindings_lexique_1_editableColumn : UInt16 = 28
let easyBindings_lexique_1_entity : UInt16 = 29
let easyBindings_lexique_1_extern : UInt16 = 30
let easyBindings_lexique_1_externDelegate : UInt16 = 31
let easyBindings_lexique_1_externFunc : UInt16 = 32
let easyBindings_lexique_1_func : UInt16 = 33
let easyBindings_lexique_1_graphic : UInt16 = 34
let easyBindings_lexique_1_graphviz : UInt16 = 35
let easyBindings_lexique_1_gutter : UInt16 = 36
let easyBindings_lexique_1_handlingOpposite : UInt16 = 37
let easyBindings_lexique_1_hStack : UInt16 = 38
let easyBindings_lexique_1_include : UInt16 = 39
let easyBindings_lexique_1_inverse : UInt16 = 40
let easyBindings_lexique_1_linker : UInt16 = 41
let easyBindings_lexique_1_mainxib : UInt16 = 42
let easyBindings_lexique_1_menuItem : UInt16 = 43
let easyBindings_lexique_1_no : UInt16 = 44
let easyBindings_lexique_1_newView : UInt16 = 45
let easyBindings_lexique_1_none : UInt16 = 46
let easyBindings_lexique_1_one : UInt16 = 47
let easyBindings_lexique_1_outlet : UInt16 = 48
let easyBindings_lexique_1_outletArray : UInt16 = 49
let easyBindings_lexique_1_override : UInt16 = 50
let easyBindings_lexique_1_prefs : UInt16 = 51
let easyBindings_lexique_1_property : UInt16 = 52
let easyBindings_lexique_1_proxy : UInt16 = 53
let easyBindings_lexique_1_root : UInt16 = 54
let easyBindings_lexique_1_selectionController : UInt16 = 55
let easyBindings_lexique_1_self : UInt16 = 56
let easyBindings_lexique_1_separator : UInt16 = 57
let easyBindings_lexique_1_signature : UInt16 = 58
let easyBindings_lexique_1_sortkey : UInt16 = 59
let easyBindings_lexique_1_space : UInt16 = 60
let easyBindings_lexique_1_stackView : UInt16 = 61
let easyBindings_lexique_1_standalone : UInt16 = 62
let easyBindings_lexique_1_struct : UInt16 = 63
let easyBindings_lexique_1_super : UInt16 = 64
let easyBindings_lexique_1_tableViewController : UInt16 = 65
let easyBindings_lexique_1_toMany : UInt16 = 66
let easyBindings_lexique_1_toOne : UInt16 = 67
let easyBindings_lexique_1_transient : UInt16 = 68
let easyBindings_lexique_1_typeView : UInt16 = 69
let easyBindings_lexique_1_version : UInt16 = 70
let easyBindings_lexique_1_vStack : UInt16 = 71
let easyBindings_lexique_1_versionShouldChange : UInt16 = 72
let easyBindings_lexique_1_view : UInt16 = 73
let easyBindings_lexique_1_weak : UInt16 = 74
let easyBindings_lexique_1_withVScroller : UInt16 = 75
let easyBindings_lexique_1_xcodeproject : UInt16 = 76
let easyBindings_lexique_1_yes : UInt16 = 77
let easyBindings_lexique_1_enabled : UInt16 = 78
let easyBindings_lexique_1_graphicController : UInt16 = 79
let easyBindings_lexique_1_hidden : UInt16 = 80
let easyBindings_lexique_1_tableValue : UInt16 = 81
let easyBindings_lexique_1_run : UInt16 = 82
let easyBindings_lexique_1__3A_ : UInt16 = 83
let easyBindings_lexique_1__2C_ : UInt16 = 84
let easyBindings_lexique_1__3B_ : UInt16 = 85
let easyBindings_lexique_1__21_ : UInt16 = 86
let easyBindings_lexique_1__5B_ : UInt16 = 87
let easyBindings_lexique_1__5D_ : UInt16 = 88
let easyBindings_lexique_1__7B_ : UInt16 = 89
let easyBindings_lexique_1__7D_ : UInt16 = 90
let easyBindings_lexique_1__28_ : UInt16 = 91
let easyBindings_lexique_1__29_ : UInt16 = 92
let easyBindings_lexique_1__2E_ : UInt16 = 93
let easyBindings_lexique_1__7C_ : UInt16 = 94
let easyBindings_lexique_1__26_ : UInt16 = 95
let easyBindings_lexique_1__3C_ : UInt16 = 96
let easyBindings_lexique_1__3E_ : UInt16 = 97
let easyBindings_lexique_1__3C__3D_ : UInt16 = 98
let easyBindings_lexique_1__3E__3D_ : UInt16 = 99
let easyBindings_lexique_1__21__3D_ : UInt16 = 100
let easyBindings_lexique_1__3D__3D_ : UInt16 = 101
let easyBindings_lexique_1__5E_ : UInt16 = 102
let easyBindings_lexique_1__2D_ : UInt16 = 103
let easyBindings_lexique_1__3D_ : UInt16 = 104
let easyBindings_lexique_2_ERROR : UInt16 = 105
let easyBindings_lexique_2_TEMPLATE : UInt16 = 106

//--------------------------------------------------------------------------------------------------

func easyBindings_lexique_lexiqueIdentifier () -> String {
  return "easyBindings_lexique"
}

//--------------------------------------------------------------------------------------------------

func easyBindings_lexique_styleNameFor (styleIndex inIndex : UInt8) -> String {
  let kStyleArray : [String] = [
    "Default Style", // 0
    "Keywords", // 1
    "identifiers", // 2
    "Identifiers", // 3
    "Attributes", // 4
    "Binding Names", // 5
    "Reserved binding names", // 6
    "Controller Names", // 7
    "View Names", // 8
    "Integer Constants", // 9
    "Floating Point Constants", // 10
    "String Constants", // 11
    "Delimiters", // 12
    "Comments", // 13
    "Lexical error", // 14
    "Template" // 15
  ]
  return kStyleArray [Int (inIndex)]
}

//--------------------------------------------------------------------------------------------------

func easyBindings_lexique_styleIdentifierFor (styleIndex inIndex : UInt8) -> String {
  let kStyleArray : [String] = [
    "easyBindings_lexique", // 0
    "easyBindings_lexique-keywordsStyle", // 1
    "easyBindings_lexique-idfStyle", // 2
    "easyBindings_lexique-IdfStyle", // 3
    "easyBindings_lexique-attributeStyle", // 4
    "easyBindings_lexique-bindingNameStyle", // 5
    "easyBindings_lexique-reservedBindingNameStyle", // 6
    "easyBindings_lexique-controllerNameStyle", // 7
    "easyBindings_lexique-viewNameStyle", // 8
    "easyBindings_lexique-integerStyle", // 9
    "easyBindings_lexique-floatStyle", // 10
    "easyBindings_lexique-stringStyle", // 11
    "easyBindings_lexique-delimitersStyle", // 12
    "easyBindings_lexique-commentStyle", // 13
    "easyBindings_lexique.ERROR", // 14
    "easyBindings_lexique.TEMPLATE" // 15
  ]
  return kStyleArray [Int (inIndex)]
}

//--------------------------------------------------------------------------------------------------
//                     S C A N N E R    C L A S S
//--------------------------------------------------------------------------------------------------

class SWIFT_Lexique_easyBindings_lexique : SWIFT_Lexique {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mLexicalAttribute_floatValue : Double = 0.0
  private var mLexicalAttribute_tokenString : String = ""
  private var mLexicalAttribute_uint32value : UInt32 = 0

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func lexiqueIdentifier () -> String {
    return easyBindings_lexique_lexiqueIdentifier ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func isTemplateLexique () -> Bool {
    return false
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func terminalVocabularyCount () -> Int {
    return 104
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var font : EBPreferenceProperty <NSFont> { return gFont_easyBindings_lexique }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var lineHeight : EBPreferenceProperty <Int> { return gLineHeight_easyBindings_lexique }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func color (forStyle inStyleIndex : UInt8) -> EBPreferenceProperty <NSColor> {
    return gColors_easyBindings_lexique [Int (inStyleIndex)]
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func bold (forStyle inStyleIndex : UInt8) -> EBPreferenceProperty <Bool> {
    return gBoldStyle_easyBindings_lexique [Int (inStyleIndex)]
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func italic (forStyle inStyleIndex : UInt8) -> EBPreferenceProperty <Bool> {
    return gItalicStyle_easyBindings_lexique [Int (inStyleIndex)]
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func styleIndexFor (token inTokenIndex : UInt16) -> UInt8 {
    let kTerminalSymbolStyles : [UInt8] = [
      0, // Default
      2, // 1 : easyBindings_lexique_1_identifier
      3, // 2 : easyBindings_lexique_1_Identifier
      4, // 3 : easyBindings_lexique_1__40_attribute
      5, // 4 : easyBindings_lexique_1_bindingName
      7, // 5 : easyBindings_lexique_1_controllerName
      8, // 6 : easyBindings_lexique_1_viewName
      9, // 7 : easyBindings_lexique_1_literal_5F_integer
      10, // 8 : easyBindings_lexique_1_literal_5F_double
      11, // 9 : easyBindings_lexique_1_literal_5F_string
      13, // 10 : easyBindings_lexique_1_comment
      1, // 11 : easyBindings_lexique_1_abstract
      1, // 12 : easyBindings_lexique_1_action
      1, // 13 : easyBindings_lexique_1_all
      1, // 14 : easyBindings_lexique_1_arrayController
      1, // 15 : easyBindings_lexique_1_autolayout
      1, // 16 : easyBindings_lexique_1_autoLayoutDocument
      1, // 17 : easyBindings_lexique_1_binding
      1, // 18 : easyBindings_lexique_1_calledBy
      1, // 19 : easyBindings_lexique_1_class
      1, // 20 : easyBindings_lexique_1_classForSwift
      1, // 21 : easyBindings_lexique_1_column
      1, // 22 : easyBindings_lexique_1_computed
      1, // 23 : easyBindings_lexique_1_configurator
      1, // 24 : easyBindings_lexique_1_default
      1, // 25 : easyBindings_lexique_1_dependsFrom
      1, // 26 : easyBindings_lexique_1_divider
      1, // 27 : easyBindings_lexique_1_enum
      1, // 28 : easyBindings_lexique_1_editableColumn
      1, // 29 : easyBindings_lexique_1_entity
      1, // 30 : easyBindings_lexique_1_extern
      1, // 31 : easyBindings_lexique_1_externDelegate
      1, // 32 : easyBindings_lexique_1_externFunc
      1, // 33 : easyBindings_lexique_1_func
      1, // 34 : easyBindings_lexique_1_graphic
      1, // 35 : easyBindings_lexique_1_graphviz
      1, // 36 : easyBindings_lexique_1_gutter
      1, // 37 : easyBindings_lexique_1_handlingOpposite
      1, // 38 : easyBindings_lexique_1_hStack
      1, // 39 : easyBindings_lexique_1_include
      1, // 40 : easyBindings_lexique_1_inverse
      1, // 41 : easyBindings_lexique_1_linker
      1, // 42 : easyBindings_lexique_1_mainxib
      1, // 43 : easyBindings_lexique_1_menuItem
      1, // 44 : easyBindings_lexique_1_no
      1, // 45 : easyBindings_lexique_1_newView
      1, // 46 : easyBindings_lexique_1_none
      1, // 47 : easyBindings_lexique_1_one
      1, // 48 : easyBindings_lexique_1_outlet
      1, // 49 : easyBindings_lexique_1_outletArray
      1, // 50 : easyBindings_lexique_1_override
      1, // 51 : easyBindings_lexique_1_prefs
      1, // 52 : easyBindings_lexique_1_property
      1, // 53 : easyBindings_lexique_1_proxy
      1, // 54 : easyBindings_lexique_1_root
      1, // 55 : easyBindings_lexique_1_selectionController
      1, // 56 : easyBindings_lexique_1_self
      1, // 57 : easyBindings_lexique_1_separator
      1, // 58 : easyBindings_lexique_1_signature
      1, // 59 : easyBindings_lexique_1_sortkey
      1, // 60 : easyBindings_lexique_1_space
      1, // 61 : easyBindings_lexique_1_stackView
      1, // 62 : easyBindings_lexique_1_standalone
      1, // 63 : easyBindings_lexique_1_struct
      1, // 64 : easyBindings_lexique_1_super
      1, // 65 : easyBindings_lexique_1_tableViewController
      1, // 66 : easyBindings_lexique_1_toMany
      1, // 67 : easyBindings_lexique_1_toOne
      1, // 68 : easyBindings_lexique_1_transient
      1, // 69 : easyBindings_lexique_1_typeView
      1, // 70 : easyBindings_lexique_1_version
      1, // 71 : easyBindings_lexique_1_vStack
      1, // 72 : easyBindings_lexique_1_versionShouldChange
      1, // 73 : easyBindings_lexique_1_view
      1, // 74 : easyBindings_lexique_1_weak
      1, // 75 : easyBindings_lexique_1_withVScroller
      1, // 76 : easyBindings_lexique_1_xcodeproject
      1, // 77 : easyBindings_lexique_1_yes
      6, // 78 : easyBindings_lexique_1_enabled
      6, // 79 : easyBindings_lexique_1_graphicController
      6, // 80 : easyBindings_lexique_1_hidden
      6, // 81 : easyBindings_lexique_1_tableValue
      6, // 82 : easyBindings_lexique_1_run
      12, // 83 : easyBindings_lexique_1__3A_
      12, // 84 : easyBindings_lexique_1__2C_
      12, // 85 : easyBindings_lexique_1__3B_
      12, // 86 : easyBindings_lexique_1__21_
      12, // 87 : easyBindings_lexique_1__5B_
      12, // 88 : easyBindings_lexique_1__5D_
      12, // 89 : easyBindings_lexique_1__7B_
      12, // 90 : easyBindings_lexique_1__7D_
      12, // 91 : easyBindings_lexique_1__28_
      12, // 92 : easyBindings_lexique_1__29_
      12, // 93 : easyBindings_lexique_1__2E_
      12, // 94 : easyBindings_lexique_1__7C_
      12, // 95 : easyBindings_lexique_1__26_
      12, // 96 : easyBindings_lexique_1__3C_
      12, // 97 : easyBindings_lexique_1__3E_
      12, // 98 : easyBindings_lexique_1__3C__3D_
      12, // 99 : easyBindings_lexique_1__3E__3D_
      12, // 100 : easyBindings_lexique_1__21__3D_
      12, // 101 : easyBindings_lexique_1__3D__3D_
      12, // 102 : easyBindings_lexique_1__5E_
      12, // 103 : easyBindings_lexique_1__2D_
      12, // 104 : easyBindings_lexique_1__3D_
      14, // 105 : easyBindings_lexique_2_ERROR
      15  // 106 : easyBindings_lexique_2_TEMPLATE
    ]
    return kTerminalSymbolStyles [Int (inTokenIndex)]
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func atomicSelectionFor (token inTokenIndex : UInt16) -> Bool {
    let kTerminalAtomicSelection : [Bool] = [
      false, // Default
      true, // 1 : easyBindings_lexique_1_identifier
      true, // 2 : easyBindings_lexique_1_Identifier
      true, // 3 : easyBindings_lexique_1__40_attribute
      true, // 4 : easyBindings_lexique_1_bindingName
      true, // 5 : easyBindings_lexique_1_controllerName
      true, // 6 : easyBindings_lexique_1_viewName
      true, // 7 : easyBindings_lexique_1_literal_5F_integer
      true, // 8 : easyBindings_lexique_1_literal_5F_double
      false, // 9 : easyBindings_lexique_1_literal_5F_string
      false, // 10 : easyBindings_lexique_1_comment
      true, // 11 : easyBindings_lexique_1_abstract
      true, // 12 : easyBindings_lexique_1_action
      true, // 13 : easyBindings_lexique_1_all
      true, // 14 : easyBindings_lexique_1_arrayController
      true, // 15 : easyBindings_lexique_1_autolayout
      true, // 16 : easyBindings_lexique_1_autoLayoutDocument
      true, // 17 : easyBindings_lexique_1_binding
      true, // 18 : easyBindings_lexique_1_calledBy
      true, // 19 : easyBindings_lexique_1_class
      true, // 20 : easyBindings_lexique_1_classForSwift
      true, // 21 : easyBindings_lexique_1_column
      true, // 22 : easyBindings_lexique_1_computed
      true, // 23 : easyBindings_lexique_1_configurator
      true, // 24 : easyBindings_lexique_1_default
      true, // 25 : easyBindings_lexique_1_dependsFrom
      true, // 26 : easyBindings_lexique_1_divider
      true, // 27 : easyBindings_lexique_1_enum
      true, // 28 : easyBindings_lexique_1_editableColumn
      true, // 29 : easyBindings_lexique_1_entity
      true, // 30 : easyBindings_lexique_1_extern
      true, // 31 : easyBindings_lexique_1_externDelegate
      true, // 32 : easyBindings_lexique_1_externFunc
      true, // 33 : easyBindings_lexique_1_func
      true, // 34 : easyBindings_lexique_1_graphic
      true, // 35 : easyBindings_lexique_1_graphviz
      true, // 36 : easyBindings_lexique_1_gutter
      true, // 37 : easyBindings_lexique_1_handlingOpposite
      true, // 38 : easyBindings_lexique_1_hStack
      true, // 39 : easyBindings_lexique_1_include
      true, // 40 : easyBindings_lexique_1_inverse
      true, // 41 : easyBindings_lexique_1_linker
      true, // 42 : easyBindings_lexique_1_mainxib
      true, // 43 : easyBindings_lexique_1_menuItem
      true, // 44 : easyBindings_lexique_1_no
      true, // 45 : easyBindings_lexique_1_newView
      true, // 46 : easyBindings_lexique_1_none
      true, // 47 : easyBindings_lexique_1_one
      true, // 48 : easyBindings_lexique_1_outlet
      true, // 49 : easyBindings_lexique_1_outletArray
      true, // 50 : easyBindings_lexique_1_override
      true, // 51 : easyBindings_lexique_1_prefs
      true, // 52 : easyBindings_lexique_1_property
      true, // 53 : easyBindings_lexique_1_proxy
      true, // 54 : easyBindings_lexique_1_root
      true, // 55 : easyBindings_lexique_1_selectionController
      true, // 56 : easyBindings_lexique_1_self
      true, // 57 : easyBindings_lexique_1_separator
      true, // 58 : easyBindings_lexique_1_signature
      true, // 59 : easyBindings_lexique_1_sortkey
      true, // 60 : easyBindings_lexique_1_space
      true, // 61 : easyBindings_lexique_1_stackView
      true, // 62 : easyBindings_lexique_1_standalone
      true, // 63 : easyBindings_lexique_1_struct
      true, // 64 : easyBindings_lexique_1_super
      true, // 65 : easyBindings_lexique_1_tableViewController
      true, // 66 : easyBindings_lexique_1_toMany
      true, // 67 : easyBindings_lexique_1_toOne
      true, // 68 : easyBindings_lexique_1_transient
      true, // 69 : easyBindings_lexique_1_typeView
      true, // 70 : easyBindings_lexique_1_version
      true, // 71 : easyBindings_lexique_1_vStack
      true, // 72 : easyBindings_lexique_1_versionShouldChange
      true, // 73 : easyBindings_lexique_1_view
      true, // 74 : easyBindings_lexique_1_weak
      true, // 75 : easyBindings_lexique_1_withVScroller
      true, // 76 : easyBindings_lexique_1_xcodeproject
      true, // 77 : easyBindings_lexique_1_yes
      true, // 78 : easyBindings_lexique_1_enabled
      true, // 79 : easyBindings_lexique_1_graphicController
      true, // 80 : easyBindings_lexique_1_hidden
      true, // 81 : easyBindings_lexique_1_tableValue
      true, // 82 : easyBindings_lexique_1_run
      true, // 83 : easyBindings_lexique_1__3A_
      true, // 84 : easyBindings_lexique_1__2C_
      true, // 85 : easyBindings_lexique_1__3B_
      true, // 86 : easyBindings_lexique_1__21_
      true, // 87 : easyBindings_lexique_1__5B_
      true, // 88 : easyBindings_lexique_1__5D_
      true, // 89 : easyBindings_lexique_1__7B_
      true, // 90 : easyBindings_lexique_1__7D_
      true, // 91 : easyBindings_lexique_1__28_
      true, // 92 : easyBindings_lexique_1__29_
      true, // 93 : easyBindings_lexique_1__2E_
      true, // 94 : easyBindings_lexique_1__7C_
      true, // 95 : easyBindings_lexique_1__26_
      true, // 96 : easyBindings_lexique_1__3C_
      true, // 97 : easyBindings_lexique_1__3E_
      true, // 98 : easyBindings_lexique_1__3C__3D_
      true, // 99 : easyBindings_lexique_1__3E__3D_
      true, // 100 : easyBindings_lexique_1__21__3D_
      true, // 101 : easyBindings_lexique_1__3D__3D_
      true, // 102 : easyBindings_lexique_1__5E_
      true, // 103 : easyBindings_lexique_1__2D_
      true, // 104 : easyBindings_lexique_1__3D_
      false, // 105 : easyBindings_lexique_2_ERROR
      false  // 106 : easyBindings_lexique_2_TEMPLATE
    ]
    return kTerminalAtomicSelection [Int (inTokenIndex)]
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func indexingTitles () -> [String] {

    return []
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //  S T Y L E S
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func styleCount () -> UInt8 {
    return 13
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func styleNameFor (styleIndex inIndex : UInt8) -> String {
    return easyBindings_lexique_styleNameFor (styleIndex: inIndex)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func styleIdentifierFor (styleIndex inIndex : UInt8) -> String {
    return easyBindings_lexique_styleIdentifierFor (styleIndex: inIndex)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Lexical analysis
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func parseLexicalTokenForLexicalColoring () -> SWIFT_Token {
    var loop = true
    var scanningOk = true
    self.mLexicalAttribute_floatValue = 0.0
    self.mLexicalAttribute_tokenString = ""
    self.mLexicalAttribute_uint32value = 0
    var tokenCode : UInt16 = 0
    let startLocation = self.currentLocation
    if scanningOk && (self.testForInputFromChar (97, toChar:122)) {
      while (loop && scanningOk) {
        scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
        if scanningOk && (self.testForInputFromChar (97, toChar:122) || self.testForInputFromChar (65, toChar:90) || self.testForInputFromChar (48, toChar:57) || self.testForInputChar (95)) {
        }else{
          loop = false
        }
      }
      loop = true
      if (tokenCode == 0) {
        tokenCode = search_into_easyBindings_5F_lexique_lowerCaseKeyWordList (mLexicalAttribute_tokenString) ;
      }
      if tokenCode == 0 {
        tokenCode = easyBindings_lexique_1_identifier ;
      }
    }else if scanningOk && (self.testForInputFromChar (65, toChar:90)) {
      while (loop && scanningOk) {
        scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
        if scanningOk && (self.testForCharWithFunction (isUnicodeLetter) || self.testForInputChar (95) || self.testForInputFromChar (48, toChar:57)) {
        }else{
          loop = false
        }
      }
      loop = true
      tokenCode = easyBindings_lexique_1_Identifier
    }else if scanningOk && (self.testForInputChar (64)) {
      if scanningOk && (self.testForCharWithFunction (isUnicodeLetter) || self.testForInputFromChar (48, toChar:57)) {
        while (loop && scanningOk) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
          if scanningOk && (self.testForCharWithFunction (isUnicodeLetter) || self.testForInputFromChar (48, toChar:57) || self.testForInputChar (46)) {
          }else{
            loop = false
          }
        }
        loop = true
      }else{
        scanningOk = false
      }
      tokenCode = easyBindings_lexique_1__40_attribute
    }else if scanningOk && (self.testForInputChar (36)) {
      while (loop && scanningOk) {
        if scanningOk && (self.testForInputFromChar (97, toChar:122) || self.testForInputFromChar (65, toChar:90) || self.testForInputChar (95) || self.testForInputFromChar (48, toChar:57)) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
        }else{
          loop = false
        }
      }
      loop = true
      if (tokenCode == 0) {
        tokenCode = search_into_easyBindings_5F_lexique_reservedBindingNameKeyWordList (mLexicalAttribute_tokenString) ;
      }
      if tokenCode == 0 {
        tokenCode = easyBindings_lexique_1_bindingName ;
      }
    }else if scanningOk && (self.testForInputChar (35)) {
      while (loop && scanningOk) {
        if scanningOk && (self.testForInputFromChar (97, toChar:122) || self.testForInputFromChar (65, toChar:90) || self.testForInputFromChar (48, toChar:57)) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
        }else{
          loop = false
        }
      }
      loop = true
      tokenCode = easyBindings_lexique_1_controllerName
    }else if scanningOk && (self.testForInputChar (92)) {
      while (loop && scanningOk) {
        if scanningOk && (self.testForInputFromChar (97, toChar:122) || self.testForInputFromChar (65, toChar:90) || self.testForInputFromChar (48, toChar:57)) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
        }else{
          loop = false
        }
      }
      loop = true
      tokenCode = easyBindings_lexique_1_viewName
    }else if scanningOk && (self.testForInputFromChar (48, toChar:57)) {
      scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
      while (loop && scanningOk) {
        if scanningOk && (self.testForInputFromChar (48, toChar:57)) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
        }else if scanningOk && (self.testForInputChar (95)) {
        }else{
          loop = false
        }
      }
      loop = true
      if scanningOk && (self.testForInputChar (46)) {
        scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 46)
        while (loop && scanningOk) {
          if scanningOk && (self.testForInputFromChar (48, toChar:57)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
          }else if scanningOk && (self.testForInputChar (95)) {
          }else{
            loop = false
          }
        }
        loop = true
        scanner_cocoa_routine_convertStringToDouble (&scanningOk, mLexicalAttribute_tokenString, &self.mLexicalAttribute_floatValue)
        tokenCode = easyBindings_lexique_1_literal_5F_double
      }else{
        scanner_cocoa_routine_convertDecimalStringIntoUInt (&scanningOk, mLexicalAttribute_tokenString, &self.mLexicalAttribute_uint32value)
        tokenCode = easyBindings_lexique_1_literal_5F_integer
      }
    }else if scanningOk && (self.testForInputChar (34)) {
      while (loop && scanningOk) {
        if scanningOk && (self.testForInputString ("\\n", advance: true)) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 10)
        }else if scanningOk && (self.testForInputString ("\\\"", advance: true)) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 34)
        }else if scanningOk && (self.testForInputChar (32) || self.testForInputChar (33) || self.testForInputFromChar (35, toChar:65533)) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
        }else if scanningOk && (self.testForInputFromChar (65536, toChar:1114111)) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
        }else{
          loop = false
        }
      }
      loop = true
      if scanningOk && (self.testForInputChar (34)) {
        tokenCode = easyBindings_lexique_1_literal_5F_string
      }else{
        scanningOk = false
      }
    }else if scanningOk && self.testForInputString (">=", advance: true) {
      tokenCode = easyBindings_lexique_1__3E__3D_
    }else if scanningOk && self.testForInputString ("==", advance: true) {
      tokenCode = easyBindings_lexique_1__3D__3D_
    }else if scanningOk && self.testForInputString ("<=", advance: true) {
      tokenCode = easyBindings_lexique_1__3C__3D_
    }else if scanningOk && self.testForInputString ("!=", advance: true) {
      tokenCode = easyBindings_lexique_1__21__3D_
    }else if scanningOk && self.testForInputString ("}", advance: true) {
      tokenCode = easyBindings_lexique_1__7D_
    }else if scanningOk && self.testForInputString ("|", advance: true) {
      tokenCode = easyBindings_lexique_1__7C_
    }else if scanningOk && self.testForInputString ("{", advance: true) {
      tokenCode = easyBindings_lexique_1__7B_
    }else if scanningOk && self.testForInputString ("^", advance: true) {
      tokenCode = easyBindings_lexique_1__5E_
    }else if scanningOk && self.testForInputString ("]", advance: true) {
      tokenCode = easyBindings_lexique_1__5D_
    }else if scanningOk && self.testForInputString ("[", advance: true) {
      tokenCode = easyBindings_lexique_1__5B_
    }else if scanningOk && self.testForInputString (">", advance: true) {
      tokenCode = easyBindings_lexique_1__3E_
    }else if scanningOk && self.testForInputString ("=", advance: true) {
      tokenCode = easyBindings_lexique_1__3D_
    }else if scanningOk && self.testForInputString ("<", advance: true) {
      tokenCode = easyBindings_lexique_1__3C_
    }else if scanningOk && self.testForInputString (";", advance: true) {
      tokenCode = easyBindings_lexique_1__3B_
    }else if scanningOk && self.testForInputString (":", advance: true) {
      tokenCode = easyBindings_lexique_1__3A_
    }else if scanningOk && self.testForInputString (".", advance: true) {
      tokenCode = easyBindings_lexique_1__2E_
    }else if scanningOk && self.testForInputString ("-", advance: true) {
      tokenCode = easyBindings_lexique_1__2D_
    }else if scanningOk && self.testForInputString (",", advance: true) {
      tokenCode = easyBindings_lexique_1__2C_
    }else if scanningOk && self.testForInputString (")", advance: true) {
      tokenCode = easyBindings_lexique_1__29_
    }else if scanningOk && self.testForInputString ("(", advance: true) {
      tokenCode = easyBindings_lexique_1__28_
    }else if scanningOk && self.testForInputString ("&", advance: true) {
      tokenCode = easyBindings_lexique_1__26_
    }else if scanningOk && self.testForInputString ("!", advance: true) {
      tokenCode = easyBindings_lexique_1__21_
    }else if scanningOk && (self.testForInputString ("//", advance: true)) {
      while (loop && scanningOk) {
        if scanningOk && (self.testForInputFromChar (1, toChar:9) || self.testForInputChar (11) || self.testForInputChar (12) || self.testForInputFromChar (14, toChar:65533)) {
        }else{
          loop = false
        }
      }
      loop = true
      tokenCode = easyBindings_lexique_1_comment
    }else if scanningOk && (self.testForInputFromChar (1, toChar:32)) {
    }else if self.testForInputChar (0) { // End of source text ?
      tokenCode = easyBindings_lexique_1_ ; // Empty string code
    }else{ // Unknown input character
      tokenCode = easyBindings_lexique_2_TEMPLATE
      self.advance ()
    }
    return SWIFT_Token (
      range: NSRange (location: startLocation, length: self.currentLocation - startLocation),
      tokenCode: tokenCode,
      templateDelimiterIndex: self.mEndTemplateDelimiterIndex
    )
  }
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}


//--------------------------------------------------------------------------------------------------

/* - (instancetype) init {
  self = [super init] ;
  if (self) {
    noteObjectAllocation (self) ;
    mLexicalAttribute_floatValue = 0.0 ;
    mLexicalAttribute_tokenString = [[NSMutableString alloc] init] ;
    mLexicalAttribute_uint32value = 0 ;
  }
  return self ;
} */

//--------------------------------------------------------------------------------------------------
//
//            Terminal Symbols as end of script in template mark
//
//--------------------------------------------------------------------------------------------------

/*

*/


//--------------------------------------------------------------------------------------------------
//
//             Key words table 'lowerCaseKeyWordList'      
//
//--------------------------------------------------------------------------------------------------

fileprivate func search_into_easyBindings_5F_lexique_lowerCaseKeyWordList (_ inSearchedString : String) -> UInt16 {
  let dictionary : [String : UInt16] = [
    "no" : easyBindings_lexique_1_no,
    "all" : easyBindings_lexique_1_all,
    "one" : easyBindings_lexique_1_one,
    "yes" : easyBindings_lexique_1_yes,
    "enum" : easyBindings_lexique_1_enum,
    "func" : easyBindings_lexique_1_func,
    "none" : easyBindings_lexique_1_none,
    "root" : easyBindings_lexique_1_root,
    "self" : easyBindings_lexique_1_self,
    "view" : easyBindings_lexique_1_view,
    "weak" : easyBindings_lexique_1_weak,
    "class" : easyBindings_lexique_1_class,
    "prefs" : easyBindings_lexique_1_prefs,
    "proxy" : easyBindings_lexique_1_proxy,
    "space" : easyBindings_lexique_1_space,
    "super" : easyBindings_lexique_1_super,
    "toOne" : easyBindings_lexique_1_toOne,
    "action" : easyBindings_lexique_1_action,
    "column" : easyBindings_lexique_1_column,
    "entity" : easyBindings_lexique_1_entity,
    "extern" : easyBindings_lexique_1_extern,
    "gutter" : easyBindings_lexique_1_gutter,
    "hStack" : easyBindings_lexique_1_hStack,
    "linker" : easyBindings_lexique_1_linker,
    "outlet" : easyBindings_lexique_1_outlet,
    "struct" : easyBindings_lexique_1_struct,
    "toMany" : easyBindings_lexique_1_toMany,
    "vStack" : easyBindings_lexique_1_vStack,
    "binding" : easyBindings_lexique_1_binding,
    "default" : easyBindings_lexique_1_default,
    "divider" : easyBindings_lexique_1_divider,
    "graphic" : easyBindings_lexique_1_graphic,
    "include" : easyBindings_lexique_1_include,
    "inverse" : easyBindings_lexique_1_inverse,
    "mainxib" : easyBindings_lexique_1_mainxib,
    "newView" : easyBindings_lexique_1_newView,
    "sortkey" : easyBindings_lexique_1_sortkey,
    "version" : easyBindings_lexique_1_version,
    "abstract" : easyBindings_lexique_1_abstract,
    "calledBy" : easyBindings_lexique_1_calledBy,
    "computed" : easyBindings_lexique_1_computed,
    "graphviz" : easyBindings_lexique_1_graphviz,
    "menuItem" : easyBindings_lexique_1_menuItem,
    "override" : easyBindings_lexique_1_override,
    "property" : easyBindings_lexique_1_property,
    "typeView" : easyBindings_lexique_1_typeView,
    "separator" : easyBindings_lexique_1_separator,
    "signature" : easyBindings_lexique_1_signature,
    "stackView" : easyBindings_lexique_1_stackView,
    "transient" : easyBindings_lexique_1_transient,
    "autolayout" : easyBindings_lexique_1_autolayout,
    "externFunc" : easyBindings_lexique_1_externFunc,
    "standalone" : easyBindings_lexique_1_standalone,
    "dependsFrom" : easyBindings_lexique_1_dependsFrom,
    "outletArray" : easyBindings_lexique_1_outletArray,
    "configurator" : easyBindings_lexique_1_configurator,
    "xcodeproject" : easyBindings_lexique_1_xcodeproject,
    "classForSwift" : easyBindings_lexique_1_classForSwift,
    "withVScroller" : easyBindings_lexique_1_withVScroller,
    "editableColumn" : easyBindings_lexique_1_editableColumn,
    "externDelegate" : easyBindings_lexique_1_externDelegate,
    "arrayController" : easyBindings_lexique_1_arrayController,
    "handlingOpposite" : easyBindings_lexique_1_handlingOpposite,
    "autoLayoutDocument" : easyBindings_lexique_1_autoLayoutDocument,
    "selectionController" : easyBindings_lexique_1_selectionController,
    "tableViewController" : easyBindings_lexique_1_tableViewController,
    "versionShouldChange" : easyBindings_lexique_1_versionShouldChange
  ]
  return dictionary [inSearchedString, default: easyBindings_lexique_1_]
}

//--------------------------------------------------------------------------------------------------
//
//             Key words table 'reservedBindingNameKeyWordList'      
//
//--------------------------------------------------------------------------------------------------

fileprivate func search_into_easyBindings_5F_lexique_reservedBindingNameKeyWordList (_ inSearchedString : String) -> UInt16 {
  let dictionary : [String : UInt16] = [
    "run" : easyBindings_lexique_1_run,
    "hidden" : easyBindings_lexique_1_hidden,
    "enabled" : easyBindings_lexique_1_enabled,
    "tableValue" : easyBindings_lexique_1_tableValue,
    "graphicController" : easyBindings_lexique_1_graphicController
  ]
  return dictionary [inSearchedString, default: easyBindings_lexique_1_]
}





//--------------------------------------------------------------------------------------------------
//
//               P A R S E    L E X I C A L    T O K E N
//
//--------------------------------------------------------------------------------------------------

/* - (void) parseLexicalTokenForLexicalColoring {
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

*/

//--------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


