//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSToolbarItem.h"

@class NSImage;

@interface BorderlessToolbarItem : NSToolbarItem
{
    double _width;
}

@property(retain, nonatomic) NSImage *pressedImage;
@property(retain, nonatomic) NSImage *inactiveImage;
- (void)setImage:(id)arg1;
- (id)image;
- (void)setLabel:(id)arg1;
- (id)control;
- (void)validate;
- (void)configureForDisplayMode:(unsigned long long)arg1 andSizeMode:(unsigned long long)arg2;
@property(nonatomic) double width;
- (id)initWithItemIdentifier:(id)arg1;

@end

