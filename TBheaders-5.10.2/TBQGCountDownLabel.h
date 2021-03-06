//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSString, NSTimer;

@interface TBQGCountDownLabel : UILabel
{
    NSTimer *countTimer;	// 8 = 0x8
    long long currentTime;	// 16 = 0x10
    NSString *_countDownText;	// 24 = 0x18
}

@property(retain, nonatomic) NSString *countDownText; // @synthesize countDownText=_countDownText;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getCellTimer;
- (void)releaseTimer;
- (void)show;
- (void)coundDown:(id)arg1;
- (void)coundDownStart:(long long)arg1;

@end

