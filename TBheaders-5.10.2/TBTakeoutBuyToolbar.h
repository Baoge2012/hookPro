//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TBTakeoutBuyPayView, UILabel;

@interface TBTakeoutBuyToolbar : UIView
{
    CDUnknownBlockType _block;	// 8 = 0x8
    TBTakeoutBuyPayView *_payView;	// 16 = 0x10
    UILabel *_noteLabel;	// 24 = 0x18
    UIView *_line;	// 32 = 0x20
}

@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UILabel *noteLabel; // @synthesize noteLabel=_noteLabel;
@property(retain, nonatomic) TBTakeoutBuyPayView *payView; // @synthesize payView=_payView;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)confirm;
- (void)setViewModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
