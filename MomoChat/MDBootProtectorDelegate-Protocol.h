//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MomoChatAppDelegate, NSDictionary;

@protocol MDBootProtectorDelegate <NSObject>
- (unsigned long long)currentMode;
- (void)addService:(id <MDBootProtectorService>)arg1;
- (void)applicationWillEnterForeground:(MomoChatAppDelegate *)arg1 withComplete:(void (^)(void))arg2;
- (void)applicationWillResignActive:(MomoChatAppDelegate *)arg1 withComplete:(void (^)(void))arg2;
- (void)applicationWillTerminate:(MomoChatAppDelegate *)arg1 withComplete:(void (^)(void))arg2;
- (void)applicationDidEnterBackground:(MomoChatAppDelegate *)arg1 withComplete:(void (^)(void))arg2;
- (void)applicationDidBecomeActive:(MomoChatAppDelegate *)arg1 withComplete:(void (^)(void))arg2;
- (_Bool)applicationDidFinishLaunching:(MomoChatAppDelegate *)arg1 withOptions:(NSDictionary *)arg2 Complete:(_Bool (^)(void))arg3;
@end
