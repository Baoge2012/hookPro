//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString;
@protocol HTPromotionHotNodeModel;

@interface TBHTPromotionHotModel : TBJSONModel
{
    NSString *_statusCode;	// 8 = 0x8
    NSArray<HTPromotionHotNodeModel> *_nodeList;	// 16 = 0x10
}

@property(retain, nonatomic) NSArray<HTPromotionHotNodeModel> *nodeList; // @synthesize nodeList=_nodeList;
@property(retain, nonatomic) NSString *statusCode; // @synthesize statusCode=_statusCode;
- (void).cxx_destruct;

@end

