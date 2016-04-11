//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DOMHTMLAnchorElement, DOMNode, EditingMessageWebView, NSButton, NSPanel, NSString, NSTextField;

@interface HyperlinkEditor : NSObject
{
    NSPanel *_linkSheet;
    NSTextField *_linkTextField;
    NSButton *_okButton;
    NSButton *_removeButton;
    EditingMessageWebView *_webView;
    id _delegate;
    DOMHTMLAnchorElement *_selectedAnchor;
    DOMNode *_selectionContents;
    NSString *_replacementLink;
}

@property(copy, nonatomic) NSString *replacementLink; // @synthesize replacementLink=_replacementLink;
@property(retain, nonatomic) DOMNode *selectionContents; // @synthesize selectionContents=_selectionContents;
@property(retain, nonatomic) DOMHTMLAnchorElement *selectedAnchor; // @synthesize selectedAnchor=_selectedAnchor;
@property(readonly, nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak EditingMessageWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) __weak NSButton *removeButton; // @synthesize removeButton=_removeButton;
@property(nonatomic) __weak NSButton *okButton; // @synthesize okButton=_okButton;
@property(nonatomic) __weak NSTextField *linkTextField; // @synthesize linkTextField=_linkTextField;
@property(retain, nonatomic) NSPanel *linkSheet; // @synthesize linkSheet=_linkSheet;
- (void).cxx_destruct;
- (void)_handleControlTextChange;
- (void)controlTextDidChange:(id)arg1;
- (void)orderOutPanel:(id)arg1;
- (void)removeSelectedLink;
- (void)editLink;
- (id)init;
- (id)initForWebView:(id)arg1 delegate:(id)arg2;

@end
