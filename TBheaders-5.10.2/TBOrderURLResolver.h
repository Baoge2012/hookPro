//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TBOrderURLResolver : NSObject
{
}

- (void)join;
- (id)getOriginalParamFromRequestQuery:(id)arg1;
- (_Bool)isRefundOrderListURL:(id)arg1;
- (_Bool)isSpecialScheme:(id)arg1;
- (_Bool)isNewOrderList:(id)arg1;
- (_Bool)isOrderDetail:(id)arg1;
- (id)handleURLActionRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

