//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "EKViewWindowController.h"

@class CalUIDayViewGadgetController, EKEventViewController, NSArray, NSLayoutConstraint, NSStackView, NSString, NSView, SGRealtimeEvent, SuggestedEventDayViewAppearanceDelegate;

@interface SuggestedEventPopoverController : NSViewController <EKViewWindowController>
{
    BOOL _showingDetails;
    BOOL _isNewEvent;
    EKEventViewController *_eventViewController;
    CalUIDayViewGadgetController *_dayViewGadgedController;
    EKEventViewController *_detailedViewController;
    id <SuggestedEventPopoverControllerDelegate> _delegate;
    SuggestedEventDayViewAppearanceDelegate *_dayViewAppearanceDelegate;
    NSStackView *_summaryStackView;
    NSView *_divider;
    NSView *_detailsContainer;
    NSView *_detailsDivider;
    NSLayoutConstraint *_stackWidthInitialConstraint;
    NSView *_eventClipView;
    NSStackView *_detailsStackView;
    NSView *_navigationView;
    unsigned long long _currentEventIndex;
    NSLayoutConstraint *_detailsWidthConstraint;
    NSLayoutConstraint *_eventHeaderHeightConstraint;
    NSLayoutConstraint *_stackWidthFixedConstraint;
    NSArray *_realtimeEvents;
}

+ (double)_detailsAnimationDuration;
+ (id)keyPathsForValuesAffectingHasNextEvent;
+ (id)keyPathsForValuesAffectingHasPreviousEvent;
+ (id)keyPathsForValuesAffectingPagingTitle;
@property(copy, nonatomic) NSArray *realtimeEvents; // @synthesize realtimeEvents=_realtimeEvents;
@property(retain, nonatomic) NSLayoutConstraint *stackWidthFixedConstraint; // @synthesize stackWidthFixedConstraint=_stackWidthFixedConstraint;
@property(nonatomic) unsigned long long currentEventIndex; // @synthesize currentEventIndex=_currentEventIndex;
@property(nonatomic) BOOL isNewEvent; // @synthesize isNewEvent=_isNewEvent;
@property(nonatomic) BOOL showingDetails; // @synthesize showingDetails=_showingDetails;
@property(nonatomic) __weak NSView *navigationView; // @synthesize navigationView=_navigationView;
@property(nonatomic) __weak NSStackView *detailsStackView; // @synthesize detailsStackView=_detailsStackView;
@property(nonatomic) __weak NSView *eventClipView; // @synthesize eventClipView=_eventClipView;
@property(retain, nonatomic) NSLayoutConstraint *stackWidthInitialConstraint; // @synthesize stackWidthInitialConstraint=_stackWidthInitialConstraint;
@property(nonatomic) __weak NSView *detailsDivider; // @synthesize detailsDivider=_detailsDivider;
@property(retain, nonatomic) NSView *detailsContainer; // @synthesize detailsContainer=_detailsContainer;
@property(nonatomic) __weak NSView *divider; // @synthesize divider=_divider;
@property(nonatomic) __weak NSStackView *summaryStackView; // @synthesize summaryStackView=_summaryStackView;
@property(nonatomic) __weak id <SuggestedEventPopoverControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSLayoutConstraint *eventHeaderHeightConstraint; // @synthesize eventHeaderHeightConstraint=_eventHeaderHeightConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *detailsWidthConstraint; // @synthesize detailsWidthConstraint=_detailsWidthConstraint;
- (void)didCommitItem;
- (void)didSaveItem;
- (void)_cleanupEventViewController;
- (void)viewDidDisappear;
- (void)_updateDayViewGadgetEvent;
- (void)viewWillAppear;
- (void)_collapseDetails;
- (void)_expandDetails;
- (void)toggleShowDetails:(id)arg1;
- (void)ignoreEvent:(id)arg1;
- (void)commitEvent:(id)arg1;
- (void)dismissController:(id)arg1;
- (void)selectNextEvent:(id)arg1;
- (void)selectPreviousEvent:(id)arg1;
@property(readonly, nonatomic) BOOL hasNextEvent;
@property(readonly, nonatomic) BOOL hasPreviousEvent;
@property(readonly, nonatomic) NSString *pagingTitle;
- (void)viewDidLoad;
- (void)_updateCurrentEventIndex;
@property(retain) SGRealtimeEvent *representedObject;
@property(readonly, nonatomic) SuggestedEventDayViewAppearanceDelegate *dayViewAppearanceDelegate; // @synthesize dayViewAppearanceDelegate=_dayViewAppearanceDelegate;
@property(readonly, nonatomic) CalUIDayViewGadgetController *dayViewGadgedController; // @synthesize dayViewGadgedController=_dayViewGadgedController;
- (id)_detailedViewControllerSettings;
@property(readonly, nonatomic) EKEventViewController *detailedViewController; // @synthesize detailedViewController=_detailedViewController;
- (id)_eventViewControllerSettings;
@property(readonly, nonatomic) EKEventViewController *eventViewController; // @synthesize eventViewController=_eventViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

