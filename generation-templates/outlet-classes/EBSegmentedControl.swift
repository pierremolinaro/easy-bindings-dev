import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(EBSegmentedControl) class EBSegmentedControl : NSSegmentedControl, EBUserClassName {
  @IBOutlet private var mMasterView : NSView?
  @IBOutlet private var mView0 : NSView?
  @IBOutlet private var mView1 : NSView?
  @IBOutlet private var mView2 : NSView?
  @IBOutlet private var mView3 : NSView?
  @IBOutlet private var mView4 : NSView?
  @IBOutlet private var mView5 : NSView?
  @IBOutlet private var mView6 : NSView?
  @IBOutlet private var mView7 : NSView?

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  required init? (coder: NSCoder) {
    super.init (coder:coder)
    noteObjectAllocation (self)
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override init (frame:NSRect) {
    super.init (frame:frame)
    noteObjectAllocation (self)
  }
  
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override var selectedSegment : Int {
    didSet {
      selectViewFromSelectedSegmentIndex ()
    }
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
      //--- Look for first responder in order to save it
 //       NSView * firstResponder = (NSView *) [self.window firstResponder] ;
 //       [viewToDetach setSavedKeyView:firstResponder] ; EBViewWithKeyView
      //--- Remove from master view
        viewToDetach.removeFromSuperview ()
      }
    //--- View to attach
      // EBViewWithKeyView * viewToAttach = nil ;
      let viewToAttach : NSView?
      switch self.selectedSegment {
      case 0 : viewToAttach = mView0
      case 1 : viewToAttach = mView1
      case 2 : viewToAttach = mView2
      case 3 : viewToAttach = mView3
      case 4 : viewToAttach = mView4
      case 5 : viewToAttach = mView5
      case 6 : viewToAttach = mView6
      case 7 : viewToAttach = mView7
      default : viewToAttach = nil
      }
    //--- Attach view
      if let unwViewToAttach = viewToAttach {
        let attachedPageHeight = unwViewToAttach.frame.size.height
        let currentHeight = masterView.frame.size.height
        var r = masterView.window!.frame
        r.size.height += attachedPageHeight - currentHeight ;
        r.origin.y -= attachedPageHeight - currentHeight ;
        masterView.addSubview (unwViewToAttach)
        unwViewToAttach.frame = masterView.bounds
 //       masterView.autoresizingMask = [ViewWidthSizable, ViewHeightSizable]
        unwViewToAttach.autoresizingMask = [.ViewWidthSizable, .ViewHeightSizable]
   //     masterView.window!.title = [inWindowTitle stringByAppendingString:@" Preferences"] ;
        masterView.window!.setFrame (r, display:true, animate:true)
      }
    /*     if let unwViewToAttach = viewToAttach {
        unwViewToAttach.frame = masterView.bounds
        masterView.addSubview (unwViewToAttach)
      } */
    //--- Make First Responder
 //     NSView * candidateNextResponder = [viewToAttach savedKeyView] ;
 //     if (candidateNextResponder != nil) {
 //       [self.window makeFirstResponder:candidateNextResponder] ;
 //     }
    }
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  deinit {
    noteObjectDeallocation (self)
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //  color binding                                                                                                    *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  private var mValueController : Controller_EBSegmentedControl_selectedIndex?

  func bind_selectedIndex (object:EBReadWriteProperty_Int, file:String, line:Int) {
    mValueController = Controller_EBSegmentedControl_selectedIndex (object:object, outlet:self, file:file, line:line)
  }

  func unbind_selectedIndex () {
    mValueController?.unregister ()
    mValueController = nil
  }

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller_EBSegmentedControl_selectedIndex                                                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class Controller_EBSegmentedControl_selectedIndex : EBOutletEvent {

  var mObject : EBReadWriteProperty_Int
  var mOutlet : EBSegmentedControl

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  init (object : EBReadWriteProperty_Int, outlet : EBSegmentedControl, file : String, line : Int) {
    mObject = object
    mOutlet = outlet
    super.init ()
    mObject.addObserver (self, postEvent:true)
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  
  func unregister () {
    mOutlet.target = nil
    mOutlet.action = nil
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
      mOutlet.selectedSegment = v
    case .multipleSelection :
      mOutlet.enableFromValue (false)
    }
    mOutlet.updateEnabledState()
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  func updateModel (sender : EBSegmentedControl) {
    mObject.validateAndSetProp (mOutlet.selectedSegment, windowForSheet:sender.window)
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*