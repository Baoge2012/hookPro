//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface VatQualificationInfoView : UIView
{
    UILabel *_vatNameLabel;
    UILabel *_vatInfoLabel;
}

@property(retain, nonatomic) UILabel *vatInfoLabel; // @synthesize vatInfoLabel=_vatInfoLabel;
@property(retain, nonatomic) UILabel *vatNameLabel; // @synthesize vatNameLabel=_vatNameLabel;
- (void).cxx_destruct;
- (struct CGSize)infoLabelSizeWithStr:(id)arg1;
- (struct CGSize)nameLabelSizeWithStr:(id)arg1;
- (void)freshLabelWithNameStr:(id)arg1 InfoStr:(id)arg2;
- (void)addVatLables;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end
