//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EtaModel.h"

@class NSArray;

@interface MLRoomLinkLinesModel : EtaModel
{
    _Bool _enable;
    long long _lines;
    NSArray *_list;
}

+ (id)eta_valueTransform;
+ (id)eta_jsonKeyPathsByProperty;
@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
@property(nonatomic) long long lines; // @synthesize lines=_lines;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
- (void).cxx_destruct;

@end
