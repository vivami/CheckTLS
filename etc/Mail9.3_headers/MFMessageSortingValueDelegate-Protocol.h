//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class MCMessage, MFMessageThread;

@protocol MFMessageSortingValueDelegate
- (long long)sortingUniqueIdentifierForMessageThread:(MFMessageThread *)arg1;
- (unsigned int)sortingMessageFlagsForMessage:(MCMessage *)arg1 appliedFlagColors:(id *)arg2;
- (unsigned long long)sortingSizeForMessage:(MCMessage *)arg1;
@end
