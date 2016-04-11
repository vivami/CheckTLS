//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSStreamDelegate.h"

@class ComposeViewController, NSMutableData, NSOutputStream, NSString, NSTimer, SingleMessageViewer;

@interface UserActivityHandler : NSObject <NSStreamDelegate>
{
    BOOL _applicationHasFinishedLaunching;
    BOOL _draftDataComplete;
    NSString *_waitingForActivityOfType;
    SingleMessageViewer *_viewerBeingContinued;
    NSString *_messageURLString;
    NSTimer *_timeoutTimer;
    ComposeViewController *_composeController;
    unsigned long long _continuationDataLength;
    NSOutputStream *_continuationReplyStream;
    NSMutableData *_continuationDraftData;
}

@property(nonatomic) BOOL draftDataComplete; // @synthesize draftDataComplete=_draftDataComplete;
@property(retain, nonatomic) NSMutableData *continuationDraftData; // @synthesize continuationDraftData=_continuationDraftData;
@property(retain, nonatomic) NSOutputStream *continuationReplyStream; // @synthesize continuationReplyStream=_continuationReplyStream;
@property(nonatomic) unsigned long long continuationDataLength; // @synthesize continuationDataLength=_continuationDataLength;
@property(retain, nonatomic) ComposeViewController *composeController; // @synthesize composeController=_composeController;
@property(retain, nonatomic) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(retain) NSString *messageURLString; // @synthesize messageURLString=_messageURLString;
@property(retain, nonatomic) SingleMessageViewer *viewerBeingContinued; // @synthesize viewerBeingContinued=_viewerBeingContinued;
@property(retain, nonatomic) NSString *waitingForActivityOfType; // @synthesize waitingForActivityOfType=_waitingForActivityOfType;
@property(nonatomic) BOOL applicationHasFinishedLaunching; // @synthesize applicationHasFinishedLaunching=_applicationHasFinishedLaunching;
- (void).cxx_destruct;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)_timeout:(id)arg1;
- (void)_libraryMessagesUpdated:(id)arg1;
- (void)_populateDraftWindow;
- (void)_showContinuedMessage;
- (void)_prepareWindowForActivity;
- (void)didFailToContinueUserActivityWithType:(id)arg1 error:(id)arg2;
- (BOOL)continueUserActivity:(id)arg1 restorationHandler:(CDUnknownBlockType)arg2;
- (BOOL)willContinueUserActivityWithType:(id)arg1;
- (void)_applicationDidFinishLaunching:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
