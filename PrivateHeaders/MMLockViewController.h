//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMViewController.h"

#import "MMNetExt.h"

@class MMButton, MMImageView, MMTimer, MMWindowHandleView, NSButton, NSString, NSTextField;

@interface MMLockViewController : MMViewController <MMNetExt>
{
    int _lockType;
    MMButton *_openMacHelperButton;
    MMWindowHandleView *_windowHandleView;
    MMImageView *_iconImageView;
    NSTextField *_titleLabel;
    NSTextField *_descriptionLabel;
    MMTimer *_checkNetTimer;
    CDUnknownBlockType _networkDidConnectdBlock;
    NSButton *_closeButton;
    NSButton *_minButton;
    NSButton *_zoomButton;
}

@property(retain, nonatomic) NSButton *zoomButton; // @synthesize zoomButton=_zoomButton;
@property(retain, nonatomic) NSButton *minButton; // @synthesize minButton=_minButton;
@property(retain, nonatomic) NSButton *closeButton; // @synthesize closeButton=_closeButton;
@property(copy, nonatomic) CDUnknownBlockType networkDidConnectdBlock; // @synthesize networkDidConnectdBlock=_networkDidConnectdBlock;
@property(retain, nonatomic) MMTimer *checkNetTimer; // @synthesize checkNetTimer=_checkNetTimer;
@property(nonatomic) __weak NSTextField *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) __weak NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak MMImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak MMWindowHandleView *windowHandleView; // @synthesize windowHandleView=_windowHandleView;
@property(nonatomic) __weak MMButton *openMacHelperButton; // @synthesize openMacHelperButton=_openMacHelperButton;
@property(nonatomic) int lockType; // @synthesize lockType=_lockType;
- (void).cxx_destruct;
- (void)layoutTrafficLightButtons;
- (void)setTitleBarButonsNeedShow;
- (void)setTitleBarButonsNeedHide;
- (void)onLongLinkConnectionChanged:(int)arg1;
- (void)onNetStatusChange:(int)arg1;
- (void)onHeartBeatCGIReponse:(BOOL)arg1;
- (void)checkHeartbeat;
- (void)stopCheckNetTimer;
- (void)checkNetwork;
- (void)startCheckNetTimer;
- (void)openMacHelperOnPhone;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)scrollPageDown:(id)arg1;
- (void)scrollPageUp:(id)arg1;
- (void)scrollLineDown:(id)arg1;
- (void)scrollLineUp:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

