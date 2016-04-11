//
//  ServerCheck.swift
//  CheckTLS
//
//  Copyright © 2016 vivami. All rights reserved.
//


import Foundation

class ServerCheck {
    
    enum CheckStatus: Int {
        case TLS_ENCRYTPED = 1, UNCERTAIN, UNENCRYPTED, ERROR
    }
    
    let sslToolsAddr = "https://ssl-tools.net/mailservers/"
    let jsonFormat = "?format=json"
    
    var server: String = ""
    
    init(s: String) {
        server = s
    }
    
    func check() -> CheckStatus {
        if let jsonData = getJSON() {
            let result = checkStatus(jsonData)
            NSLog("[CheckTLS] \(server) is \(result)")
            return result
        }
        NSLog("[CheckTLS] Could not get TLS info for \(server) from ssl-tools.net.")
        return CheckStatus.ERROR
    }
    
    func getJSON() -> NSData? {
        let addr = sslToolsAddr + server + jsonFormat
        guard let url = NSURL(string: addr) else {
            NSLog("[CheckTLS] Error: cannot create URL")
            return nil
        }
        if let data = try? NSData(contentsOfURL: url, options: []) {
            return data
        }
        return nil
    }
    
    func checkStatus(data: NSData) -> CheckStatus {
        let json = JSON(data: data)
        if json["state"].description == "done" {
            if let hosts = json["hosts"].array {
                var returnStatus = CheckStatus.UNCERTAIN
                for host in hosts {
                    if  host["error"] == "Bad return code for STARTTLS"  ||
                        host["certificate"] == nil
                    {
                        /* Don't directly return, as there may be another mailserver having proper TLS. */
                        returnStatus = CheckStatus.UNENCRYPTED
                    } else if   host["error"]       == nil      &&
                                host["certificate"] != nil      &&
                                host["pfs"]         == true     {
                        return CheckStatus.TLS_ENCRYTPED
                    } else {
                        returnStatus = CheckStatus.UNCERTAIN
                    }
                }
                return returnStatus
            } else {
                NSLog("[CheckTLS] Incomplete JSON.")
                return CheckStatus.ERROR
            }
        } else {
            NSLog("[CheckTLS] Could not load JSON. Please check if ssl-tools.net is up an running.")
            return CheckStatus.ERROR
        }
    }
}