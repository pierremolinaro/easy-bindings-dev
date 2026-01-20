//--- START OF USER ZONE 1


//--- END OF USER ZONE 1
//--------------------------------------------------------------------------------------------------
//   LEXIQUE easyBindings_lexique
//--------------------------------------------------------------------------------------------------

import SwiftUI

//--------------------------------------------------------------------------------------------------

struct SettingViewFor_easyBindings_lexique : View {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @AppStorage("FontFor_easyBindings_lexique")
  private var mFont = CustomFont (nsFont: NSFont.monospacedSystemFont (ofSize: 13.0, weight: .regular))

  @AppStorage("LineHeightFor_easyBindings_lexique")
  private var mLineHeight : Int = 12

  @AppStorage("ColorFor_easyBindings_lexique")
  private var mDefaultColor : Color = .black

  @AppStorage("ColorFor_easyBindings_lexique-keywordsStyle")
  private var mColorFor_keywordsStyle : Color = .black

  @AppStorage("BoldFor_easyBindings_lexique-keywordsStyle")
  private var mBoldFor_keywordsStyle : Bool = false

  @AppStorage("ItalicFor_easyBindings_lexique-keywordsStyle")
  private var mItalicFor_keywordsStyle : Bool = false

  @AppStorage("ColorFor_easyBindings_lexique-idfStyle")
  private var mColorFor_idfStyle : Color = .black

  @AppStorage("BoldFor_easyBindings_lexique-idfStyle")
  private var mBoldFor_idfStyle : Bool = false

  @AppStorage("ItalicFor_easyBindings_lexique-idfStyle")
  private var mItalicFor_idfStyle : Bool = false

  @AppStorage("ColorFor_easyBindings_lexique-IdfStyle")
  private var mColorFor_IdfStyle : Color = .black

  @AppStorage("BoldFor_easyBindings_lexique-IdfStyle")
  private var mBoldFor_IdfStyle : Bool = false

  @AppStorage("ItalicFor_easyBindings_lexique-IdfStyle")
  private var mItalicFor_IdfStyle : Bool = false

  @AppStorage("ColorFor_easyBindings_lexique-attributeStyle")
  private var mColorFor_attributeStyle : Color = .black

  @AppStorage("BoldFor_easyBindings_lexique-attributeStyle")
  private var mBoldFor_attributeStyle : Bool = false

  @AppStorage("ItalicFor_easyBindings_lexique-attributeStyle")
  private var mItalicFor_attributeStyle : Bool = false

  @AppStorage("ColorFor_easyBindings_lexique-bindingNameStyle")
  private var mColorFor_bindingNameStyle : Color = .black

  @AppStorage("BoldFor_easyBindings_lexique-bindingNameStyle")
  private var mBoldFor_bindingNameStyle : Bool = false

  @AppStorage("ItalicFor_easyBindings_lexique-bindingNameStyle")
  private var mItalicFor_bindingNameStyle : Bool = false

  @AppStorage("ColorFor_easyBindings_lexique-reservedBindingNameStyle")
  private var mColorFor_reservedBindingNameStyle : Color = .black

  @AppStorage("BoldFor_easyBindings_lexique-reservedBindingNameStyle")
  private var mBoldFor_reservedBindingNameStyle : Bool = false

  @AppStorage("ItalicFor_easyBindings_lexique-reservedBindingNameStyle")
  private var mItalicFor_reservedBindingNameStyle : Bool = false

  @AppStorage("ColorFor_easyBindings_lexique-controllerNameStyle")
  private var mColorFor_controllerNameStyle : Color = .black

  @AppStorage("BoldFor_easyBindings_lexique-controllerNameStyle")
  private var mBoldFor_controllerNameStyle : Bool = false

  @AppStorage("ItalicFor_easyBindings_lexique-controllerNameStyle")
  private var mItalicFor_controllerNameStyle : Bool = false

  @AppStorage("ColorFor_easyBindings_lexique-viewNameStyle")
  private var mColorFor_viewNameStyle : Color = .black

  @AppStorage("BoldFor_easyBindings_lexique-viewNameStyle")
  private var mBoldFor_viewNameStyle : Bool = false

  @AppStorage("ItalicFor_easyBindings_lexique-viewNameStyle")
  private var mItalicFor_viewNameStyle : Bool = false

  @AppStorage("ColorFor_easyBindings_lexique-integerStyle")
  private var mColorFor_integerStyle : Color = .black

  @AppStorage("BoldFor_easyBindings_lexique-integerStyle")
  private var mBoldFor_integerStyle : Bool = false

  @AppStorage("ItalicFor_easyBindings_lexique-integerStyle")
  private var mItalicFor_integerStyle : Bool = false

