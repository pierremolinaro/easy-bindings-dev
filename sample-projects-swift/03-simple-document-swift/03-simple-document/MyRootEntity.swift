//-----------------------------------------------------------------------------*
//                                                                             *
//                         File 'MyRootEntity.swift'                           *
//                         Generated by version 0.0.1                          *
//                       june 30th, 2014, at 15h36'41"                         *
//                                                                             *
//-----------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

import Cocoa
//-----------------------------------------------------------------------------*

@objc(MyRootEntity) class MyRootEntity : PMManagedEntity {

  //-----------------------------------------------------------------------------*
  //    Attribute: myString                                                      *
  //-----------------------------------------------------------------------------*

  var myString__explorer : NSTextField?
  var myString_observers = NSMutableSet ()
  var myString : String =  "Hello" {
    willSet {
      undoManager ().registerUndoWithTarget (self,
        selector:"setMyString:",
        object:myString
      )
    }
    didSet {
      myString__explorer?.setStringValue (myString)
    //--- Notify observers
       myString_observers.makeObjectsPerformSelector ("entity_2E_MyRootEntity_2E_myString_didChange")
      //--- Trigger 'myStringMaj transient'
        if myStringMaj__cache != nil {
          myStringMaj__cache = nil
          enterTriggerForObject_entity_2E_MyRootEntity_2E_myStringMaj (self)
        }
      //--- Trigger 'myStringMin transient'
        if myStringMin__cache != nil {
          myStringMin__cache = nil
          enterTriggerForObject_entity_2E_MyRootEntity_2E_myStringMin (self)
        }
      //--- Trigger 'myStringConcat transient'
        if myStringConcat__cache != nil {
          myStringConcat__cache = nil
          enterTriggerForObject_entity_2E_MyRootEntity_2E_myStringConcat (self)
        }
    }
  }

  func addObserverOf_myString (inObserver : AnyObject) {
    myString_observers.addObject (inObserver)
    NSApp.sendAction ("entity_2E_MyRootEntity_2E_myString_didChange", to:inObserver, from:self)
  }
  func removeObserverOf_myString (inObserver : AnyObject) {
    myString_observers.removeObject (inObserver)
    NSApp.sendAction ("entity_2E_MyRootEntity_2E_myString_didChange", to:inObserver, from:self)
  }

  //-----------------------------------------------------------------------------*
  //    Attribute: myEnumeration                                                 *
  //-----------------------------------------------------------------------------*

  var myEnumeration__explorer : NSTextField?
  var myEnumeration_observers = NSMutableSet ()
  var myEnumeration : MonEnumeration =  MonEnumeration.deuxieme
  var myEnumeration__as__number : NSNumber {
    get {
      return myEnumeration.toRaw ()
    }
    set {
      undoManager ().registerUndoWithTarget (self,
        selector:"setMyEnumeration__as__number:",
        object:myEnumeration__as__number
      )
      let v : Int? = newValue.integerValue ()
      myEnumeration = MonEnumeration.fromRaw (v!)!
      myEnumeration__explorer?.setStringValue (myEnumeration.string ())
    //--- Notify observers
       myEnumeration_observers.makeObjectsPerformSelector ("entity_2E_MyRootEntity_2E_myEnumeration_didChange")
    }
  }

  func addObserverOf_myEnumeration (inObserver : AnyObject) {
    myEnumeration_observers.addObject (inObserver)
    NSApp.sendAction ("entity_2E_MyRootEntity_2E_myEnumeration_didChange", to:inObserver, from:self)
  }
  func removeObserverOf_myEnumeration (inObserver : AnyObject) {
    myEnumeration_observers.removeObject (inObserver)
    NSApp.sendAction ("entity_2E_MyRootEntity_2E_myEnumeration_didChange", to:inObserver, from:self)
  }

  //-----------------------------------------------------------------------------*
  //    Attribute: myColor                                                       *
  //-----------------------------------------------------------------------------*

  var myColor__explorer : NSTextField?
  var myColor_observers = NSMutableSet ()
  var myColor : NSColor =  NSColor.yellowColor () {
    willSet {
      undoManager ().registerUndoWithTarget (self,
        selector:"setMyColor:",
        object:myColor
      )
    }
    didSet {
      myColor__explorer?.setStringValue (myColor.description)
    //--- Notify observers
       myColor_observers.makeObjectsPerformSelector ("entity_2E_MyRootEntity_2E_myColor_didChange")
    }
  }

