//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDContentItem.h"

@class UILabel, UIView, VatInvoiceModel, VatQualificationInfoView;

@interface InvoiceVatQualificationView : JDContentItem
{
    UILabel *titleLabel_;
    UIView *lineViewDowntitle_;
    UIView *lineViewDownaccount_;
    VatInvoiceModel *_vatInvoiceModel;
    VatQualificationInfoView *_companyView;
    VatQualificationInfoView *_identifyNumberView;
    VatQualificationInfoView *_addressView;
    VatQualificationInfoView *_phoneView;
    VatQualificationInfoView *_bankView;
    VatQualificationInfoView *_accountView;
}

@property(retain, nonatomic) VatQualificationInfoView *accountView; // @synthesize accountView=_accountView;
@property(retain, nonatomic) VatQualificationInfoView *bankView; // @synthesize bankView=_bankView;
@property(retain, nonatomic) VatQualificationInfoView *phoneView; // @synthesize phoneView=_phoneView;
@property(retain, nonatomic) VatQualificationInfoView *addressView; // @synthesize addressView=_addressView;
@property(retain, nonatomic) VatQualificationInfoView *identifyNumberView; // @synthesize identifyNumberView=_identifyNumberView;
@property(retain, nonatomic) VatQualificationInfoView *companyView; // @synthesize companyView=_companyView;
@property(retain, nonatomic) VatInvoiceModel *vatInvoiceModel; // @synthesize vatInvoiceModel=_vatInvoiceModel;
- (void).cxx_destruct;
- (void)refreshView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end