  @AppStorage("ColorFor_easyBindings_lexique-floatStyle")
  private var mColorFor_floatStyle : Color = .black

  @AppStorage("BoldFor_easyBindings_lexique-floatStyle")
  private var mBoldFor_floatStyle : Bool = false

  @AppStorage("ItalicFor_easyBindings_lexique-floatStyle")
  private var mItalicFor_floatStyle : Bool = false

  @AppStorage("ColorFor_easyBindings_lexique-stringStyle")
  private var mColorFor_stringStyle : Color = .black

  @AppStorage("BoldFor_easyBindings_lexique-stringStyle")
  private var mBoldFor_stringStyle : Bool = false

  @AppStorage("ItalicFor_easyBindings_lexique-stringStyle")
  private var mItalicFor_stringStyle : Bool = false

  @AppStorage("ColorFor_easyBindings_lexique-delimitersStyle")
  private var mColorFor_delimitersStyle : Color = .black

  @AppStorage("BoldFor_easyBindings_lexique-delimitersStyle")
  private var mBoldFor_delimitersStyle : Bool = false

  @AppStorage("ItalicFor_easyBindings_lexique-delimitersStyle")
  private var mItalicFor_delimitersStyle : Bool = false

  @AppStorage("ColorFor_easyBindings_lexique-commentStyle")
  private var mColorFor_commentStyle : Color = .black

  @AppStorage("BoldFor_easyBindings_lexique-commentStyle")
  private var mBoldFor_commentStyle : Bool = false

  @AppStorage("ItalicFor_easyBindings_lexique-commentStyle")
  private var mItalicFor_commentStyle : Bool = false


  @AppStorage("ColorFor_easyBindings_lexique_lexical_error")
  private var mColorFor_lexical_error : Color = .red

  @AppStorage("BoldFor_easyBindings_lexique_lexical_error")
  private var mBoldFor_lexical_error : Bool = false

  @AppStorage("ItalicFor_easyBindings_lexique_lexical_error")
  private var mItalicFor_lexical_error : Bool = false

  @AppStorage("ColorFor_easyBindings_lexique_template")
  private var mColorFor_template : Color = .gray

  @AppStorage("BoldFor_easyBindings_lexique_template")
  private var mBoldFor_template : Bool = false

  @AppStorage("ItalicFor_easyBindings_lexique_template")
  private var mItalicFor_template : Bool = false

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var body : some View {
    Form {
      LabeledContent ("Font") { CustomFontPicker (fontBinding: self.$mFont) }
      Picker("Line Height", selection: self.$mLineHeight) {
        Text("1.0").tag(10)
        Text("1.1").tag(11)
        Text("1.2").tag(12)
        Text("1.5").tag(15)
        Text("1.7").tag(17)
        Text("2.0").tag(20)
      }.pickerStyle(.automatic)
      ColorPicker ("Default Color", selection: self.$mDefaultColor)
      LabeledContent ("Keywords") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_keywordsStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_keywordsStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_keywordsStyle)
        }
      }
      LabeledContent ("identifiers") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_idfStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_idfStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_idfStyle)
        }
      }
      LabeledContent ("Identifiers") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_IdfStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_IdfStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_IdfStyle)
        }
      }
      LabeledContent ("Attributes") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_attributeStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_attributeStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_attributeStyle)
        }
      }
      LabeledContent ("Binding Names") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_bindingNameStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_bindingNameStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_bindingNameStyle)
        }
      }
      LabeledContent ("Reserved binding names") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_reservedBindingNameStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_reservedBindingNameStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_reservedBindingNameStyle)
        }
      }
      LabeledContent ("Controller Names") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_controllerNameStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_controllerNameStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_controllerNameStyle)
        }
      }
      LabeledContent ("View Names") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_viewNameStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_viewNameStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_viewNameStyle)
        }
      }
      LabeledContent ("Integer Constants") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_integerStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_integerStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_integerStyle)
        }
      }
      LabeledContent ("Floating Point Constants") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_floatStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_floatStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_floatStyle)
        }
      }
      LabeledContent ("String Constants") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_stringStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_stringStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_stringStyle)
        }
      }
      LabeledContent ("Delimiters") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_delimitersStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_delimitersStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_delimitersStyle)
        }
      }
      LabeledContent ("Comments") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_commentStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_commentStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_commentStyle)
        }
      }
      LabeledContent ("Lexical Error") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_lexical_error).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_lexical_error)
          Toggle ("Italic", isOn: self.$mItalicFor_lexical_error)
        }
      }
      LabeledContent ("Template") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_template).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_template)
          Toggle ("Italic", isOn: self.$mItalicFor_template)
        }
      }
    }.padding (20)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

