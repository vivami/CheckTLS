//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MCStringRenderContext, NSData, NSString;

@protocol MCUserAgent <NSObject>
@property(readonly, copy, nonatomic) NSString *localAttachmentFilesDirectory;
@property(readonly, nonatomic) long long junkMailBehavior;
@property(nonatomic) BOOL isInTimeMachineMode;
- (NSString *)junkStringFromHTMLData:(NSData *)arg1 textEncodingName:(NSString *)arg2 context:(MCStringRenderContext *)arg3;
@end
