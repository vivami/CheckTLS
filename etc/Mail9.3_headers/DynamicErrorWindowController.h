//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSButton, NSProgressIndicator, NSTextField;

@interface DynamicErrorWindowController : NSWindowController
{
    id <DynamicErrorWindowDelegate> _delegate;
    NSTextField *_message;
    NSTextField *_explanation;
    NSButton *_leftButton;
    NSProgressIndicator *_progressIndicator;
    NSButton *_rightButton;
    NSButton *_helpButton;
    long long _diagnosisCode;
    double _distanceToRightEdge;
    double _distanceBetweenButtons;
    double _distanceFromProgresBarToButtons;
    double _progressIndicatorHeight;
}

@property(nonatomic) double progressIndicatorHeight; // @synthesize progressIndicatorHeight=_progressIndicatorHeight;
@property(nonatomic) double distanceFromProgresBarToButtons; // @synthesize distanceFromProgresBarToButtons=_distanceFromProgresBarToButtons;
@property(nonatomic) double distanceBetweenButtons; // @synthesize distanceBetweenButtons=_distanceBetweenButtons;
@property(nonatomic) double distanceToRightEdge; // @synthesize distanceToRightEdge=_distanceToRightEdge;
@property(nonatomic) long long diagnosisCode; // @synthesize diagnosisCode=_diagnosisCode;
@property(nonatomic) __weak NSButton *helpButton; // @synthesize helpButton=_helpButton;
@property(nonatomic) __weak NSButton *rightButton; // @synthesize rightButton=_rightButton;
@property(nonatomic) __weak NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(nonatomic) __weak NSButton *leftButton; // @synthesize leftButton=_leftButton;
@property(nonatomic) __weak NSTextField *explanation; // @synthesize explanation=_explanation;
@property(nonatomic) __weak NSTextField *message; // @synthesize message=_message;
@property(retain, nonatomic) id <DynamicErrorWindowDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)rightActionSelected:(id)arg1;
- (void)leftActionSelected:(id)arg1;
- (void)errorDiagnosedAs:(long long)arg1;
- (void)updateWindowLayout;
- (void)awakeFromNib;
- (void)relocateButton:(id)arg1 relativeTo:(double)arg2;
- (void)collectBasicWindowMetrics;
- (void)_updateTextField:(id)arg1 withText:(id)arg2 belowControl:(id)arg3;
- (void)_updateTextFieldHeightForNewContent:(id)arg1;

@end

