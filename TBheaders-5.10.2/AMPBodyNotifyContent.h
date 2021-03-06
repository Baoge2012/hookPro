//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AMPBodyObject-Protocol.h"

@class NSDate, NSString;

@interface AMPBodyNotifyContent : NSObject <AMPBodyObject>
{
    long long _packTargetId;	// 8 = 0x8
    NSString *_ccode;	// 16 = 0x10
    NSString *_content;	// 24 = 0x18
    NSString *_templateContent;	// 32 = 0x20
    NSString *_activeContent;	// 40 = 0x28
    NSDate *_time;	// 48 = 0x30
}

@property(copy, nonatomic) NSDate *time; // @synthesize time=_time;
@property(copy, nonatomic) NSString *activeContent; // @synthesize activeContent=_activeContent;
@property(copy, nonatomic) NSString *templateContent; // @synthesize templateContent=_templateContent;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *ccode; // @synthesize ccode=_ccode;
@property(nonatomic) long long packTargetId; // @synthesize packTargetId=_packTargetId;
- (void).cxx_destruct;
- (void)parseFromDict:(id)arg1;
- (void)parseFromData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

