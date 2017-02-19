//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MAZeroingWeakRef : NSObject
{
    id _target;	// 8 = 0x8
    _Bool _nativeZWR;	// 16 = 0x10
    CDUnknownBlockType _cleanupBlock;	// 24 = 0x18
}

+ (id)refWithTarget:(id)arg1;
+ (_Bool)canRefCoreFoundationObjects;
+ (void)initialize;
- (void)_executeCleanupBlockWithTarget:(id)arg1;
- (void)_zeroTarget;
- (id)target;
- (void)setCleanupBlock:(CDUnknownBlockType)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithTarget:(id)arg1;

@end
