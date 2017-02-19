//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ACDSTQueryOption.h"

@class NSMutableArray, NSObject, NSString;

@interface ACDSTQueryOpFilter : ACDSTQueryOption
{
    unsigned long long _type;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
    NSObject *_value;	// 24 = 0x18
    unsigned long long _loigcTypeWithParent;	// 32 = 0x20
    NSMutableArray *_subFilters;	// 40 = 0x28
}

@property(retain, nonatomic) NSMutableArray *subFilters; // @synthesize subFilters=_subFilters;
@property(nonatomic) unsigned long long loigcTypeWithParent; // @synthesize loigcTypeWithParent=_loigcTypeWithParent;
@property(retain, nonatomic) NSObject *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)__toJson:(id)arg1 withPriviousFilterType:(unsigned long long)arg2 withHgt:(long long)arg3;
- (id)toJson:(id)arg1;
- (id)__toString;
- (id)toString;
- (id)logicFilter:(id)arg1 logciType:(unsigned long long)arg2;
- (id)orFilter:(id)arg1;
- (id)andFilter:(id)arg1;

@end
