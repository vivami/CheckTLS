//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MailApp;

@protocol TerminationHandler <NSObject>
- (void)nowWouldBeAGoodTimeToTerminate:(MailApp *)arg1;

@optional
- (BOOL)needsToPromptUserBeforeTermination:(MailApp *)arg1;
@end

