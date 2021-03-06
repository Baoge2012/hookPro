//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JDPLogFormatter.h"

@class NSArray, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface JDPMultiFormatter : NSObject <JDPLogFormatter>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_formatters;
}

- (void).cxx_destruct;
- (_Bool)jdp_isFormattingWithFormatter:(id)arg1;
- (void)jdp_removeAllFormatters;
- (void)jdp_removeFormatter:(id)arg1;
- (void)jdp_addFormatter:(id)arg1;
@property(readonly) NSArray *formatters;
- (id)jdp_logMessageForLine:(id)arg1 originalMessage:(id)arg2;
- (id)formatLogMessage:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

