//
//  CheckTLS.swift
//  CheckTLS
//
//  Copyright © 2016 vivami. All rights reserved.
//


import AppKit
import Cocoa
import Foundation

class CheckTLS: NSObject {
    
    override class func initialize() {
        
        NSLog("[CheckTLS] Initializing!")
        struct Static {
            static var token: dispatch_once_t = 0
        }

        NSLog("[CheckTLS] Dispatching!")
        dispatch_once(&Static.token) {
            CheckTLSComposeBackEnd.initialize()
        }
        
        NSLog("[CheckTLS] Initialized!")
        

    }
}




