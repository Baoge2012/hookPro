//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "JDSegmentedViewDelegate.h"

@class JDButton, JDSegmentedView, UIButton, UIView;

@interface JDContactEasyBuyConfigViewCell : UITableViewCell <JDSegmentedViewDelegate>
{
    CDUnknownBlockType _responseSingal;
    UIView *_baseView;
    UIView *_paymentConfigView;
    UIView *_shipmentConfigView;
    UIView *_bookingConfigView;
    UIView *_tipsUIOfShipmentView;
    UIView *_pickSiteConfigView;
    UIView *_bottomLineOfShipmentConfigView;
    JDButton *_payOnLineButton;
    JDButton *_payOffLineButton;
    JDButton *_shipmentJDButton;
    JDButton *_shipmentSiteButton;
    JDButton *_bookingDirectButton;
    JDButton *_bookingInOrderButton;
    UIButton *_pickSiteButton;
    JDSegmentedView *_paymentSegmentdView;
    JDSegmentedView *_shipmentSegmentedView;
    JDSegmentedView *_bookingSegmentdView;
}

+ (double)heightOfChooseSiteDisplay:(_Bool)arg1;
@property(retain, nonatomic) JDSegmentedView *bookingSegmentdView; // @synthesize bookingSegmentdView=_bookingSegmentdView;
@property(retain, nonatomic) JDSegmentedView *shipmentSegmentedView; // @synthesize shipmentSegmentedView=_shipmentSegmentedView;
@property(retain, nonatomic) JDSegmentedView *paymentSegmentdView; // @synthesize paymentSegmentdView=_paymentSegmentdView;
@property(retain, nonatomic) UIButton *pickSiteButton; // @synthesize pickSiteButton=_pickSiteButton;
@property(retain, nonatomic) JDButton *bookingInOrderButton; // @synthesize bookingInOrderButton=_bookingInOrderButton;
@property(retain, nonatomic) JDButton *bookingDirectButton; // @synthesize bookingDirectButton=_bookingDirectButton;
@property(retain, nonatomic) JDButton *shipmentSiteButton; // @synthesize shipmentSiteButton=_shipmentSiteButton;
@property(retain, nonatomic) JDButton *shipmentJDButton; // @synthesize shipmentJDButton=_shipmentJDButton;
@property(retain, nonatomic) JDButton *payOffLineButton; // @synthesize payOffLineButton=_payOffLineButton;
@property(retain, nonatomic) JDButton *payOnLineButton; // @synthesize payOnLineButton=_payOnLineButton;
@property(retain, nonatomic) UIView *bottomLineOfShipmentConfigView; // @synthesize bottomLineOfShipmentConfigView=_bottomLineOfShipmentConfigView;
@property(retain, nonatomic) UIView *pickSiteConfigView; // @synthesize pickSiteConfigView=_pickSiteConfigView;
@property(retain, nonatomic) UIView *tipsUIOfShipmentView; // @synthesize tipsUIOfShipmentView=_tipsUIOfShipmentView;
@property(retain, nonatomic) UIView *bookingConfigView; // @synthesize bookingConfigView=_bookingConfigView;
@property(retain, nonatomic) UIView *shipmentConfigView; // @synthesize shipmentConfigView=_shipmentConfigView;
@property(retain, nonatomic) UIView *paymentConfigView; // @synthesize paymentConfigView=_paymentConfigView;
@property(retain, nonatomic) UIView *baseView; // @synthesize baseView=_baseView;
@property(copy, nonatomic) CDUnknownBlockType responseSingal; // @synthesize responseSingal=_responseSingal;
- (void).cxx_destruct;
- (void)pressPickSiteButton:(id)arg1;
- (void)__setupPickSiteConfigUI;
- (void)__setupTipsUIOfShipment;
- (void)__setupBookingConfigUI;
- (void)__setupShipmentConfigUI;
- (void)__setupPaymentConfigUI;
- (void)segmentedView:(id)arg1 didSelectIndex:(long long)arg2 button:(id)arg3;
- (void)setPickSiteName:(id)arg1;
- (void)setBookingDirectSelected:(_Bool)arg1;
- (void)setShipByJDSelected:(_Bool)arg1;
- (void)setPayOnlineSelected:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
