//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AutoWidthLabel.h"

@interface CenterLineLabel : AutoWidthLabel
{
    _Bool _drawsCenterLine;	// 8 = 0x8
    double _padex;	// 16 = 0x10
    double _leftPadding;	// 24 = 0x18
}

@property(nonatomic) _Bool drawsCenterLine; // @synthesize drawsCenterLine=_drawsCenterLine;
@property(nonatomic) double leftPadding; // @synthesize leftPadding=_leftPadding;
@property(nonatomic) double padex; // @synthesize padex=_padex;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
