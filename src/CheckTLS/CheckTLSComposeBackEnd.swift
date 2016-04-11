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

class CheckTLSComposeBackEnd: NSObject {
    
    override class func initialize() {
        
        struct Static {
            static var token: dispatch_once_t = 0
        }
        
        dispatch_once(&Static.token) {
            let injector: CodeInjector = CodeInjector.instance
            injector.injectMethod(self, clazz: OrigClasses.ComposeBackEnd)
            NSLog("[CheckTLS] CheckTLSComposeBackEnd initialized!")
        }
        
    }
    
    // test function
    dynamic func swizzSetMessagePriority(obj: NSObject) {
        NSLog("[CheckTLS] You changed priority of the message!")

        let injector: CodeInjector = CodeInjector.instance
        injector.useOrigMethod(self, selector: Selectors.setMessagePriority, arg: obj)
    }
}