  func addObserverOf_myColor (inObserver : AnyObject) {
    myColor_observers.addObject (inObserver)
    NSApp.sendAction ("entity_2E_MyRootEntity_2E_myColor_didChange", to:inObserver, from:self)
  }
  func removeObserverOf_myColor (inObserver : AnyObject) {
    myColor_observers.removeObject (inObserver)
    NSApp.sendAction ("entity_2E_MyRootEntity_2E_myColor_didChange", to:inObserver, from:self)
  }





  //-----------------------------------------------------------------------------*
  //    init                                                                     *
  //-----------------------------------------------------------------------------*

  init (entityManager : PMEntityManager) {
    super.init (entityManager:entityManager)
  }

  //-----------------------------------------------------------------------------*
  //    populateExplorerWindow                                                   *
  //-----------------------------------------------------------------------------*

  override func populateExplorerWindowWithRect (inout ioRect : NSRect, view : NSView) {
    myString__explorer = createEntryForAttributeNamed ("myString", ioRect:&ioRect, view:view)
    myString__explorer?.setStringValue (myString)
    myEnumeration__explorer = createEntryForAttributeNamed ("myEnumeration", ioRect:&ioRect, view:view)
    myEnumeration__explorer?.setStringValue (myEnumeration.string ())
    myColor__explorer = createEntryForAttributeNamed ("myColor", ioRect:&ioRect, view:view)
    myColor__explorer?.setStringValue (myColor.description)
  }

  //-----------------------------------------------------------------------------*
  //    clearContextExplorer                                                     *
  //-----------------------------------------------------------------------------*

  override func clearContextExplorer () {
    myString__explorer = nil
    myEnumeration__explorer = nil
    myColor__explorer = nil
    super.clearContextExplorer ()
  }

  //-----------------------------------------------------------------------------*
  //    saveIntoDictionary                                                       *
  //-----------------------------------------------------------------------------*

  override func saveIntoDictionary (ioDictionary : NSMutableDictionary) {
    super.saveIntoDictionary (ioDictionary)
    ioDictionary.setValue (myString, forKey: "myString")
    ioDictionary.setValue (myEnumeration.toRaw (), forKey: "myEnumeration")
    ioDictionary.setValue (NSArchiver.archivedDataWithRootObject (myColor), forKey: "myColor")
  }

  //---------------------------------------------------------------------------*
  //    setUpWithDictionary                                                    *
  //---------------------------------------------------------------------------*

  override func setUpWithDictionary (inDictionary : NSDictionary,
                                     managedObjectArray : PMManagedEntity []) {
    super.setUpWithDictionary (inDictionary, managedObjectArray:managedObjectArray)
    myString = inDictionary.readString ("myString")
    myEnumeration = inDictionary.readMonEnumeration ("myEnumeration")
    myColor = inDictionary.readNSColor ("myColor")
  }

  //-----------------------------------------------------------------------------*
  //    Transient: myStringMaj                                                   *
  //-----------------------------------------------------------------------------*

  var myStringMaj__cache : String?
  var myStringMaj : String {
    if myStringMaj__cache == nil {
      myStringMaj__cache = compute_MyRootEntity_myStringMaj (myString) ;
    }
    return myStringMaj__cache!
  }

  //-----------------------------------------------------------------------------*
  //    Transient: myStringMin                                                   *
  //-----------------------------------------------------------------------------*

  var myStringMin__cache : String?
  var myStringMin : String {
    if myStringMin__cache == nil {
      myStringMin__cache = compute_MyRootEntity_myStringMin (myString) ;
    }
    return myStringMin__cache!
  }

  //-----------------------------------------------------------------------------*
  //    Transient: myStringConcat                                                *
  //-----------------------------------------------------------------------------*

  var myStringConcat__cache : String?
  var myStringConcat : String {
    if myStringConcat__cache == nil {
      myStringConcat__cache = compute_MyRootEntity_myStringConcat (myStringMaj, myStringMin) ;
    }
    return myStringConcat__cache!
  }


}

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

