import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@NSApplicationMain @objc(AppDelegate) class AppDelegate: NSObject, NSApplicationDelegate {
  @IBOutlet weak var window: NSWindow!
  @IBOutlet var mActivityTextField : NSTextField?
  @IBOutlet var mConnectionImageView : NSImageView?
  var mDatabase : PMDatabase
  var mGestionEncarts : PMTable
  var mGestionParutions : PMTable

  //···················································································································*

  let nomTableEncarts = "encarts_bacasable"
  let nomTableParutions = "parutions_bacasable"

  //···················································································································*

  override init () {
    mDatabase = PMDatabase (server: "www.m2mimpressions.fr",
                            user: "mmimpres_userRes",
                            password: "Ne2Uopec9Ruqe2",
                            dataBase: "mmimpres_reservationEncarts")
    mGestionEncarts = PMTable (database:mDatabase, tableName:nomTableEncarts)
    mGestionParutions = PMTable (database:mDatabase, tableName:nomTableParutions)
  }

  //···················································································································*

  override func awakeFromNib () {
    mDatabase.setActivityTextField (mActivityTextField)
    mDatabase.setConnectionImageView (mConnectionImageView)
  }

  //···················································································································*

  func rafraichirParutions () {
    var query = String (format:
      "SELECT %@.id,%@.edition,%@.date,%@.groupe,COUNT(DISTINCT encarts1.emplacement),COUNT(encarts1.idParution)<>COUNT(DISTINCT encarts1.emplacement) ",
      nomTableParutions,
      nomTableParutions,
      nomTableParutions,
      nomTableParutions
    )
    query += String (format:
      "FROM %@, %@ as encarts1, %@ as encarts2 ",
      nomTableParutions,
      nomTableEncarts,
      nomTableEncarts
    )
    query += String (format:
      "WHERE %@.id=encarts1.idParution AND %@.id=encarts2.idParution AND encarts1.emplacement=encarts2.emplacement ",
      nomTableParutions,
      nomTableParutions
    )
    query += String (format:"GROUP BY %@.id", nomTableParutions)
    mDatabase.customQuery (query, responseFunction:{ (result : [[String : String]]) in
      NSLog ("%@", result)
    })
  }

  //···················································································································*

  @IBAction func actionRafraichirParutions (sender : NSObject) {
    rafraichirParutions ()
  }

  //···················································································································*

  func applicationDidFinishLaunching(aNotification: NSNotification) {
    // Insert code here to initialize your application
    rafraichirParutions ()
  }

  //···················································································································*

  func applicationWillTerminate(aNotification: NSNotification) {
    // Insert code here to tear down your application
  }

  //···················································································································*

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
