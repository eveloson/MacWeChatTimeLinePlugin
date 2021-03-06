//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "MASPreferencesViewController.h"

@class NSButton, NSImage, NSImageView, NSSlider, NSString, NSTextField;

@interface MMPreferencesGeneralController : NSViewController <MASPreferencesViewController>
{
    NSTextField *_accountInformationLabel;
    NSButton *_logOutButton;
    NSImageView *_avatarImageView;
    NSTextField *_nickNameLabel;
    NSTextField *_msgRecordLabel;
    NSButton *_saveChatLog;
    NSTextField *_textSizeLabel;
    NSSlider *_textSize;
    NSTextField *_textSizeExampleGlyphSmall;
    NSTextField *_textSizeExampleGlyphLarge;
    NSButton *_submitFeedbackButton;
    NSTextField *_informationFeedback;
}

@property __weak NSTextField *informationFeedback; // @synthesize informationFeedback=_informationFeedback;
@property __weak NSButton *submitFeedbackButton; // @synthesize submitFeedbackButton=_submitFeedbackButton;
@property(nonatomic) __weak NSTextField *textSizeExampleGlyphLarge; // @synthesize textSizeExampleGlyphLarge=_textSizeExampleGlyphLarge;
@property(nonatomic) __weak NSTextField *textSizeExampleGlyphSmall; // @synthesize textSizeExampleGlyphSmall=_textSizeExampleGlyphSmall;
@property(nonatomic) __weak NSSlider *textSize; // @synthesize textSize=_textSize;
@property(nonatomic) __weak NSTextField *textSizeLabel; // @synthesize textSizeLabel=_textSizeLabel;
@property(nonatomic) __weak NSButton *saveChatLog; // @synthesize saveChatLog=_saveChatLog;
@property __weak NSTextField *msgRecordLabel; // @synthesize msgRecordLabel=_msgRecordLabel;
@property __weak NSTextField *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property __weak NSImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(nonatomic) __weak NSButton *logOutButton; // @synthesize logOutButton=_logOutButton;
@property __weak NSTextField *accountInformationLabel; // @synthesize accountInformationLabel=_accountInformationLabel;
- (void).cxx_destruct;
- (void)feedbackClicked;
- (void)newTextSizeSetting:(id)arg1;
@property(readonly, nonatomic) NSImage *toolbarItemImage;
@property(readonly, nonatomic) NSString *toolbarItemLabel;
@property(readonly, nonatomic) NSString *identifier;
- (void)viewWillAppear;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL hasResizableHeight;
@property(readonly, nonatomic) BOOL hasResizableWidth;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

