//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface ACRichTextMultiComponent : NSObject
{
    NSMutableArray *_textComponents;	// 8 = 0x8
    NSString *_plainText;	// 16 = 0x10
}

@property(copy, nonatomic) NSString *plainText; // @synthesize plainText=_plainText;
@property(retain, nonatomic) NSMutableArray *textComponents; // @synthesize textComponents=_textComponents;
- (void).cxx_destruct;
- (id)initWithComponents:(id)arg1 plainText:(id)arg2;

@end
