//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseRequest, SKBuiltinString_t;

@interface PstnReportRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned long long callSeq; // @dynamic callSeq;
@property(retain, nonatomic) SKBuiltinString_t *channelReport; // @dynamic channelReport;
@property(retain, nonatomic) SKBuiltinString_t *clientReport; // @dynamic clientReport;
@property(retain, nonatomic) SKBuiltinString_t *engineReport; // @dynamic engineReport;
@property(nonatomic) unsigned int gotAnswer; // @dynamic gotAnswer;
@property(nonatomic) unsigned int roomId; // @dynamic roomId;

@end
