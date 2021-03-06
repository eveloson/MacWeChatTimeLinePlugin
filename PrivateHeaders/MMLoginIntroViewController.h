//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMViewController.h"

#import "NSTextViewDelegate.h"

@class MMButton, NSString, NSTextField, NSTextView, NSView;

@interface MMLoginIntroViewController : MMViewController <NSTextViewDelegate>
{
    CDUnknownBlockType _didHitNextBlock;
    NSView *_containerView;
    NSTextField *_heading;
    NSTextView *_subheading;
    MMButton *_nextButton;
    NSTextField *_appName;
}

@property(nonatomic) __weak NSTextField *appName; // @synthesize appName=_appName;
@property(nonatomic) __weak MMButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) NSTextView *subheading; // @synthesize subheading=_subheading;
@property(nonatomic) __weak NSTextField *heading; // @synthesize heading=_heading;
@property(nonatomic) __weak NSView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) CDUnknownBlockType didHitNextBlock; // @synthesize didHitNextBlock=_didHitNextBlock;
- (void).cxx_destruct;
- (void)next:(id)arg1;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

