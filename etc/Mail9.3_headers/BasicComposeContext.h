//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComposeContext.h"

@class ComposeWindowController, MessageWebDocumentView, NSDictionary, NSSet, NSString;

@interface BasicComposeContext : NSObject <ComposeContext>
{
    BOOL _isMiniaturized;
    NSSet *_targetMessages;
    MessageWebDocumentView *_originalContentView;
    long long _type;
    NSDictionary *_editorSettings;
    ComposeWindowController *_windowController;
}

@property(nonatomic) __weak ComposeWindowController *windowController; // @synthesize windowController=_windowController;
@property(nonatomic) BOOL isMiniaturized; // @synthesize isMiniaturized=_isMiniaturized;
@property(copy, nonatomic) NSDictionary *editorSettings; // @synthesize editorSettings=_editorSettings;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) __weak MessageWebDocumentView *originalContentView; // @synthesize originalContentView=_originalContentView;
@property(readonly, copy, nonatomic) NSSet *targetMessages; // @synthesize targetMessages=_targetMessages;
- (void).cxx_destruct;
- (void)controllerWillClose:(id)arg1;
- (id)windowControllerWithState:(id)arg1;
- (void)presentEditor:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadCompleted:(id)arg1;
- (void)controllerInitialized:(id)arg1;
- (void)generateQuotedContentWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL blockRemoteContent;
@property(readonly, nonatomic) BOOL shouldBlockTermination;
@property(readonly, nonatomic) BOOL isInteractive;
@property(readonly, nonatomic) BOOL shouldTransientlyActivateApplication;
- (struct CGRect)contentScreenPosition;
- (id)init;
- (id)initWithType:(long long)arg1 targetMessages:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

