//
//  CheckTLSComposeBackEnd.swift
//  CheckTLS
//
//  Copyright © 2016 vivami. All rights reserved.
//

import ScriptingBridge
import AppKit
import Cocoa
import Foundation

class CTComposeBackEnd: NSObject {
    
    override class func initialize() {
        
        struct Static {
            static var token: dispatch_once_t = 0
        }
        
        dispatch_once(&Static.token) {
            let injector: CodeInjector = CodeInjector.instance
            injector.injectMethod(self, clazz: OrigClasses.ComposeBackEnd)
            NSLog("[CheckTLS] CTComposeBackEnd initialized!")
        }
        
    }
    
    /* Gets recipients address and verifies StartTLS support. */
    dynamic func swizzSetMessagePriority(obj: NSObject) {
        NSLog("[CheckTLS] You changed priority of the message!")
        
        let serverChecker: ServerCheck = ServerCheck.instance
        
        /* Retrieve ComposeBackEnd.recipients */
        if let recipients = self.valueForKey("recipients") as? NSObject {
            /* Retrieve MFMessageAddressee._address (NSString*) */
            if let addressesObj = recipients.valueForKey("_address") {
                let addresses = addressesObj as! [String]
                for i in addresses {
                    let addressSplitted = i.componentsSeparatedByString("@")
                    if let server:String = addressSplitted[1] {
                        switch serverChecker.check(server) {
                        case CheckStatus.UNENCRYPTED:
                            NSLog("[CheckTLS] \(i) is UNENCRYTPED.")
                            showNotification(i)
                            break
                        default:
                            break
                        }
                    
                    }
                    
                }
            }
        }
        let injector: CodeInjector = CodeInjector.instance
        injector.useOrigMethod(self, selector: Selectors.setMessagePriority, arg: obj)
    }
    
    /* NSUserNotification crashes Mail. Don't know why :( */
    func showNotification(address: String) {
        let notification = NSUserNotification()
        notification.title = "CheckTLS"
        notification.informativeText = address + " does not support StartTLS. Your email will be sent unencrypted."
        //notification.soundName = nil
        //notification.hasActionButton = true
        //notification.actionButtonTitle = "OK"
        NSUserNotificationCenter.defaultUserNotificationCenter().deliverNotification(notification)
    }
}