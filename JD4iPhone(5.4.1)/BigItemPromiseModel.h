//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

@class BigItemDistributionModel, NSArray, NSMutableArray, NSString;

@interface BigItemPromiseModel : JDModel
{
    NSString *_bigItemInstallIndex;
    NSArray *_bigItemInstallDatesList;
    BigItemDistributionModel *_bigItemBZDModel;
    BigItemDistributionModel *_bigItemJZDModel;
    NSMutableArray *_promiseArray;
    NSMutableArray *_titlesOfPromiseArray;
    NSString *_selectedTitle;
    long long _bigItemShipIndex;
    long long _selectedIndexOfPromise;
}

@property(nonatomic) long long selectedIndexOfPromise; // @synthesize selectedIndexOfPromise=_selectedIndexOfPromise;
@property(nonatomic) long long bigItemShipIndex; // @synthesize bigItemShipIndex=_bigItemShipIndex;
@property(retain, nonatomic) NSString *selectedTitle; // @synthesize selectedTitle=_selectedTitle;
@property(retain, nonatomic) NSMutableArray *titlesOfPromiseArray; // @synthesize titlesOfPromiseArray=_titlesOfPromiseArray;
@property(retain, nonatomic) NSMutableArray *promiseArray; // @synthesize promiseArray=_promiseArray;
@property(retain, nonatomic) BigItemDistributionModel *bigItemJZDModel; // @synthesize bigItemJZDModel=_bigItemJZDModel;
@property(retain, nonatomic) BigItemDistributionModel *bigItemBZDModel; // @synthesize bigItemBZDModel=_bigItemBZDModel;
@property(retain, nonatomic) NSArray *bigItemInstallDatesList; // @synthesize bigItemInstallDatesList=_bigItemInstallDatesList;
@property(retain, nonatomic) NSString *bigItemInstallIndex; // @synthesize bigItemInstallIndex=_bigItemInstallIndex;
- (void).cxx_destruct;
- (id)getSelectedBigInstallTimeWithShipIndex:(long long)arg1 installIndex:(long long)arg2;
- (id)createBigInstallDataWithArr:(id)arg1;
- (void)handlePromises;
- (void)setDataWithDic:(id)arg1;
- (void)dealloc;

@end
