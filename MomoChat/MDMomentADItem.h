//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EtaModel.h"

@class MDMomentAdCard, NSArray, NSDictionary, NSString;

@interface MDMomentADItem : EtaModel
{
    _Bool _hasShowed;
    NSString *_adCover;
    NSString *_adAvatar;
    NSString *_adName;
    NSString *_adInfo;
    NSDictionary *_adTagInfo;
    NSString *_adCoverGoto;
    NSString *_adLogoGoto;
    NSArray *_adClickLogArray;
    NSArray *_adViewLogArray;
    NSArray *_adLogoViewLogArray;
    NSArray *_adList;
    MDMomentAdCard *_momentAdCard;
}

+ (id)eta_valueTransform;
+ (id)eta_jsonKeyPathsByProperty;
@property(retain, nonatomic) MDMomentAdCard *momentAdCard; // @synthesize momentAdCard=_momentAdCard;
@property(retain, nonatomic) NSArray *adList; // @synthesize adList=_adList;
@property(nonatomic) _Bool hasShowed; // @synthesize hasShowed=_hasShowed;
@property(retain, nonatomic) NSArray *adLogoViewLogArray; // @synthesize adLogoViewLogArray=_adLogoViewLogArray;
@property(retain, nonatomic) NSArray *adViewLogArray; // @synthesize adViewLogArray=_adViewLogArray;
@property(retain, nonatomic) NSArray *adClickLogArray; // @synthesize adClickLogArray=_adClickLogArray;
@property(copy, nonatomic) NSString *adLogoGoto; // @synthesize adLogoGoto=_adLogoGoto;
@property(copy, nonatomic) NSString *adCoverGoto; // @synthesize adCoverGoto=_adCoverGoto;
@property(retain, nonatomic) NSDictionary *adTagInfo; // @synthesize adTagInfo=_adTagInfo;
@property(copy, nonatomic) NSString *adInfo; // @synthesize adInfo=_adInfo;
@property(copy, nonatomic) NSString *adName; // @synthesize adName=_adName;
@property(copy, nonatomic) NSString *adAvatar; // @synthesize adAvatar=_adAvatar;
@property(copy, nonatomic) NSString *adCover; // @synthesize adCover=_adCover;
- (void).cxx_destruct;

@end
