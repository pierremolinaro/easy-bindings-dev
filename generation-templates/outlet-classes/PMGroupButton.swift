import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(PMGroupButton) class PMGroupButton : NSButton, PMUserClassName {
  @IBOutlet private var mMasterView : NSView?
  @IBOutlet private var mView : NSView?

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  required init? (coder: NSCoder) {
    super.init (coder:coder)
    noteObjectAllocation (self)
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override func awakeFromNib () {
  //--- Set button type
    self.setButtonType (.OnOffButton)
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override init (frame:NSRect) {
    super.init (frame:frame)
    noteObjectAllocation (self)
  }
  
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override func sendAction (inAction : Selector, to : AnyObject?) -> Bool {
    selectViewFromSelectedSegmentIndex ()
    mValueController?.updateModel (self)
    return super.sendAction (inAction, to:to)
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  func selectViewFromSelectedSegmentIndex () {
    if let masterView = mMasterView {
    //--- Remove any view from master view
      let subviews : [NSView] = masterView.subviews
      if subviews.count > 0 {
        let viewToDetach = subviews [0]
        viewToDetach.removeFromSuperview ()
      }
    //--- Set other other buttons of group to Off state
      let views : [NSView] = masterView.superview!.subviews
      for v in views {
        if let button = v as? PMGroupButton where button.mMasterView == mMasterView {
          button.state = NSOffState
        }
      }
      self.state = NSOnState
    //--- Attach view
      if let unwViewToAttach = mView {
        let attachedPageHeight = unwViewToAttach.frame.size.height
        let currentHeight = masterView.frame.size.height
        var r = masterView.window!.frame
        r.size.height += attachedPageHeight - currentHeight ;
        r.origin.y -= attachedPageHeight - currentHeight ;
        masterView.addSubview (unwViewToAttach)
        unwViewToAttach.frame = masterView.bounds
        unwViewToAttach.autoresizingMask = [.ViewWidthSizable, .ViewHeightSizable]
        masterView.window!.title = self.stringValue.stringByAppendingString (" Preferences")
        masterView.window!.setFrame (r, display:true, animate:true)
      }
    }
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  deinit {
    noteObjectDeallocation (self)
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //  color binding                                                                                                    *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  private var mValueController : Controller_PMGroupButton_selectedIndex?

  func bind_selectedIndex (object:PMReadWriteProperty_Int, file:String, line:Int) {
  //--- Check tags
    if let masterView = mMasterView {
      var tagSet = Set<Int> ()
      let views : [NSView] = masterView.superview!.subviews
      for v in views {
        if let button = v as? PMGroupButton where button.mMasterView == mMasterView {
          let tag = button.tag
          if tagSet.contains (tag) {
            presentErrorWindow (__FILE__, line:__LINE__, errorMessage:"duplicated tag: " + String (tag))
          }else{
            tagSet.insert (tag)
          }
        }
      }
      var idx = 0
      for tag in tagSet.sort () {
        if tag != idx {
          presentErrorWindow (__FILE__, line:__LINE__, errorMessage:"missing tag: " + String (tag))
        }
        idx += 1
      }
    }
  //--- Bind
    mValueController = Controller_PMGroupButton_selectedIndex (object:object, outlet:self, file:file, line:line)
  }

  func unbind_selectedIndex () {
    if let valueController = mValueController {
      valueController.unregister ()
    }
    mValueController = nil
  }

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller_PMGroupButton_selectedIndex                                                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class Controller_PMGroupButton_selectedIndex : PMOutletEvent {

  var mObject : PMReadWriteProperty_Int
  var mOutlet : PMGroupButton

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  init (object : PMReadWriteProperty_Int, outlet : PMGroupButton, file : String, line : Int) {
    mObject = object
    mOutlet = outlet
    super.init ()
    mObject.addObserver (self, postEvent:true)
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  
  func unregister () {
    mObject.removeObserver (self, postEvent:false)
    mOutlet.removeFromEnabledFromValueDictionary ()
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override func updateOutlet () {
    switch mObject.prop {
    case .noSelection :
      mOutlet.enableFromValue (false)
    case .singleSelection (let v) :
      mOutlet.enableFromValue (true)
      if v == mOutlet.tag {
        mOutlet.selectViewFromSelectedSegmentIndex ()
      }
    case .multipleSelection :
      mOutlet.enableFromValue (false)
    }
    mOutlet.updateEnabledState ()
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  func updateModel (sender : PMGroupButton) {
    mObject.validateAndSetProp (mOutlet.tag, windowForSheet:sender.window)
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*