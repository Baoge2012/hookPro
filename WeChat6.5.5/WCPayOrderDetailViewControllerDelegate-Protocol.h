//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WCPayControlData;

@protocol WCPayOrderDetailViewControllerDelegate <NSObject>
- (void)OrderDetailBack;
- (void)OrderDetailClickCoupousInfo;
- (void)OrderDetailAddOrderCard:(WCPayControlData *)arg1;
- (void)OrderDetailAdd:(WCPayControlData *)arg1;
- (void)OrderDetailPay:(WCPayControlData *)arg1;
@end
