//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface JDMMoiveNavBar : UIView
{
    id <JDMMovieNavBarDelegate> _delegate;
    UIButton *_leftButton;
    UIButton *_rightButton;
}

@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(nonatomic) __weak id <JDMMovieNavBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)clickAction:(id)arg1;
- (void)configUI;
- (void)configLeftTiltle:(id)arg1 withRightTitle:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
