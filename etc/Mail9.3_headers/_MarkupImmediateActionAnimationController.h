//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSImmediateActionAnimationController.h"

@class MFAttachmentViewController, NSString;

@interface _MarkupImmediateActionAnimationController : NSObject <NSImmediateActionAnimationController>
{
    MFAttachmentViewController *_attachment;
}

@property(retain, nonatomic) MFAttachmentViewController *attachment; // @synthesize attachment=_attachment;
- (void).cxx_destruct;
- (void)recognizerDidCompleteAnimation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

