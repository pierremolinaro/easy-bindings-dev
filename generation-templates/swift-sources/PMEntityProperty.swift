
import Cocoa

//---------------------------------------------------------------------------------------------------------------------*

struct PMEntityProperty <T : Equatable where T : DescriptionForExplorer> {
  var explorer : NSTextField? = nil
  var registerUndo : Optional <(inOldValue : T) -> ()>

  var value : T {
    didSet {
      if value != oldValue {
        registerUndo? (inOldValue:oldValue)
        explorer?.stringValue = value.descriptionForExplorer ()
        for (key, object) in mObservers {
          postTransientEvent (object)
        }
      }
    }
  }
  
  init (_ inValue : T) {
    value = inValue
  }

  private var mObservers : [Int : PMTransientEventProtocol] = [:]
  
  mutating func addObserver (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    mObservers [inObserver.uniqueIndex] = inObserver
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }
 
  mutating func removeObserver (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    mObservers [inObserver.uniqueIndex] = nil
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }

  private var mValidationFunction : (T) -> PMValidationResult = defaultValidationFunction
  
  mutating func setValidationFunction (fonction : (T) -> PMValidationResult) {
    mValidationFunction = fonction
  }
  
  func validate (proposedValue : T) -> PMValidationResult {
    return mValidationFunction (proposedValue)
  }
}

//---------------------------------------------------------------------------------------------------------------------*
