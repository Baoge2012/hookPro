//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface TBTabbarItemView : UIView
{
    _Bool _isRuning;	// 8 = 0x8
    UIView *_frontView;	// 16 = 0x10
    UIView *_backView;	// 24 = 0x18
    UIView *_highlightBackView;	// 32 = 0x20
    UIView *_currentVisibleView;	// 40 = 0x28
}

@property(nonatomic) _Bool isRuning; // @synthesize isRuning=_isRuning;
@property(nonatomic) __weak UIView *currentVisibleView; // @synthesize currentVisibleView=_currentVisibleView;
@property(retain, nonatomic) UIView *highlightBackView; // @synthesize highlightBackView=_highlightBackView;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) UIView *frontView; // @synthesize frontView=_frontView;
- (void).cxx_destruct;
- (void)filpRoundWith:(id)arg1 frontView:(id)arg2 backView:(id)arg3 animation:(double)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)flipToFrontWith:(id)arg1 frontView:(id)arg2 backView:(id)arg3 animation:(double)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)flipToBackWith:(id)arg1 frontView:(id)arg2 backView:(id)arg3 animation:(double)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)transitionBackViewToFrontBackup;
- (void)transitionBackViewToFront;
- (void)transitionFrontViewToFront;
- (void)showBackViewAsDefault;
@property(readonly, nonatomic) UIView *visibleView;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
