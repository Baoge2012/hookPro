//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WloginTlv.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface WloginTlv_0x122 : WloginTlv
{
    NSData *G;
    NSData *N;
    NSData *Y;
    NSData *S;
}

@property(retain) NSData *S; // @synthesize S;
@property(retain) NSData *Y; // @synthesize Y;
@property(retain) NSData *N; // @synthesize N;
@property(retain) NSData *G; // @synthesize G;
- (void)dealloc;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;

@end
