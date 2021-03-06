//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSResponder.h"

@class INDTextViewSelectionSession, NSAttributedString, NSMutableDictionary, NSMutableOrderedSet;

@interface INDSequentialTextSelectionManager : NSResponder
{
    BOOL _firstResponder;
    NSMutableDictionary *_textViews;
    NSMutableOrderedSet *_sortedTextViews;
    INDTextViewSelectionSession *_currentSession;
    NSAttributedString *_cachedAttributedText;
    id _eventMonitor;
}

@property(nonatomic, getter=isFirstResponder) BOOL firstResponder; // @synthesize firstResponder=_firstResponder;
@property(retain, nonatomic) id eventMonitor; // @synthesize eventMonitor=_eventMonitor;
@property(retain, nonatomic) NSAttributedString *cachedAttributedText; // @synthesize cachedAttributedText=_cachedAttributedText;
@property(retain, nonatomic) INDTextViewSelectionSession *currentSession; // @synthesize currentSession=_currentSession;
@property(readonly, nonatomic) NSMutableOrderedSet *sortedTextViews; // @synthesize sortedTextViews=_sortedTextViews;
@property(readonly, nonatomic) NSMutableDictionary *textViews; // @synthesize textViews=_textViews;
- (void).cxx_destruct;
- (void)unregisterAllTextViews;
- (void)unregisterTextView:(id)arg1;
- (void)sortTextViews;
- (CDUnknownBlockType)textViewComparator;
- (void)registerTextView:(id)arg1 withUniqueIdentifier:(id)arg2 transformationBlock:(CDUnknownBlockType)arg3;
- (void)registerTextView:(id)arg1 withUniqueIdentifier:(id)arg2;
- (id)buildAttributedStringForCurrentSession;
- (void)endSession;
- (void)processCompleteSelectionsForTargetTextView:(id)arg1 affinity:(unsigned long long)arg2;
- (void)setSelectionRangeForTextView:(id)arg1 withRange:(struct _NSRange)arg2;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)rehighlightSelectedRangesAsActive:(BOOL)arg1;
- (void)share:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (id)buildSharingMenu;
- (void)copy:(id)arg1;
- (id)validTextViewForEvent:(id)arg1;
- (id)addLocalEventMonitor;
- (BOOL)handleRightMouseDown:(id)arg1;
- (BOOL)handleLeftMouseDragged:(id)arg1;
- (BOOL)handleLeftMouseUp:(id)arg1;
- (BOOL)handleLeftMouseDown:(id)arg1;
- (void)dealloc;
- (id)init;

@end

