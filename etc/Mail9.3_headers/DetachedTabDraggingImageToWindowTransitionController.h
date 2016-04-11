//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSScreen, NSWindow;

@interface DetachedTabDraggingImageToWindowTransitionController : NSObject
{
    BOOL _destinationWindowWillMoveToFullScreen;
    id <DetachedTabDraggingImageToWindowTransitionControllerDelegate> _delegate;
    NSWindow *_sourceMiniWindow;
    NSWindow *_destinationWindow;
    NSScreen *_destinationScreen;
    struct CGPoint _dropLocation;
    struct CGRect _windowAnimationStartFrame;
    struct CGRect _windowAnimationEndFrame;
    struct CGAffineTransform _windowAnimationEndTransform;
}

+ (void)detachTabWithDraggedMiniWindow:(id)arg1 ofWidth:(double)arg2 withDelegate:(id)arg3;
@property(nonatomic) BOOL destinationWindowWillMoveToFullScreen; // @synthesize destinationWindowWillMoveToFullScreen=_destinationWindowWillMoveToFullScreen;
@property(nonatomic) struct CGAffineTransform windowAnimationEndTransform; // @synthesize windowAnimationEndTransform=_windowAnimationEndTransform;
@property(nonatomic) struct CGRect windowAnimationEndFrame; // @synthesize windowAnimationEndFrame=_windowAnimationEndFrame;
@property(nonatomic) struct CGRect windowAnimationStartFrame; // @synthesize windowAnimationStartFrame=_windowAnimationStartFrame;
@property(retain, nonatomic) NSScreen *destinationScreen; // @synthesize destinationScreen=_destinationScreen;
@property(nonatomic) struct CGPoint dropLocation; // @synthesize dropLocation=_dropLocation;
@property(retain, nonatomic) NSWindow *destinationWindow; // @synthesize destinationWindow=_destinationWindow;
@property(retain, nonatomic) NSWindow *sourceMiniWindow; // @synthesize sourceMiniWindow=_sourceMiniWindow;
@property(retain, nonatomic) id <DetachedTabDraggingImageToWindowTransitionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateAnimationWithProgress:(float)arg1;
- (void)_startAnimation;
- (void)_setUpWindow;
- (void)_setUpWindowAnimationEndFrame;
- (void)_setUpWindowAnimationStartFrameWithMiniWindowWidth:(double)arg1;
- (BOOL)_willDestinationWindowMoveToFullScreen;

@end

