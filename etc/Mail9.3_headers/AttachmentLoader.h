//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MCActivityTarget.h"

@class MCActivityMonitor, NSMutableArray, NSString;

@interface AttachmentLoader : NSObject <MCActivityTarget>
{
    id <MCMessageDataSource> _store;
    MCActivityMonitor *_monitor;
    NSMutableArray *_entries;
}

+ (id)_makeLoaderForStore:(id)arg1;
+ (id)_loaderForStore:(id)arg1;
+ (void)cancelInlineLoads:(id)arg1 window:(id)arg2;
+ (void)startLoadingInlineAttachments:(id)arg1 window:(id)arg2 delegate:(id)arg3;
+ (id)loaderForSavingAttachment:(id)arg1 window:(id)arg2 path:(id)arg3;
+ (id)loaderForAttachmentViewController:(id)arg1 window:(id)arg2 reason:(unsigned long long)arg3 application:(id)arg4 attachmentDirectory:(id)arg5;
+ (id)loaderForAttachment:(id)arg1 window:(id)arg2 reason:(unsigned long long)arg3 application:(id)arg4 attachmentDirectory:(id)arg5;
- (void).cxx_destruct;
- (BOOL)_addOrReprioritizeEntryEqualTo:(id)arg1;
- (void)_addAttachmentsToFetch:(id)arg1 fromWindow:(id)arg2 delegate:(id)arg3;
- (void)_startBackgroundThreadIfNeeded;
- (void)_setStore:(id)arg1;
- (void)_mailboxBecameInvalid;
- (void)_monitorQuit:(id)arg1;
- (void)_setMonitor:(id)arg1;
- (void)_processAttachmentQueue;
- (void)_didFetchDataForQueueEntry:(id)arg1;
- (void)_cancelInlineLoadsForWindow:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isSmartMailbox;
@property(readonly) Class superclass;

@end

