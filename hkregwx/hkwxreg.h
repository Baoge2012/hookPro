#import "include/CContact.h"

///获取微信聊天的群ID
@interface MMUIViewController : UIViewController

@end

@interface ChatRoomInfoViewController : MMUIViewController{
    UIView *m_titleView;
    NSArray *m_arrMemberList;
}

@property(retain, nonatomic) CContact *m_chatRoomContact; // @synthesize m_chatRoomContact;

- (void)sysChatRoomAction;
- (void)viewDidAppear:(_Bool)arg1;
@end

//有账号页面
@interface WCAccountLoginLastUserViewController
- (void)viewDidLoad;
- (id)init;
- (void)initView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
@end

//手机号注册页面
@interface WCAccountFillPhoneViewController
- (void)viewDidLoad;
@end

//验证码
@interface WCAccountPhoneVerifyViewController
- (void)initView;
@end

//完善个人信息页面
@interface WCAccountRegisterViewController
- (void)viewDidLoad;
@end

//已存在微信账号
@interface WCAccountRegByOldPhoneViewController
- (void)viewDidLoad;
@end

//进入首页页面
@interface NewMainFrameViewController
- (void)viewDidAppear:(_Bool)arg1;

@end

//手机号注册页面
@interface WCAccountLoginFirstViewController
- (void)initView;
@end


//安全模式第一步
@interface MMSMStartViewController
- (void)onNextButtonClicked:(id)arg1; //[#0x19099f10 onNextButtonClicked:@"1"] 下一步
- (void)viewDidLoad;
@end

//第二步
@interface MMSMClearDataViewController{
    UIButton *m_nextButton;
}
- (void)viewDidLoad;
- (void)onNextButtonClicked:(id)arg1;

@end

//第三步
@interface MMSMUploadFileViewController{
    UIButton *m_nextButton;
}

- (void)viewDidLoad;
- (void)onNextButtonClicked:(id)arg1;
@end

//第四步
@interface MMSMFinishViewController
- (void)onEnterButtonClicked:(id)arg1;
- (void)viewDidLoad;
@end

//通过短信验证身份的页面
@interface WCAccountNewDeviceViewController
- (void)viewDidLoad;
@end


@interface CMainControll
- (void)onKickQuit;
@end

@interface BaseMsgContentViewController
- (void)viewDidAppear:(_Bool)arg1;

@end


@interface QRCodeCardView
@property(readonly, nonatomic) UIImageView *m_imageQRView;
@end

@interface QRCodeViewController:MMUIViewController
{
    CContact *m_contact;
    QRCodeCardView *m_qrcodeCard;
}

-(void)upLoadData;
-(void)showSheet;
-(void)createChatRoomInfoButton;

- (void)viewDidLoad;
@end


@interface CGroupMgr
- (void)OnAddChatRoomMember:(id)arg1;
- (_Bool)AddGroupMember:(id)arg1 withMemberList:(id)arg2;
@end








