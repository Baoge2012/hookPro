//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class CouponFaceView, JDPOPCouponModel, NSMutableArray, NSString, UIButton, UIImage;

@interface CartCouponUnitCell : UICollectionViewCell
{
    JDPOPCouponModel *_model;
    NSString *_vendorName;
    NSString *_reachMoney;
    NSString *_categoryName;
    NSString *_discountString;
    NSString *_validString;
    UIImage *_receivedImage;
    UIImage *_normalBgImage;
    UIButton *_receiveButton;
    UIButton *_arrowButton;
    NSMutableArray *_accessElements;
    CouponFaceView *_faceView;
}

@property(retain, nonatomic) CouponFaceView *faceView; // @synthesize faceView=_faceView;
@property(retain, nonatomic) NSMutableArray *accessElements; // @synthesize accessElements=_accessElements;
@property(retain, nonatomic) UIButton *arrowButton; // @synthesize arrowButton=_arrowButton;
@property(retain, nonatomic) UIButton *receiveButton; // @synthesize receiveButton=_receiveButton;
@property(retain, nonatomic) UIImage *normalBgImage; // @synthesize normalBgImage=_normalBgImage;
@property(retain, nonatomic) UIImage *receivedImage; // @synthesize receivedImage=_receivedImage;
@property(copy, nonatomic) NSString *validString; // @synthesize validString=_validString;
@property(copy, nonatomic) NSString *discountString; // @synthesize discountString=_discountString;
@property(copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(copy, nonatomic) NSString *reachMoney; // @synthesize reachMoney=_reachMoney;
@property(copy, nonatomic) NSString *vendorName; // @synthesize vendorName=_vendorName;
@property(retain, nonatomic) JDPOPCouponModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (_Bool)isAccessibilityElement;
- (long long)accessibilityElementCount;
- (void)updateCellViewWithItem:(id)arg1 vendorItem:(id)arg2;
- (void)prepareForReuse;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
