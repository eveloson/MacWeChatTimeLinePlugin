//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JNWCollectionViewCell.h"

@class MMAvatarImageView, NSButton, NSTextField, NSVisualEffectView, WCContactData;

@interface MMChatInfoMemberCell : JNWCollectionViewCell
{
    BOOL _showDeleteButton;
    WCContactData *_contact;
    NSVisualEffectView *_vibrantView;
    MMAvatarImageView *_avatarImageView;
    NSTextField *_nameField;
    NSButton *_deleteButton;
    CDUnknownBlockType _didClickDeleteButton;
}

@property(copy, nonatomic) CDUnknownBlockType didClickDeleteButton; // @synthesize didClickDeleteButton=_didClickDeleteButton;
@property(retain, nonatomic) NSButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) NSTextField *nameField; // @synthesize nameField=_nameField;
@property(retain, nonatomic) MMAvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) NSVisualEffectView *vibrantView; // @synthesize vibrantView=_vibrantView;
@property(retain, nonatomic) WCContactData *contact; // @synthesize contact=_contact;
@property(nonatomic) BOOL showDeleteButton; // @synthesize showDeleteButton=_showDeleteButton;
- (void).cxx_destruct;
- (id)groupChatDisplayName:(id)arg1 inGroupChat:(id)arg2;
- (void)setupWithContact:(id)arg1 inGroupChat:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
