import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(EBWindow) class EBWindow : NSWindow, EBUserClassName {

  //···················································································································*

  required init? (coder: NSCoder) {
    super.init (coder:coder)
    noteObjectAllocation (self)
  }

  //···················································································································*

  override init (contentRect: NSRect,
                 styleMask aStyle: Int,
                 backing bufferingType: NSBackingStoreType,
                 `defer` flag: Bool) {
    super.init (contentRect: contentRect, styleMask:aStyle, backing:bufferingType, `defer`:flag)
    noteObjectAllocation (self)
  }
  
  //···················································································································*

  deinit {
    noteObjectDeallocation (self)
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*