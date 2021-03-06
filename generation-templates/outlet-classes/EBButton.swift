//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

import Cocoa

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

class EBButton : NSButton, EBUserClassNameProtocol {

  //····················································································································

  required init? (coder : NSCoder) {
    super.init (coder: coder)
    noteObjectAllocation (self)
  }

  //····················································································································

  override init (frame : NSRect) {
    super.init (frame: frame)
    noteObjectAllocation (self)
  }

  //····················································································································

  deinit {
    noteObjectDeallocation (self)
  }

  //····················································································································
  //  $title binding
  //····················································································································

  fileprivate func updateTitle (_ object : EBReadOnlyProperty_String) {
    switch object.selection {
    case .empty :
      self.title = "-"
      self.toolTip = nil
    case .multiple :
      self.title = "-"
      self.toolTip = nil
    case .single (let v) :
      self.title = v
      self.toolTip = v
    }
  }

  //····················································································································

  fileprivate final var mTitleController : EBReadOnlyPropertyController? = nil

  //····················································································································

  final func bind_title (_ object : EBReadOnlyProperty_String) {
    self.mTitleController = EBReadOnlyPropertyController (
      observedObjects: [object],
      callBack: { self.updateTitle (object) }
    )
  }

  //····················································································································

  final func unbind_title () {
    self.mTitleController?.unregister ()
    self.mTitleController = nil
  }

  //····················································································································

}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//   EBButton_TableViewCell
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

@objc(EBButton_TableViewCell) final class EBButton_TableViewCell : EBTableCellView {

  //····················································································································

  @IBOutlet var mCellOutlet : EBButton? = nil

  //····················································································································

  func checkOutlet (columnName : String, file : String, line : Int) {
    if let cellOutlet : NSObject = self.mCellOutlet {
      if !(cellOutlet is EBButton) {
        presentErrorWindow (file, line, "\"\(columnName)\" column view is not an instance of EBButton")
      }
    }else{
      presentErrorWindow (file, line, "\"\(columnName)\" column view mCellOutlet is nil (should be an instance of EBButton)")
    }
  }

  //····················································································································

  func update () {
    self.mCellOutlet?.mTitleController?.mEventCallBack? ()
  }

  //····················································································································

}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
