//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSNumber, NSString;

@interface FeedFilterOption : NSObject <NSCoding>
{
    NSNumber *range;
    NSString *optionTitle;
}

+ (id)optionWithDictionary:(id)arg1;
@property(copy, nonatomic) NSString *optionTitle; // @synthesize optionTitle;
@property(retain, nonatomic) NSNumber *range; // @synthesize range;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRange:(id)arg1 andOptionTitle:(id)arg2;
- (void)dealloc;

@end
