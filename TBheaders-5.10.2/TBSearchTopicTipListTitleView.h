//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface TBSearchTopicTipListTitleView : UIView
{
    UILabel *_mainTitleLabel;	// 8 = 0x8
    UILabel *_subTitleLabel;	// 16 = 0x10
    UILabel *_searchAllLabel;	// 24 = 0x18
}

@property(retain, nonatomic) UILabel *searchAllLabel; // @synthesize searchAllLabel=_searchAllLabel;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *mainTitleLabel; // @synthesize mainTitleLabel=_mainTitleLabel;
- (void).cxx_destruct;
- (void)configByModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

