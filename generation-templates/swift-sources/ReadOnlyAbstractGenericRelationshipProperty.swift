//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

import Cocoa

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//    ReadOnlyAbstractGenericRelationshipProperty
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

class ReadOnlyAbstractGenericRelationshipProperty : EBAbstractProperty {

  //····················································································································
  //  Data clients
  //····················································································································

  private var mClients = Set <ReadOnlyAbstractGenericRelationshipProperty> ()

  //····················································································································

  final internal func attachClient (_ inClient : ReadOnlyAbstractGenericRelationshipProperty) {
    self.mClients.insert (inClient)
    inClient.notifyModelDidChange ()
  }

  //····················································································································

  final internal func detachClient (_ inClient : ReadOnlyAbstractGenericRelationshipProperty) {
    self.mClients.remove (inClient)
  }

  //····················································································································

  internal func notifyModelDidChange () {
    for client in self.mClients {
      client.notifyModelDidChange ()
    }
  }

  //····················································································································

}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————