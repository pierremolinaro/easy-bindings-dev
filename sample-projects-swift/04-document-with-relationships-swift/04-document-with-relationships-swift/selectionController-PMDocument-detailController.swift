import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    SelectionController_PMDocument_detailController                                                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class SelectionController_PMDocument_detailController : PMObject {
  private var mModel : ReadOnlyArrayOf_NameEntity?

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //   SELECTION OBSERVABLE PROPERTIES                                                                                 *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  var aValue = PMPropertyProxy_Int () 
  var name = PMPropertyProxy_String () 

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //   BIND SELECTION                                                                                                  *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  func bind_selection (model : ReadOnlyArrayOf_NameEntity, file:String, line:Int) {
    mModel = model
    aValue.readModelFunction = {
      if let model = self.mModel where model.prop.1 == .singleSelection {
        var s = Set<Int> ()
        var selection = PMSelectionKind.singleSelection
        for object in model.prop.0 {
          selection &= object.aValue.prop.1
          s.insert (object.aValue.prop.0)
        }
        if selection == .singleSelection {
          if s.count == 0 {
            return (0, .noSelection)
          }else if s.count == 1 {
            return (s.first!, .singleSelection)
          }else{
            return (0, .multipleSelection)
          }
        }else{
          return (0, selection)
        }
      }else{
        return (0, .noSelection)
      }
    }
    aValue.writeModelFunction = { (inValue : Int) in
      if let model = self.mModel {
        for object in model.prop.0 {
          object.aValue.setProp (inValue)
        }
      }
    }
    aValue.validateAndWriteModelFunction = { (candidateValue : Int, windowForSheet : NSWindow?) in
      if let model = self.mModel {
        for object in model.prop.0 {
          let result = object.aValue.validateAndSetProp (candidateValue, windowForSheet:windowForSheet)
          if !result {
            return false
          }
        }
        return true
      }else{
        return false
      }
    }
    model.addObserver (aValue, postEvent:true)
    name.readModelFunction = {
      if let model = self.mModel where model.prop.1 == .singleSelection {
        var s = Set<String> ()
        var selection = PMSelectionKind.singleSelection
        for object in model.prop.0 {
          selection &= object.name.prop.1
          s.insert (object.name.prop.0)
        }
        if selection == .singleSelection {
          if s.count == 0 {
            return ("", .noSelection)
          }else if s.count == 1 {
            return (s.first!, .singleSelection)
          }else{
            return ("", .multipleSelection)
          }
        }else{
          return ("", selection)
        }
      }else{
        return ("", .noSelection)
      }
    }
    name.writeModelFunction = { (inValue : String) in
      if let model = self.mModel {
        for object in model.prop.0 {
          object.name.setProp (inValue)
        }
      }
    }
    name.validateAndWriteModelFunction = { (candidateValue : String, windowForSheet : NSWindow?) in
      if let model = self.mModel {
        for object in model.prop.0 {
          let result = object.name.validateAndSetProp (candidateValue, windowForSheet:windowForSheet)
          if !result {
            return false
          }
        }
        return true
      }else{
        return false
      }
    }
    model.addObserver (name, postEvent:true)
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //   UNBIND SELECTION                                                                                                *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  func unbind_selection () {
    aValue.readModelFunction = nil 
    aValue.writeModelFunction = nil 
    aValue.validateAndWriteModelFunction = nil 
    mModel?.removeObserver (aValue, postEvent:false)
    name.readModelFunction = nil 
    name.writeModelFunction = nil 
    name.validateAndWriteModelFunction = nil 
    mModel?.removeObserver (name, postEvent:false)
    mModel = nil    
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

