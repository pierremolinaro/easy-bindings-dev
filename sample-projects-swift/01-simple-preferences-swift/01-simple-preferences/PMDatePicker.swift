import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(PMDatePicker) class PMDatePicker : NSDatePicker, PMUserClassName {

  //-------------------------------------------------------------------------------------------------------------------*

  func userClassName () -> String { return "PMDatePicker" }
 
  //-------------------------------------------------------------------------------------------------------------------*

  required init? (coder: NSCoder) {
    super.init (coder:coder)
    noteObjectAllocation (self)
  }

  //-------------------------------------------------------------------------------------------------------------------*

  deinit {
    noteObjectDeallocation (self)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //  date binding                                                                                                     *
  //-------------------------------------------------------------------------------------------------------------------*

  private var mValueController : Controller_PMDatePicker_date?

  func bind_date (object:PMStoredProperty_NSDate, file:String, line:Int) {
    mValueController = Controller_PMDatePicker_date (object:object, outlet:self, file:file, line:line)
  }

  func unbind_date () {
    if let valueController = mValueController {
      valueController.unregister ()
    }
    mValueController = nil
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller_PMDatePicker_date                                                                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_PMDatePicker_date)
class Controller_PMDatePicker_date : PMTransientEvent {

  var mObject : PMStoredProperty_NSDate
  var mOutlet: PMDatePicker

  //-------------------------------------------------------------------------------------------------------------------*
 
  override func userClassName () -> String { return "Controller.PMDatePicker.date" }

  //-------------------------------------------------------------------------------------------------------------------*

  init (object : PMStoredProperty_NSDate, outlet : PMDatePicker, file : String, line : Int) {
    mObject = object
    mOutlet = outlet
    super.init ()
    mOutlet.target = self
    mOutlet.action = "action:"
    mObject.addObserver (self, inTrigger:true)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  override func unregister () {
    mOutlet.target = nil
    mOutlet.action = nil
    mObject.removeObserver (self, inTrigger:false)
  }

  //-------------------------------------------------------------------------------------------------------------------*

  override func trigger () {
    if !mOutlet.dateValue.isEqualToDate (mObject.value) {
      mOutlet.dateValue = mObject.value
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func action (sender : AnyObject!) {
    if !mOutlet.dateValue.isEqualToDate (mObject.value) {
      mObject.setValue (mOutlet.dateValue)
    }
  }

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
