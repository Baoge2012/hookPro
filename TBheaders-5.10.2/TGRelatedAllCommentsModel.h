//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TGBaseModel.h"

@class NSArray;

@interface TGRelatedAllCommentsModel : TGBaseModel
{
    long long _number;	// 8 = 0x8
    NSArray *_comments;	// 16 = 0x10
}

@property(retain, nonatomic) NSArray *comments; // @synthesize comments=_comments;
@property(readonly, nonatomic) long long number; // @synthesize number=_number;
- (void).cxx_destruct;
- (id)initWithParams:(id)arg1;

@end

