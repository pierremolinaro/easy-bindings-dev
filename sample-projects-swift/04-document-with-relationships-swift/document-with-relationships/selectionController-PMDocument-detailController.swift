import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    SelectionController_PMDocument_detailController                                                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class SelectionController_PMDocument_detailController : EBObject {
  private var mModel : ReadOnlyArrayOf_NameEntity?

  //···················································································································* 
  //   SELECTION OBSERVABLE PROPERTIES                                                                                 *
  //···················································································································* 

  var aValue = EBPropertyProxy_Int () 
  var name = EBPropertyProxy_String () 

  //···················································································································* 
  //   BIND SELECTION                                                                                                  *
  //···················································································································* 

  func bind_selection (model : ReadOnlyArrayOf_NameEntity, file:String, line:Int) {
    mModel = model
    bind_property_aValue (model)
    bind_property_name (model)
  }

  //···················································································································*

  private final func bind_property_aValue (model : ReadOnlyArrayOf_NameEntity) {
    model.addObserverOf_aValue (aValue, postEvent:true)
    model.addObserver (aValue, postEvent:true)
    aValue.readModelFunction = {
      if let model = self.mModel {
        switch model.prop {
        case .noSelection :
          return .noSelection
        case .multipleSelection :
          return .multipleSelection
        case .singleSelection (let v) :
          var s = Set<Int> ()
          var isMultipleSelection = false
          for object in v {
            switch object.aValue.prop {
            case .noSelection :
              return .noSelection
            case .multipleSelection :
              isMultipleSelection = true
            case .singleSelection (let vProp) :
              s.insert (vProp)
            }
          }
          if isMultipleSelection {
            return .multipleSelection
          }else if s.count == 0 {
            return .noSelection
          }else if s.count == 1 {
            return .singleSelection (s.first!)
          }else{
            return .multipleSelection
          }
        }
      }else{
        return .noSelection
      }
    }
    aValue.writeModelFunction = { (inValue : Int) in
      if let model = self.mModel {
        switch model.prop {
        case .noSelection, .multipleSelection :
          break
        case .singleSelection (let v) :
          for object in v {
            object.aValue.setProp (inValue)
          }
        }
      }
    }
    aValue.validateAndWriteModelFunction = { (candidateValue : Int, windowForSheet : NSWindow?) in
      if let model = self.mModel {
        switch model.prop {
        case .noSelection, .multipleSelection :
          return false
        case .singleSelection (let v) :
          for object in v {
            let result = object.aValue.validateAndSetProp (candidateValue, windowForSheet:windowForSheet)
            if !result {
              return false
            }
          }
          return true
        }
      }else{
        return false
      }
    }
  }

  //···················································································································*

  private final func bind_property_name (model : ReadOnlyArrayOf_NameEntity) {
    model.addObserverOf_name (name, postEvent:true)
    model.addObserver (name, postEvent:true)
    name.readModelFunction = {
      if let model = self.mModel {
        switch model.prop {
        case .noSelection :
          return .noSelection
        case .multipleSelection :
          return .multipleSelection
        case .singleSelection (let v) :
          var s = Set<String> ()
          var isMultipleSelection = false
          for object in v {
            switch object.name.prop {
            case .noSelection :
              return .noSelection
            case .multipleSelection :
              isMultipleSelection = true
            case .singleSelection (let vProp) :
              s.insert (vProp)
            }
          }
          if isMultipleSelection {
            return .multipleSelection
          }else if s.count == 0 {
            return .noSelection
          }else if s.count == 1 {
            return .singleSelection (s.first!)
          }else{
            return .multipleSelection
          }
        }
      }else{
        return .noSelection
      }
    }
    name.writeModelFunction = { (inValue : String) in
      if let model = self.mModel {
        switch model.prop {
        case .noSelection, .multipleSelection :
          break
        case .singleSelection (let v) :
          for object in v {
            object.name.setProp (inValue)
          }
        }
      }
    }
    name.validateAndWriteModelFunction = { (candidateValue : String, windowForSheet : NSWindow?) in
      if let model = self.mModel {
        switch model.prop {
        case .noSelection, .multipleSelection :
          return false
        case .singleSelection (let v) :
          for object in v {
            let result = object.name.validateAndSetProp (candidateValue, windowForSheet:windowForSheet)
            if !result {
              return false
            }
          }
          return true
        }
      }else{
        return false
      }
    }
  }



  //···················································································································* 
  //   UNBIND SELECTION                                                                                                *
  //···················································································································* 

  func unbind_selection () {
  //--- aValue
    aValue.readModelFunction = nil 
    aValue.writeModelFunction = nil 
    aValue.validateAndWriteModelFunction = nil 
    mModel?.removeObserverOf_aValue (aValue, postEvent:false)
    mModel?.removeObserver (aValue, postEvent:false)
  //--- name
    name.readModelFunction = nil 
    name.writeModelFunction = nil 
    name.validateAndWriteModelFunction = nil 
    mModel?.removeObserverOf_name (name, postEvent:false)
    mModel?.removeObserver (name, postEvent:false)
    mModel = nil    
  }

  //···················································································································* 

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

