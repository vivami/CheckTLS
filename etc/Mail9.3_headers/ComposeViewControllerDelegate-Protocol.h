//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComposeViewController, NSAlert, NSToolbarItem;

@protocol ComposeViewControllerDelegate <NSObject>
@property(nonatomic) BOOL shouldCloseWindowWhenAnimationCompletes;
- (void)cancelSendAnimation;
- (id <PopoutAnimationContentProvider>)animationContentProvider:(ComposeViewController *)arg1;
- (void)synchronizeIncludeAttachmentsToolbarItem:(NSToolbarItem *)arg1;
- (void)synchronizeToolbarReplyWithType:(long long)arg1;
- (void)composeViewControllerDidFinishLoading:(ComposeViewController *)arg1;
- (void)composeViewControllerShouldShow:(ComposeViewController *)arg1;
- (void)composeViewControllerShouldClose:(ComposeViewController *)arg1;
- (void)composeViewControllerDidSend:(ComposeViewController *)arg1;
- (void)composeViewControllerWillSend:(ComposeViewController *)arg1;
- (void)updateSendButtonStateInToolbar;
- (void)showSheetForAlert:(NSAlert *)arg1 completion:(void (^)(long long))arg2;
@end

