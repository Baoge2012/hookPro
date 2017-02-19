//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDView.h"

#import "SuggestCellDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSDictionary, NSString, UITableView;

@interface SuggestView : JDView <SuggestCellDelegate, UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate>
{
    UITableView *myTable_;
    NSArray *items_;
    _Bool _haveShop;
    _Bool _haveWorldBuy;
    _Bool _havePromotion;
    NSDictionary *_allChannelDict;
    NSString *_suggestABVersion;
}

@property(copy, nonatomic) NSString *suggestABVersion; // @synthesize suggestABVersion=_suggestABVersion;
@property(nonatomic) _Bool havePromotion; // @synthesize havePromotion=_havePromotion;
@property(nonatomic) _Bool haveWorldBuy; // @synthesize haveWorldBuy=_haveWorldBuy;
@property(nonatomic) _Bool haveShop; // @synthesize haveShop=_haveShop;
@property(retain, nonatomic) NSDictionary *allChannelDict; // @synthesize allChannelDict=_allChannelDict;
@property(retain, nonatomic) NSArray *items; // @synthesize items=items_;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)layoutSubviews;
- (void)suggestCellSelectedWithItem:(id)arg1 andString:(id)arg2 tagNum:(int)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)dealloc;
- (id)initUI;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
