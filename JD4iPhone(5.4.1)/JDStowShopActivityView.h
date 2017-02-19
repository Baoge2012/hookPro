//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class JDIcon, JDImageView, JDStowShopActivityModel, JDStowShopMoreView, NSMutableArray, NSString, UIImageView, UILabel, UIScrollView;

@interface JDStowShopActivityView : UIView <UIScrollViewDelegate>
{
    UIScrollView *m_ScrollView;
    JDStowShopMoreView *m_moreView;
    NSMutableArray *productArray;
    JDImageView *typeImageView;
    JDIcon *typeIcon;
    UILabel *activtyTypeLable;
    UIImageView *verLine;
    UILabel *typeLabel;
    UILabel *timeLabel;
    JDImageView *activityImageView;
    UIView *dynamicView;
    UIImageView *dynamicImageView;
    UILabel *dynamicNumberLabel;
    _Bool isMoving;
    CDUnknownBlockType moreBlock;
    CDUnknownBlockType operationBlock;
    CDUnknownBlockType activityBlock;
    CDUnknownBlockType dynamicBlock;
    JDStowShopActivityModel *_activityModel;
    id <JDStowShopActivityViewDelegate> _delegate;
}

@property(nonatomic) id <JDStowShopActivityViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) JDStowShopActivityModel *activityModel; // @synthesize activityModel=_activityModel;
@property(copy, nonatomic) CDUnknownBlockType dynamicBlock; // @synthesize dynamicBlock;
@property(copy, nonatomic) CDUnknownBlockType activityBlock; // @synthesize activityBlock;
@property(copy, nonatomic) CDUnknownBlockType operationBlock; // @synthesize operationBlock;
@property(copy, nonatomic) CDUnknownBlockType moreBlock; // @synthesize moreBlock;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)dynamicTap:(id)arg1;
- (void)activityTap:(id)arg1;
- (void)moreTap:(id)arg1;
- (void)setProductData;
- (void)setShopActivityModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
