//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MDFeedServiceProtocol.h"

@class NSMutableDictionary, NSString;

@interface MDFeedService : NSObject <MDFeedServiceProtocol>
{
    NSMutableDictionary *_cacheTargetDic;
}

+ (void)load;
@property(retain, nonatomic) NSMutableDictionary *cacheTargetDic; // @synthesize cacheTargetDic=_cacheTargetDic;
- (void).cxx_destruct;
- (void)dealloc;
- (id)increaseTargetLife:(id)arg1 targetStr:(id)arg2;
- (id)actionStringFromFeedEntrance:(long long)arg1;
- (void)performTarget:(id)arg1 action:(id)arg2 params:(id)arg3;
- (void)getFeedReleaseDraftWithTargetId:(id)arg1 publishType:(int)arg2 syncCallBackBlock:(CDUnknownBlockType)arg3;
- (void)clearAllInfoFromDbWithType:(long long)arg1;
- (void)updateFeedFastQueryFilterWithMomoID:(id)arg1;
- (void)resetFeed:(id)arg1;
- (void)modelingSingleFeed:(id)arg1 syncCallBackBlock:(CDUnknownBlockType)arg2;
- (void)getFeedWithType:(long long)arg1 feedId:(id)arg2 syncCallBackBlock:(CDUnknownBlockType)arg3;
- (void)releaseFeedActivityQuickEntranceWithParams:(id)arg1;
- (void)getItemsFromWhoCanSeeMeWithParams:(id)arg1 byCallBackBlock:(CDUnknownBlockType)arg2;
- (void)getSiteFromFeedSitelistWithParams:(id)arg1 byCallBackBlock:(CDUnknownBlockType)arg2;
- (void)gotoFeedViewControllerWithType:(long long)arg1 andParams:(id)arg2;
- (void)serviceDidInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

