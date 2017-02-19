//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class GDMFeedHeaderView, GDMLiveInfoCellViewModel, UIButton, UIImageView, UILabel;

@interface GDMLiveInfoTableViewCell : UITableViewCell
{
    GDMLiveInfoCellViewModel *_viewModel;	// 8 = 0x8
    GDMFeedHeaderView *_headerView;	// 16 = 0x10
    UIImageView *_contentImageView;	// 24 = 0x18
    UIButton *_feedTypeLabel;	// 32 = 0x20
    UILabel *_contentTitleLabel;	// 40 = 0x28
    UIImageView *_durationIconImageView;	// 48 = 0x30
    UILabel *_durationLabel;	// 56 = 0x38
    UILabel *_summaryLabel;	// 64 = 0x40
}

+ (double)height;
@property(retain, nonatomic) UILabel *summaryLabel; // @synthesize summaryLabel=_summaryLabel;
@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) UIImageView *durationIconImageView; // @synthesize durationIconImageView=_durationIconImageView;
@property(retain, nonatomic) UILabel *contentTitleLabel; // @synthesize contentTitleLabel=_contentTitleLabel;
@property(retain, nonatomic) UIButton *feedTypeLabel; // @synthesize feedTypeLabel=_feedTypeLabel;
@property(retain, nonatomic) UIImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
@property(retain, nonatomic) GDMFeedHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) GDMLiveInfoCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)refreshCell;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
