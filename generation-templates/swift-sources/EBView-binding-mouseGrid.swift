//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

import Cocoa

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//   EBView
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

extension EBView {

  //····················································································································

  func bind_mouseGrid (_ model : EBReadOnlyProperty_Int, file : String, line : Int) {
    self.mMouseGridController = EBReadOnlyController_Int (
      model: model,
      callBack: { [weak self] in self?.updateMouseGrid (from: model) }
    )
  }

  //····················································································································

  func unbind_mouseGrid () {
    self.mMouseGridController?.unregister ()
    self.mMouseGridController = nil
  }

  //····················································································································

  private func updateMouseGrid (from model : EBReadOnlyProperty_Int) {
    switch model.prop {
    case .empty, .multiple :
      self.set (mouseGridInCanariUnit: 1)
    case .single (let v) :
      self.set (mouseGridInCanariUnit: v)
    }
  }

  //····················································································································

}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————