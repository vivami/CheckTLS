//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MCMessage, NSArray, NSDictionary;

@protocol MessageList <NSObject>
@property(readonly, nonatomic) __weak id <MessageListDelegate> delegate;
- (unsigned long long)filteredMessagesCount;
- (NSArray *)copyOfFilteredMessages;
- (unsigned long long)adjustedIndexOfMessage:(MCMessage *)arg1;
- (NSArray *)filterOutMessages:(NSArray *)arg1 andReplaceMessages:(NSDictionary *)arg2;
- (NSArray *)filterInMessages:(NSArray *)arg1 secondaryMessages:(NSArray *)arg2;
- (void)updateMessages:(NSArray *)arg1;
- (void)invert;
- (void)resort;
@end

