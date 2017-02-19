//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TBSDKMTOPServer;

@interface ShakeService : NSObject
{
    int _requestMediaDataCount;	// 8 = 0x8
    int _requestMediaDataErrorType;	// 12 = 0xc
    TBSDKMTOPServer *_mediaServer;	// 16 = 0x10
    TBSDKMTOPServer *_locationServer;	// 24 = 0x18
    TBSDKMTOPServer *_discountServer;	// 32 = 0x20
}

@property int requestMediaDataErrorType; // @synthesize requestMediaDataErrorType=_requestMediaDataErrorType;
@property int requestMediaDataCount; // @synthesize requestMediaDataCount=_requestMediaDataCount;
@property(retain, nonatomic) TBSDKMTOPServer *discountServer; // @synthesize discountServer=_discountServer;
@property(retain, nonatomic) TBSDKMTOPServer *locationServer; // @synthesize locationServer=_locationServer;
@property(retain, nonatomic) TBSDKMTOPServer *mediaServer; // @synthesize mediaServer=_mediaServer;
- (void).cxx_destruct;
- (void)destroy;
- (void)cancel;
- (void)requestLocationData:(CDUnknownBlockType)arg1 failBlock:(CDUnknownBlockType)arg2;
- (void)requestDiscountData:(CDUnknownBlockType)arg1 failBlock:(CDUnknownBlockType)arg2 dicesData:(id)arg3;
- (void)requestMediaData:(CDUnknownBlockType)arg1 failBlock:(CDUnknownBlockType)arg2;
- (void)handleRequestMediaDataFailed:(CDUnknownBlockType)arg1;

@end
