//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTTBaseModel.h"

#import "TTTJumpProtocol.h"

@class NSArray, NSNumber, NSString, TTTBuryDataModel;

@interface TTTTabModel : TTTBaseModel <TTTJumpProtocol>
{
    NSString *_groupId;
    NSString *_name;
    NSString *_backgroundColor;
    NSString *_defaultPicUrl;
    NSString *_activePicUrl;
    NSArray *_secondTabList;
    unsigned long long _selectSecondTabIndex;
    NSNumber *_timeRemain;
    NSString *_stageStatus;
    long long _rushState;
    NSString *_topText;
    NSString *_bottomText;
    TTTBuryDataModel *_buryData;
    TTTBuryDataModel *_pageBuryData;
    TTTBuryDataModel *_rushBuryData;
    struct CGPoint _horizontalContentOffset;
}

+ (id)objectClassInArray;
@property(retain, nonatomic) TTTBuryDataModel *rushBuryData; // @synthesize rushBuryData=_rushBuryData;
@property(retain, nonatomic) TTTBuryDataModel *pageBuryData; // @synthesize pageBuryData=_pageBuryData;
@property(retain, nonatomic) TTTBuryDataModel *buryData; // @synthesize buryData=_buryData;
@property(nonatomic) struct CGPoint horizontalContentOffset; // @synthesize horizontalContentOffset=_horizontalContentOffset;
@property(copy, nonatomic) NSString *bottomText; // @synthesize bottomText=_bottomText;
@property(copy, nonatomic) NSString *topText; // @synthesize topText=_topText;
@property(nonatomic) long long rushState; // @synthesize rushState=_rushState;
@property(retain, nonatomic) NSString *stageStatus; // @synthesize stageStatus=_stageStatus;
@property(copy, nonatomic) NSNumber *timeRemain; // @synthesize timeRemain=_timeRemain;
@property(nonatomic) unsigned long long selectSecondTabIndex; // @synthesize selectSecondTabIndex=_selectSecondTabIndex;
@property(retain, nonatomic) NSArray *secondTabList; // @synthesize secondTabList=_secondTabList;
@property(copy, nonatomic) NSString *activePicUrl; // @synthesize activePicUrl=_activePicUrl;
@property(copy, nonatomic) NSString *defaultPicUrl; // @synthesize defaultPicUrl=_defaultPicUrl;
@property(copy, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
- (void).cxx_destruct;
- (_Bool)isShowSecondTabView;
- (id)thirdJumpObject;
- (id)sencondJumpObject;
- (id)firstJumpObject;
- (id)secondTabModel;
- (void)convertMSecondToSecond;
- (void)setUpRushState;
- (void)keyValuesDidFinishConvertingToObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

