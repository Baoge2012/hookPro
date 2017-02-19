//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWebView.h>

#import "WVWebViewProtocol-Protocol.h"

@class NSDictionary, NSString, NSURL, NSURLRequest, UIScrollView, UIViewController, WVCommonWebView, WVJSPatch, WVJavascriptApplication, WVPagePerformance;
@protocol WVWebViewDelegate;

@interface WVWebView : UIWebView <WVWebViewProtocol>
{
    _Bool _useCustomPullToRefresh;	// 8 = 0x8
    _Bool _autoPlayAudio;	// 9 = 0x9
    NSString *bizCode;	// 16 = 0x10
    WVCommonWebView *_commonWebView;	// 24 = 0x18
}

+ (void)setDefaultUrlScheme:(id)arg1;
+ (id)defaultUrlScheme;
+ (void)WindVaneReadyEventForJS:(id)arg1;
+ (_Bool)isPostRequest:(id)arg1;
+ (id)getRequestBodyForPost:(id)arg1;
+ (_Bool)isOpenURLInterruptedModule;
+ (void)openURLInterruptedModule;
+ (void)closeURLInterruptedModule;
@property(retain, nonatomic) WVCommonWebView *commonWebView; // @synthesize commonWebView=_commonWebView;
@property(nonatomic, getter=isAutoPlayAudio) _Bool autoPlayAudio; // @synthesize autoPlayAudio=_autoPlayAudio;
@property(nonatomic, getter=isUseCustomPullToRefresh) _Bool useCustomPullToRefresh; // @synthesize useCustomPullToRefresh=_useCustomPullToRefresh;
@property(retain, nonatomic) NSString *bizCode; // @synthesize bizCode;
- (void).cxx_destruct;
- (CDUnknownBlockType)callBackResponeseForJSWithHandlerName:(id)arg1 className:(id)arg2;
- (void)setJSPatchRule:(id)arg1;
- (id)getJSPatchRule;
- (void)openJSBridgeLog;
- (void)deallocWebViewService;
@property(nonatomic) _Bool isOpenAutoPlayAudio;
- (void)fetchElementValue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) WVJavascriptApplication *webviewJSBContext;
- (void)callRegistedHandler:(id)arg1 withMethod:(id)arg2 withData:(id)arg3 withFatherClass:(id)arg4 withFatherMethod:(id)arg5 withResultCallback:(CDUnknownBlockType)arg6;
- (void)callRegistedHandler:(id)arg1 withMethod:(id)arg2 withData:(id)arg3 withFatherClass:(id)arg4 withFatherMethod:(id)arg5;
- (void)registeHandler:(id)arg1 withClassName:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)registerHandler:(id)arg1 withClassName:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)setIsOpenLocalService:(_Bool)arg1;
@property(nonatomic, getter=isOpenLocalService) _Bool openLocalService;
- (void)dealloc;
- (void)bindingWebViewService;
- (void)releaseWebViewService;
- (void)setDelegate:(id)arg1;
- (void)stopLoading;
- (void)reload;
@property(readonly, copy, nonatomic) NSURL *URL;
- (id)getRequestUrl;
- (void)loadRequest:(id)arg1;
@property(readonly, retain, nonatomic) NSURLRequest *request;
- (void)setIsOpenLongPressSaveImage:(_Bool)arg1;
@property(nonatomic, getter=isOpenLongPressSaveImage) _Bool openLongPressSaveImage;
@property(nonatomic, getter=isOpenWebKitLongPress) _Bool openWebKitLongPress;
@property(nonatomic) _Bool scrollsToTop;
- (void)stopInfiniteScrollingAnimating;
@property(nonatomic, getter=isUseInfiniteScrolling) _Bool useInfiniteScrolling;
@property(nonatomic, getter=isUsePullToRefresh) _Bool usePullToRefresh;
@property(nonatomic, getter=isForbiddenPullScroll) _Bool forbiddenPullScroll;
- (_Bool)forbiddenPullScroll;
@property(nonatomic) __weak id <WVWebViewDelegate> windVaneDelegate;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSDictionary *jsBridgeCallHistory;
- (id)perfRecorder;
@property(readonly, nonatomic) WVPagePerformance *pagePerformance;
- (void)isPageEmpty:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isPageEmpty) _Bool pageEmpty;
@property(nonatomic) long long contentType;
@property(readonly, nonatomic) long long visiblity;
@property(nonatomic) long long visibleInViewController;
@property(nonatomic) __weak UIViewController *sourceViewController;
@property(readonly, nonatomic) WVJSPatch *jsPatch;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) _Bool allowsInlineMediaPlayback;
@property(readonly, nonatomic, getter=canGoBack) _Bool canGoBack;
@property(readonly, nonatomic, getter=canGoForward) _Bool canGoForward;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
@property(nonatomic) _Bool mediaPlaybackAllowsAirPlay;
@property(nonatomic) _Bool mediaPlaybackRequiresUserAction;
@property(readonly, retain, nonatomic) UIScrollView *scrollView;
@property(readonly) Class superclass;

@end
