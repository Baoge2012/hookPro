//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DWEventProtocol-Protocol.h"

@class NSString;

@interface DWEventAdapter : NSObject <DWEventProtocol>
{
}

+ (id)sharedInstance;
- (void)pullLoginWithCompletionHandler:(CDUnknownBlockType)arg1 cancelHandler:(CDUnknownBlockType)arg2;
- (id)getCurrentSelectedViewController;
- (void)openurl:(id)arg1;
- (void)openUrl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