class ScannerFor_easyBindings_lexique : AbstractScanner {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mDebug = false
  private let mVerboseDebug = false
  private var mTokenArray = [LexicalToken] ()

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final override func popUpDefinitionList () -> [[UInt16]] {
    return gPopUpData_easyBindings_lexique
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final override func blockComment () -> String? {
    return gBlockComment_easyBindings_lexique
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func selectionRange (forProposedRange inProposedSelectionRange : NSRange,
                                granularity inGranularity : NSSelectionGranularity,
                                nsTextViewComputedRange inTextViewComputedRange : NSRange) -> NSRange {
    var result = inTextViewComputedRange
    switch inGranularity {
    case .selectByCharacter :
      ()
    case .selectByWord :
      var found = false
      var idx = 0
      while idx < self.mTokenArray.count, !found {
        let token = self.mTokenArray [idx]
        idx += 1
        let tokenRange = token.range
        found = ((tokenRange.location + tokenRange.length) > inProposedSelectionRange.location)
           && (tokenRange.location <= inProposedSelectionRange.location)
        if found, self.atomicSelectionFor (token: token.tokenCode) {
          result = tokenRange
        }
      }
    case .selectByParagraph :
      var found = false
      var idx = 0
      while idx < self.mTokenArray.count, !found {
        let token = self.mTokenArray [idx]
        idx += 1
        let tokenRange = token.range
        found = ((tokenRange.location + tokenRange.length) > inProposedSelectionRange.location)
           && (tokenRange.location <= inProposedSelectionRange.location)
        if found {
          result = tokenRange
        }
      }
    @unknown default:
      ()
    }
    return result
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Scanner
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

  override func indexingTitles () -> [String] {

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

  final var mFont = CustomFont (nsFont: NSFont.monospacedSystemFont (ofSize: 13.0, weight: .regular))
  final var mLineHeight : Int = 12
  final var mDefaultColor : Color = .black
  final var mColorFor_keywordsStyle : Color = .black
  final var mBoldFor_keywordsStyle : Bool = false
  final var mItalicFor_keywordsStyle : Bool = false
  final var mColorFor_idfStyle : Color = .black
  final var mBoldFor_idfStyle : Bool = false
  final var mItalicFor_idfStyle : Bool = false
  final var mColorFor_IdfStyle : Color = .black
  final var mBoldFor_IdfStyle : Bool = false
  final var mItalicFor_IdfStyle : Bool = false
  final var mColorFor_attributeStyle : Color = .black
  final var mBoldFor_attributeStyle : Bool = false
  final var mItalicFor_attributeStyle : Bool = false
  final var mColorFor_bindingNameStyle : Color = .black
  final var mBoldFor_bindingNameStyle : Bool = false
  final var mItalicFor_bindingNameStyle : Bool = false
  final var mColorFor_reservedBindingNameStyle : Color = .black
  final var mBoldFor_reservedBindingNameStyle : Bool = false
  final var mItalicFor_reservedBindingNameStyle : Bool = false
  final var mColorFor_controllerNameStyle : Color = .black
  final var mBoldFor_controllerNameStyle : Bool = false
  final var mItalicFor_controllerNameStyle : Bool = false
  final var mColorFor_viewNameStyle : Color = .black
  final var mBoldFor_viewNameStyle : Bool = false
  final var mItalicFor_viewNameStyle : Bool = false
  final var mColorFor_integerStyle : Color = .black
  final var mBoldFor_integerStyle : Bool = false
  final var mItalicFor_integerStyle : Bool = false
  final var mColorFor_floatStyle : Color = .black
  final var mBoldFor_floatStyle : Bool = false
  final var mItalicFor_floatStyle : Bool = false
  final var mColorFor_stringStyle : Color = .black
  final var mBoldFor_stringStyle : Bool = false
  final var mItalicFor_stringStyle : Bool = false
  final var mColorFor_delimitersStyle : Color = .black
  final var mBoldFor_delimitersStyle : Bool = false
  final var mItalicFor_delimitersStyle : Bool = false
  final var mColorFor_commentStyle : Color = .black
  final var mBoldFor_commentStyle : Bool = false
  final var mItalicFor_commentStyle : Bool = false
  final var mColorFor_lexical_error : Color = .red
  final var mBoldFor_lexical_error : Bool = false
  final var mItalicFor_lexical_error : Bool = false
  final var mColorFor_template : Color = .gray
  final var mBoldFor_template : Bool = false
  final var mItalicFor_template : Bool = false
  final var mTokenAttributeArray = [[NSAttributedString.Key : Any]?] ()

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func updateTokenStyleArrays (_ ioStyleDidChange : inout Bool) {
    ioStyleDidChange = false
    let ud = UserDefaults.standard
    if let s = ud.string (forKey: "FontFor_easyBindings_lexique"), let v = CustomFont (rawValue: s) {
      if self.mFont != v {
        self.mFont = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "LineHeightFor_easyBindings_lexique"), let v = Int (s) {
      if self.mLineHeight != v {
        self.mLineHeight = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_easyBindings_lexique"), let v = Color (rawValue: s) {
      if self.mDefaultColor != v {
        self.mDefaultColor = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_easyBindings_lexique-keywordsStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_keywordsStyle != v {
        self.mColorFor_keywordsStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_easyBindings_lexique-keywordsStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_easyBindings_lexique-keywordsStyle")
      if self.mBoldFor_keywordsStyle != v {
        self.mBoldFor_keywordsStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_easyBindings_lexique-keywordsStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_easyBindings_lexique-keywordsStyle")
      if self.mItalicFor_keywordsStyle != v {
        self.mItalicFor_keywordsStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_easyBindings_lexique-idfStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_idfStyle != v {
        self.mColorFor_idfStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_easyBindings_lexique-idfStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_easyBindings_lexique-idfStyle")
      if self.mBoldFor_idfStyle != v {
        self.mBoldFor_idfStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_easyBindings_lexique-idfStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_easyBindings_lexique-idfStyle")
      if self.mItalicFor_idfStyle != v {
        self.mItalicFor_idfStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_easyBindings_lexique-IdfStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_IdfStyle != v {
        self.mColorFor_IdfStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_easyBindings_lexique-IdfStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_easyBindings_lexique-IdfStyle")
      if self.mBoldFor_IdfStyle != v {
        self.mBoldFor_IdfStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_easyBindings_lexique-IdfStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_easyBindings_lexique-IdfStyle")
      if self.mItalicFor_IdfStyle != v {
        self.mItalicFor_IdfStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_easyBindings_lexique-attributeStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_attributeStyle != v {
        self.mColorFor_attributeStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_easyBindings_lexique-attributeStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_easyBindings_lexique-attributeStyle")
      if self.mBoldFor_attributeStyle != v {
        self.mBoldFor_attributeStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_easyBindings_lexique-attributeStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_easyBindings_lexique-attributeStyle")
      if self.mItalicFor_attributeStyle != v {
        self.mItalicFor_attributeStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_easyBindings_lexique-bindingNameStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_bindingNameStyle != v {
        self.mColorFor_bindingNameStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_easyBindings_lexique-bindingNameStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_easyBindings_lexique-bindingNameStyle")
      if self.mBoldFor_bindingNameStyle != v {
        self.mBoldFor_bindingNameStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_easyBindings_lexique-bindingNameStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_easyBindings_lexique-bindingNameStyle")
      if self.mItalicFor_bindingNameStyle != v {
        self.mItalicFor_bindingNameStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_easyBindings_lexique-reservedBindingNameStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_reservedBindingNameStyle != v {
        self.mColorFor_reservedBindingNameStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_easyBindings_lexique-reservedBindingNameStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_easyBindings_lexique-reservedBindingNameStyle")
      if self.mBoldFor_reservedBindingNameStyle != v {
        self.mBoldFor_reservedBindingNameStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_easyBindings_lexique-reservedBindingNameStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_easyBindings_lexique-reservedBindingNameStyle")
      if self.mItalicFor_reservedBindingNameStyle != v {
        self.mItalicFor_reservedBindingNameStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_easyBindings_lexique-controllerNameStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_controllerNameStyle != v {
        self.mColorFor_controllerNameStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_easyBindings_lexique-controllerNameStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_easyBindings_lexique-controllerNameStyle")
      if self.mBoldFor_controllerNameStyle != v {
        self.mBoldFor_controllerNameStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_easyBindings_lexique-controllerNameStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_easyBindings_lexique-controllerNameStyle")
      if self.mItalicFor_controllerNameStyle != v {
        self.mItalicFor_controllerNameStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_easyBindings_lexique-viewNameStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_viewNameStyle != v {
        self.mColorFor_viewNameStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_easyBindings_lexique-viewNameStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_easyBindings_lexique-viewNameStyle")
      if self.mBoldFor_viewNameStyle != v {
        self.mBoldFor_viewNameStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_easyBindings_lexique-viewNameStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_easyBindings_lexique-viewNameStyle")
      if self.mItalicFor_viewNameStyle != v {
        self.mItalicFor_viewNameStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_easyBindings_lexique-integerStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_integerStyle != v {
        self.mColorFor_integerStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_easyBindings_lexique-integerStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_easyBindings_lexique-integerStyle")
      if self.mBoldFor_integerStyle != v {
        self.mBoldFor_integerStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_easyBindings_lexique-integerStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_easyBindings_lexique-integerStyle")
      if self.mItalicFor_integerStyle != v {
        self.mItalicFor_integerStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_easyBindings_lexique-floatStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_floatStyle != v {
        self.mColorFor_floatStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_easyBindings_lexique-floatStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_easyBindings_lexique-floatStyle")
      if self.mBoldFor_floatStyle != v {
        self.mBoldFor_floatStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_easyBindings_lexique-floatStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_easyBindings_lexique-floatStyle")
      if self.mItalicFor_floatStyle != v {
        self.mItalicFor_floatStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_easyBindings_lexique-stringStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_stringStyle != v {
        self.mColorFor_stringStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_easyBindings_lexique-stringStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_easyBindings_lexique-stringStyle")
      if self.mBoldFor_stringStyle != v {
        self.mBoldFor_stringStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_easyBindings_lexique-stringStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_easyBindings_lexique-stringStyle")
      if self.mItalicFor_stringStyle != v {
        self.mItalicFor_stringStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_easyBindings_lexique-delimitersStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_delimitersStyle != v {
        self.mColorFor_delimitersStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_easyBindings_lexique-delimitersStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_easyBindings_lexique-delimitersStyle")
      if self.mBoldFor_delimitersStyle != v {
        self.mBoldFor_delimitersStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_easyBindings_lexique-delimitersStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_easyBindings_lexique-delimitersStyle")
      if self.mItalicFor_delimitersStyle != v {
        self.mItalicFor_delimitersStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_easyBindings_lexique-commentStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_commentStyle != v {
        self.mColorFor_commentStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_easyBindings_lexique-commentStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_easyBindings_lexique-commentStyle")
      if self.mBoldFor_commentStyle != v {
        self.mBoldFor_commentStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_easyBindings_lexique-commentStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_easyBindings_lexique-commentStyle")
      if self.mItalicFor_commentStyle != v {
        self.mItalicFor_commentStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_easyBindings_lexique_lexical_error"), let v = Color (rawValue: s) {
      if self.mColorFor_lexical_error != v {
        self.mColorFor_lexical_error = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_easyBindings_lexique_lexical_error") != nil {
      let v = ud.bool (forKey: "BoldFor_easyBindings_lexique_lexical_error")
      if self.mBoldFor_lexical_error != v {
        self.mBoldFor_lexical_error = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_easyBindings_lexique_lexical_error") != nil {
      let v = ud.bool (forKey: "ItalicFor_easyBindings_lexique_lexical_error")
      if self.mItalicFor_lexical_error != v {
        self.mItalicFor_lexical_error = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_easyBindings_lexique_template"), let v = Color (rawValue: s) {
      if self.mColorFor_template != v {
        self.mColorFor_template = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_easyBindings_lexique_template") != nil {
      let v = ud.bool (forKey: "BoldFor_easyBindings_lexique_template")
      if self.mBoldFor_template != v {
        self.mBoldFor_template = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_easyBindings_lexique_template") != nil {
      let v = ud.bool (forKey: "ItalicFor_easyBindings_lexique_template")
      if self.mItalicFor_template != v {
        self.mItalicFor_template = v
        ioStyleDidChange = true
      }
    }
  //--- Build token attribute array
    if ioStyleDidChange {
      let fontManager = NSFontManager.shared
      let boldFont = fontManager.convert (self.mFont.nsFont, toHaveTrait: .boldFontMask)
      let italicFont = fontManager.convert (self.mFont.nsFont, toHaveTrait: .italicFontMask)
      let boldItalicFont = fontManager.convert (boldFont, toHaveTrait: .italicFontMask)
      self.mTokenAttributeArray.removeAll (keepingCapacity: true)
      var attributes = [NSAttributedString.Key : Any] ()
    //--- Attributes for keywordsStyle
      if self.mColorFor_keywordsStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_keywordsStyle)
      }
      if self.mBoldFor_keywordsStyle && self.mItalicFor_keywordsStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_keywordsStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_keywordsStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Attributes for idfStyle
      if self.mColorFor_idfStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_idfStyle)
      }
      if self.mBoldFor_idfStyle && self.mItalicFor_idfStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_idfStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_idfStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Attributes for IdfStyle
      if self.mColorFor_IdfStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_IdfStyle)
      }
      if self.mBoldFor_IdfStyle && self.mItalicFor_IdfStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_IdfStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_IdfStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Attributes for attributeStyle
      if self.mColorFor_attributeStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_attributeStyle)
      }
      if self.mBoldFor_attributeStyle && self.mItalicFor_attributeStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_attributeStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_attributeStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Attributes for bindingNameStyle
      if self.mColorFor_bindingNameStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_bindingNameStyle)
      }
      if self.mBoldFor_bindingNameStyle && self.mItalicFor_bindingNameStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_bindingNameStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_bindingNameStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Attributes for reservedBindingNameStyle
      if self.mColorFor_reservedBindingNameStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_reservedBindingNameStyle)
      }
      if self.mBoldFor_reservedBindingNameStyle && self.mItalicFor_reservedBindingNameStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_reservedBindingNameStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_reservedBindingNameStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Attributes for controllerNameStyle
      if self.mColorFor_controllerNameStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_controllerNameStyle)
      }
      if self.mBoldFor_controllerNameStyle && self.mItalicFor_controllerNameStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_controllerNameStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_controllerNameStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Attributes for viewNameStyle
      if self.mColorFor_viewNameStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_viewNameStyle)
      }
      if self.mBoldFor_viewNameStyle && self.mItalicFor_viewNameStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_viewNameStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_viewNameStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Attributes for integerStyle
      if self.mColorFor_integerStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_integerStyle)
      }
      if self.mBoldFor_integerStyle && self.mItalicFor_integerStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_integerStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_integerStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Attributes for floatStyle
      if self.mColorFor_floatStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_floatStyle)
      }
      if self.mBoldFor_floatStyle && self.mItalicFor_floatStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_floatStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_floatStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Attributes for stringStyle
      if self.mColorFor_stringStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_stringStyle)
      }
      if self.mBoldFor_stringStyle && self.mItalicFor_stringStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_stringStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_stringStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Attributes for delimitersStyle
      if self.mColorFor_delimitersStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_delimitersStyle)
      }
      if self.mBoldFor_delimitersStyle && self.mItalicFor_delimitersStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_delimitersStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_delimitersStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Attributes for commentStyle
      if self.mColorFor_commentStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_commentStyle)
      }
      if self.mBoldFor_commentStyle && self.mItalicFor_commentStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_commentStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_commentStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Lexical error
      if self.mColorFor_lexical_error != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_lexical_error)
      }
      if self.mBoldFor_lexical_error && self.mItalicFor_lexical_error {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_lexical_error {
        attributes [.font] = boldFont
      }else if self.mItalicFor_lexical_error {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Template
      if self.mColorFor_template != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_template)
      }
      if self.mBoldFor_template && self.mItalicFor_template {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_template {
        attributes [.font] = boldFont
      }else if self.mItalicFor_template {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func performLexicalColoringAfterUserDefaultChange (textStorage inTextStorage : NSTextStorage) {
    if self.mDebug { Swift.print ("performLexicalColoringAfterUserDefaultChange") }
    let start = Date ()
    var styleDidChange = false
    self.updateTokenStyleArrays (&styleDidChange)
    if styleDidChange {
      let nsString = inTextStorage.string as NSString
      let fullRange = NSRange (location: 0, length: nsString.length)
    //---- Apply default attributes
      let tsDelegate : (any NSTextStorageDelegate)? = inTextStorage.delegate
      inTextStorage.delegate = nil // NSTextStorageDelegate
      inTextStorage.beginEditing ()
      let defaultFont = self.mFont.nsFont
      inTextStorage.font = defaultFont
      let ps = NSMutableParagraphStyle ()
      ps.lineHeightMultiple = CGFloat (self.mLineHeight) / 10.0
      let defaultAttributes : [NSAttributedString.Key : Any] = [
        .font: defaultFont,
        .foregroundColor: NSColor (self.mDefaultColor),
        .paragraphStyle : ps
      ]
      inTextStorage.setAttributes (defaultAttributes, range: fullRange)
    //--- Apply styles
      for token in self.mTokenArray {
        let idx = Int (self.styleIndexFor (token: token.tokenCode))
        if idx > 0, idx < (self.mTokenAttributeArray.count - 1), let attributes = self.mTokenAttributeArray [idx - 1] {
          inTextStorage.addAttributes (attributes, range: token.range)
        }
      }
      inTextStorage.endEditing ()
      inTextStorage.delegate = tsDelegate // NSTextStorageDelegate
    }
    if self.mDebug { Swift.print ("  done: \(Int (Date ().timeIntervalSince (start) * 1000.0)) ms") }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func performLexicalAnalysisAndColoring (textStorage inTextStorage : NSTextStorage,
                                                   editedRange inEditedRange : NSRange,
                                                   changeInLength inDelta : Int,
                                                   popMenuItems ioPopupMenuItems : inout [IdentifiableAttributedString]) {
    if self.mDebug { Swift.print ("performLexicalAnalysisAndColoring \(inEditedRange), delta \(inDelta)") }
    let nsString = inTextStorage.string as NSString
  //---
    var savedTokenCount = 0
    var found = false
    while savedTokenCount < self.mTokenArray.count, !found {
      if self.mTokenArray [savedTokenCount].range.upperBound < inEditedRange.location {
        savedTokenCount += 1
      }else{
        found = true
      }
    }
    if self.mDebug { Swift.print ("  savedTokenCount \(savedTokenCount), currently \(self.mTokenArray.count) tokens") }
  //--- Eliminate tokens beyond end of source string
    while let lastToken = self.mTokenArray.last, lastToken.range.upperBound > nsString.length {
      if self.mVerboseDebug { Swift.print ("Remove last token \(lastToken.range), beyond end") }
      _ = self.mTokenArray.removeLast ()
    }
    if self.mDebug { Swift.print ("  Eliminate token beyond end: \(self.mTokenArray.count) tokens") }
  //--- Translater les tokens suivants
    var i = savedTokenCount + 1
    while i < self.mTokenArray.count {
      let token = self.mTokenArray [i]
      let newToken = LexicalToken (
        range: NSRange (location: token.range.location + inDelta, length: token.range.length),
        tokenCode: token.tokenCode,
        templateDelimiterIndex: token.templateDelimiterIndex
      )
      self.mTokenArray [i] = newToken
      i += 1
    }
  //--- Eliminate tokens beyond end of source string
    while let lastToken = self.mTokenArray.last, lastToken.range.upperBound > nsString.length {
      if self.mVerboseDebug { Swift.print ("Remove last token \(lastToken.range), beyond end") }
      _ = self.mTokenArray.removeLast ()
    }
    if self.mDebug { Swift.print ("  Eliminate token beyond end, after delta correction: \(self.mTokenArray.count) tokens") }
  //--- Perform lexical analysis
    let start = Date ()
    if savedTokenCount == 0 {
      self.resetScannerLocation (withString: nsString)
    }else{
      self.resetScanner (
        withString: nsString,
        location: self.mTokenArray [savedTokenCount-1].range.upperBound,
        templateDelimiterIndex : self.mTokenArray [savedTokenCount-1].templateDelimiterIndex
      )
    }
    if self.mDebug { Swift.print ("  Scanning start location: \(self.currentLocation)") }
    var stop = false
    var insertionIndex = savedTokenCount
    while self.currentLocation < nsString.length, !stop {
      let token : LexicalToken = self.parseLexicalTokenForLexicalColoring ()
      if token.tokenCode > 0 { // For eliminating separators
        if self.mVerboseDebug { Swift.print ("  -> new token \(token.range) '\(nsString.substring (with: token.range))'") }
      //--- Eliminate previous tokens before new token location
        if insertionIndex < self.mTokenArray.count,
              self.mTokenArray [insertionIndex] == token,
              token.range.location > inEditedRange.upperBound {
          if self.mVerboseDebug { Swift.print ("    stop at \(insertionIndex)") }
          stop = true
        }else{
          while insertionIndex < self.mTokenArray.count,
                self.mTokenArray [insertionIndex].range.lowerBound <= token.range.location {
            if self.mVerboseDebug { Swift.print ("    remove token \(self.mTokenArray [insertionIndex].range) at \(insertionIndex)") }
            self.mTokenArray.remove (at: insertionIndex)
          }
          if insertionIndex == self.mTokenArray.count {
            if self.mVerboseDebug { Swift.print ("    append token \(token.range) at \(insertionIndex)") }
            self.mTokenArray.append (token)
            insertionIndex += 1
          }else{
            if self.mVerboseDebug {  Swift.print ("    insert token \(token.range) at \(insertionIndex)") }
            self.mTokenArray.insert (token, at: insertionIndex)
            insertionIndex += 1
          }
        }
      }
    }
    if self.mDebug { Swift.print ("  Lexical analysis time: \(Int (Date ().timeIntervalSince (start) * 1000.0)) ms") }
  //---- Apply default attributes
    let modificationStart = min (inEditedRange.location, (savedTokenCount == 0)
      ? 0
      : self.mTokenArray [savedTokenCount - 1].range.upperBound)
    let modificationEnd = max (inEditedRange.upperBound, (insertionIndex == self.mTokenArray.count)
       ? nsString.length
       : self.mTokenArray [insertionIndex].range.upperBound
    )
    if self.mDebug { Swift.print ("  Attributes will change from char index \(modificationStart) to \(modificationEnd)") }
    let start2 = Date ()
    if modificationStart < modificationEnd {
      let modifiedRange = NSRange (location: modificationStart, length: modificationEnd - modificationStart)
      let tsDelegate : (any NSTextStorageDelegate)? = inTextStorage.delegate
      inTextStorage.delegate = nil // NSTextStorageDelegate
      inTextStorage.beginEditing ()
      let defaultFont = self.mFont.nsFont
      let ps = NSMutableParagraphStyle ()
      ps.lineHeightMultiple = CGFloat (self.mLineHeight) / 10.0
      let defaultAttributes : [NSAttributedString.Key : Any] = [
        .font: defaultFont,
        .foregroundColor: NSColor (self.mDefaultColor),
        .paragraphStyle : ps
      ]
      if self.mVerboseDebug { Swift.print ("Apply default attributes \(modifiedRange)") }
      inTextStorage.setAttributes (defaultAttributes, range: modifiedRange)
    //--- Apply styles
      var idx = 0
      stop = false
      while idx < self.mTokenArray.count, !stop { // Apply token styles
        let token = self.mTokenArray [idx]
        idx += 1
        if token.range.lowerBound >= modifiedRange.upperBound {
          stop = true
        }else if token.range.upperBound > modifiedRange.lowerBound {
          let styleIndex = Int (self.styleIndexFor (token: token.tokenCode))
          if styleIndex > 0, styleIndex < (self.mTokenAttributeArray.count - 1), let attributes = self.mTokenAttributeArray [styleIndex - 1] {
            inTextStorage.addAttributes (attributes, range: token.range)
          }
        }
      }
      inTextStorage.endEditing ()
      inTextStorage.delegate = tsDelegate // NSTextStorageDelegate
    }
    if self.mDebug { Swift.print ("  Adding attributes: \(Int (Date ().timeIntervalSince (start2) * 1000.0)) ms") }
    ioPopupMenuItems = self.updateEntryPopUpButtons (self.mTokenArray)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Lexical analysis
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func parseLexicalTokenForLexicalColoring () -> LexicalToken {
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
        if scanningOk && (self.testForChar_isUnicodeLetter () || self.testForInputChar (95) || self.testForInputFromChar (48, toChar:57)) {
        }else{
          loop = false
        }
      }
      loop = true
      tokenCode = easyBindings_lexique_1_Identifier
    }else if scanningOk && (self.testForInputChar (64)) {
      if scanningOk && (self.testForChar_isUnicodeLetter () || self.testForInputFromChar (48, toChar:57)) {
        while (loop && scanningOk) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
          if scanningOk && (self.testForChar_isUnicodeLetter () || self.testForInputFromChar (48, toChar:57) || self.testForInputChar (46)) {
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
    return LexicalToken (
      range: NSRange (location: startLocation, length: self.currentLocation - startLocation),
      tokenCode: tokenCode,
      templateDelimiterIndex: self.mEndTemplateDelimiterIndex
    )
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
//             Key words table 'lowerCaseKeyWordList'      
//--------------------------------------------------------------------------------------------------

fileprivate let kDictionary_easyBindings_5F_lexique_lowerCaseKeyWordList : [String : UInt16] = [
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

fileprivate func search_into_easyBindings_5F_lexique_lowerCaseKeyWordList (_ inSearchedString : String) -> UInt16 {
  return kDictionary_easyBindings_5F_lexique_lowerCaseKeyWordList [inSearchedString, default: easyBindings_lexique_1_]
}

//--------------------------------------------------------------------------------------------------
//             Key words table 'reservedBindingNameKeyWordList'      
//--------------------------------------------------------------------------------------------------

fileprivate let kDictionary_easyBindings_5F_lexique_reservedBindingNameKeyWordList : [String : UInt16] = [
  "run" : easyBindings_lexique_1_run,
  "hidden" : easyBindings_lexique_1_hidden,
  "enabled" : easyBindings_lexique_1_enabled,
  "tableValue" : easyBindings_lexique_1_tableValue,
  "graphicController" : easyBindings_lexique_1_graphicController
]

fileprivate func search_into_easyBindings_5F_lexique_reservedBindingNameKeyWordList (_ inSearchedString : String) -> UInt16 {
  return kDictionary_easyBindings_5F_lexique_reservedBindingNameKeyWordList [inSearchedString, default: easyBindings_lexique_1_]
}



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

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


