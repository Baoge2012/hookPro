//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDViewController.h"

#import "BindGiftCarLabelPhoneNumClickDelegate.h"
#import "JDBaseToastViewDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UITextFieldDelegate.h"

@class JDButton, JDNetwork, NSString, UITextField, UITextRange, UIView;

@interface BindGiftCardViewController : JDViewController <BindGiftCarLabelPhoneNumClickDelegate, UIActionSheetDelegate, UITextFieldDelegate, JDBaseToastViewDelegate>
{
    id <BindGiftCardViewControllerDelegate> delegate;
    UIView *bgView;
    JDNetwork *bindCardNet;
    UITextField *mTextField;
    NSString *previousTextFieldContent;
    UITextRange *previousSelection;
    JDButton *findBtn_;
    JDButton *bindBtn_;
    JDButton *autoBindBtn;
    NSString *cardTitle;
    NSString *phoneNumber;
    NSString *jumpURL;
}

@property(nonatomic) id <BindGiftCardViewControllerDelegate> delegate; // @synthesize delegate;
@property(copy, nonatomic) NSString *jumpURL; // @synthesize jumpURL;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber;
@property(retain, nonatomic) UITextField *mTextField; // @synthesize mTextField;
@property(retain, nonatomic) UITextRange *previousSelection; // @synthesize previousSelection;
@property(retain, nonatomic) NSString *previousTextFieldContent; // @synthesize previousTextFieldContent;
@property(retain, nonatomic) NSString *cardTitle; // @synthesize cardTitle;
- (void)didReceiveMemoryWarning;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)insertSpacesEveryFourDigitsIntoString:(id)arg1 andPreserveCursorPosition:(unsigned long long *)arg2;
- (id)removeNonDigits:(id)arg1 andPreserveCursorPosition:(unsigned long long *)arg2;
- (void)reformatAsCardNumber:(id)arg1;
- (void)didFinishInToastView:(id)arg1;
- (void)autoBindBtnClicked:(id)arg1;
- (void)showBindFaildLabel:(id)arg1;
- (void)removeBindFaildLabel;
- (void)clearSelfView;
- (void)bindCard;
- (void)findBalance;
- (void)scanBtnClicked:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)phoneNumberClick:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)addAutoBindCardBtn:(id)arg1 actionURL:(id)arg2;
- (void)addAutoBindCardRequest;
- (void)addScanBtn;
- (void)addBindCardInfoRequest;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
