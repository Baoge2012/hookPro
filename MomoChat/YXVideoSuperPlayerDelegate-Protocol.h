//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YXVideoSuperPlayer;

@protocol YXVideoSuperPlayerDelegate <NSObject>
- (void)YXVideoSuperPlayerDoPause:(YXVideoSuperPlayer *)arg1;
- (void)YXVideoSuperPlayerDoPlay:(YXVideoSuperPlayer *)arg1;

@optional
- (void)YXVideoSuperPlayerProgress:(double)arg1;
@end
