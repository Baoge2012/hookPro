//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

@class NSDictionary, NSString;

@interface JDJPCountersModel : JDModel
{
    int counterID;
    NSString *airportCode;
    NSString *airportName;
    NSString *counterAddress;
    int company;
    int outerId;
    NSString *openTime;
    NSDictionary *dateDic;
}

@property(retain, nonatomic) NSDictionary *dateDic; // @synthesize dateDic;
@property(retain, nonatomic) NSString *openTime; // @synthesize openTime;
@property(nonatomic) int outerId; // @synthesize outerId;
@property(nonatomic) int company; // @synthesize company;
@property(retain, nonatomic) NSString *counterAddress; // @synthesize counterAddress;
@property(retain, nonatomic) NSString *airportName; // @synthesize airportName;
@property(retain, nonatomic) NSString *airportCode; // @synthesize airportCode;
@property(nonatomic) int counterID; // @synthesize counterID;
- (void)dealloc;
- (id)init;
- (void)setDataWithDic:(id)arg1;
- (_Bool)isEqual:(id)arg1;

@end
