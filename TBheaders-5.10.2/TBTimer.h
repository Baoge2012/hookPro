//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSTimer.h>

@interface TBTimer : NSTimer
{
    long long _time;	// 8 = 0x8
    NSTimer *_refreshTimer;	// 16 = 0x10
}

@property(retain, nonatomic) NSTimer *refreshTimer; // @synthesize refreshTimer=_refreshTimer;
- (void).cxx_destruct;
- (void)stopRefreshing;
- (void)startRefreshing;
- (void)toDoSomething:(id)arg1;
- (id)initWithParamTimer:(CDUnknownBlockType)arg1 withTime:(long long)arg2;

@end
