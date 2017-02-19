//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIButton;

@interface TMMarketAlertAction : NSObject
{
    _Bool _enabled;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    long long _style;	// 24 = 0x18
    UIButton *_button;	// 32 = 0x20
    CDUnknownBlockType _handler;	// 40 = 0x28
}

+ (id)actionWithTitle:(id)arg1 style:(long long)arg2 handler:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)actionButtonClicked:(id)arg1;
- (id)initWithTitle:(id)arg1 style:(long long)arg2 handler:(CDUnknownBlockType)arg3;

@end
