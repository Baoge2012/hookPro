//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

@class NSArray, NSNumber, NSString;

@interface PreSalePaymentInfoModel : JDModel
{
    float _paymentPrice;
    NSString *_name;
    NSNumber *_Id;
    NSNumber *_presaleStepPay;
    NSArray *_stepListArry;
}

@property(retain, nonatomic) NSArray *stepListArry; // @synthesize stepListArry=_stepListArry;
@property(retain, nonatomic) NSNumber *presaleStepPay; // @synthesize presaleStepPay=_presaleStepPay;
@property(nonatomic) float paymentPrice; // @synthesize paymentPrice=_paymentPrice;
@property(retain, nonatomic) NSNumber *Id; // @synthesize Id=_Id;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)dealloc;
- (void)setDataWithDic:(id)arg1;

@end
