//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TBCrashGuardLog, TBZombieGuardService;

@interface TBCrashGuardService : NSObject
{
    TBCrashGuardLog *_crashGuardLog;	// 8 = 0x8
    TBZombieGuardService *_zombieGuardService;	// 16 = 0x10
}

+ (id)shareInstance;
@property(retain, nonatomic) TBZombieGuardService *zombieGuardService; // @synthesize zombieGuardService=_zombieGuardService;
@property(retain, nonatomic) TBCrashGuardLog *crashGuardLog; // @synthesize crashGuardLog=_crashGuardLog;
- (void).cxx_destruct;
- (void)setupNSKeyedUnarchiverGuard;
- (void)setupNSTimerGuard;
- (void)setupNSAttributedStringGuard;
- (void)setupNSStringGuard;
- (void)setupNotificationGuard;
- (void)setupContainerGuard;
- (void)setupObjectGuard;
- (void)setupKVOCrashGurad;
- (_Bool)isReleaseVersion;
- (_Bool)isEnableZombieGuard;
- (_Bool)isEnableCrashGuard;
- (void)setGetCallStackBlock:(CDUnknownBlockType)arg1;
- (void)setHandleLogBlock:(CDUnknownBlockType)arg1;
- (void)startCrashGuardService:(unsigned long long)arg1;
- (id)init;

@end

