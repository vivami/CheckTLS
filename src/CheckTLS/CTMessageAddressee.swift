//
//  CTMessageAddressee.swift
//  CheckTLS
//
//  Created by v on 18/04/16.
//  Copyright © 2016 vivami. All rights reserved.
//

import Foundation


class CTMessageAddressee: NSObject {
    
    override class func initialize() {
        
        struct Static {
            static var token: dispatch_once_t = 0
        }
        
        dispatch_once(&Static.token) {
            let injector: CodeInjector = CodeInjector.instance
            injector.injectMethod(self, clazz: OrigClasses.MFMessageAddressee)
            NSLog("[CheckTLS] CTMessageAddressee initialized!")
        }
        
    }
    
    // test function
    dynamic func swizzAddress(obj: NSObject) {
        NSLog("[CheckTLS] You changed priority of the message!")
        //let x = MFMessageAddressee()
        //let _ = self.valueForKey("recipients") as! MFMessageAddressee
        
        self.valueForKey("_address")
        
        NSLog(String(self.valueForKey("toRecipients")))
        
        let injector: CodeInjector = CodeInjector.instance
        injector.useOrigMethod(self, selector: Selectors.setMessagePriority, arg: obj)
    }

}