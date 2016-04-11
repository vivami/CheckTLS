//
//  CodeInjector.swift
//  CheckTLS
//
//  Copyright © 2016 vivami. All rights reserved.
//

import Foundation

enum OrigClasses:String {
    case ComposeBackEnd, MessageViewer
}

/* Manages method selectors. */
enum Selectors {
    case insertRecipient, recipients, checkRecipients, keyDown, swizKeyDown, setMessagePriority, swizzSetMessagePriority
    func get() -> Selector {
        switch self {
        case .insertRecipient, .keyDown, .swizKeyDown, .setMessagePriority, swizzSetMessagePriority:
            return Selector(String(self) + ":")
        case .recipients, .checkRecipients:
            return Selector(String(self))
        }
    }
}


/* This is where the magic happens. This is where we inject our own implementations (hook/swizzle) 
 * of defined methods at runtime. */
class CodeInjector {

    static let instance = CodeInjector.init()
    
    init() {}
    
    /* Swizzle method (static for now) with our own method. */
    func injectMethod(sender: AnyClass, clazz: OrigClasses) {
        let clss: AnyClass = NSClassFromString(clazz.rawValue)!
        
        let originalSelector = Selectors.setMessagePriority.get()
        let swizzledSelector = Selectors.swizzSetMessagePriority.get()
        
        let origMethod = class_getInstanceMethod(clss, originalSelector)
        let swizMethod = class_getInstanceMethod(sender, swizzledSelector)
        
        let didAddMethod = class_addMethod(clss, swizzledSelector, method_getImplementation(origMethod), method_getTypeEncoding(origMethod))
        
        if didAddMethod {
            NSLog("[CheckTLS] Replacing original method")
            class_replaceMethod(clss, originalSelector, method_getImplementation(swizMethod), method_getTypeEncoding(swizMethod))
        } else {
            NSLog("[CheckTLS] Exchanging original method")
            method_exchangeImplementations(origMethod, swizMethod)
        }
    }
    
    /* Calls original method. Now, this is may be pretty mindfucking, but note that 
     * swizz<Method> now contains the original method implementation. 
     */
    func useOrigMethod(sender: NSObject, selector: Selectors, arg: NSObject) {
        switch selector {
            case .setMessagePriority:
                sender.performSelector(Selectors.swizzSetMessagePriority.get(), withObject: arg)
            default:
                break
        }
    }
}
