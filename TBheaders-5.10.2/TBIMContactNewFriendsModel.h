//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSMutableArray, NSString;
@protocol TBIMContactNewFriendModel;

@interface TBIMContactNewFriendsModel : TBJSONModel
{
    _Bool _isFreshData;	// 8 = 0x8
    _Bool _hasMore;	// 9 = 0x9
    NSString *_messageSourceId;	// 16 = 0x10
    NSString *_cursorStr;	// 24 = 0x18
    NSMutableArray<TBIMContactNewFriendModel> *_receivedList;	// 32 = 0x20
}

+ (id)modelKeyMapper;
@property(retain, nonatomic) NSMutableArray<TBIMContactNewFriendModel> *receivedList; // @synthesize receivedList=_receivedList;
@property(retain, nonatomic) NSString *cursorStr; // @synthesize cursorStr=_cursorStr;
@property(retain, nonatomic) NSString *messageSourceId; // @synthesize messageSourceId=_messageSourceId;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) _Bool isFreshData; // @synthesize isFreshData=_isFreshData;
- (void).cxx_destruct;

@end

