//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface MLBeautySettings : NSObject <NSCopying, NSSecureCoding>
{
    float _skinSmoothingAmount;
    float _eyesEnhancementAmount;
    float _faceThinningAmount;
    float _skinWhitenAmount;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) float skinWhitenAmount; // @synthesize skinWhitenAmount=_skinWhitenAmount;
@property(nonatomic) float faceThinningAmount; // @synthesize faceThinningAmount=_faceThinningAmount;
@property(nonatomic) float eyesEnhancementAmount; // @synthesize eyesEnhancementAmount=_eyesEnhancementAmount;
@property(nonatomic) float skinSmoothingAmount; // @synthesize skinSmoothingAmount=_skinSmoothingAmount;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
