//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIActionSheetDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class MBProgressHUD, MPMoviePlayerViewController, MWGridViewController, NSArray, NSMutableArray, NSMutableSet, NSString, NSTimer, UIActivityIndicatorView, UIActivityViewController, UIBarButtonItem, UIColor, UIImage, UIScrollView, UIToolbar;
@protocol MWPhotoBrowserDelegate;

@interface MWPhotoBrowser : UIViewController <UIScrollViewDelegate, UIActionSheetDelegate>
{
    unsigned long long _photoCount;	// 8 = 0x8
    NSMutableArray *_photos;	// 16 = 0x10
    NSMutableArray *_thumbPhotos;	// 24 = 0x18
    NSArray *_fixedPhotosArray;	// 32 = 0x20
    UIScrollView *_pagingScrollView;	// 40 = 0x28
    NSMutableSet *_visiblePages;	// 48 = 0x30
    NSMutableSet *_recycledPages;	// 56 = 0x38
    unsigned long long _currentPageIndex;	// 64 = 0x40
    unsigned long long _previousPageIndex;	// 72 = 0x48
    struct CGRect _previousLayoutBounds;	// 80 = 0x50
    unsigned long long _pageIndexBeforeRotation;	// 112 = 0x70
    UIToolbar *_toolbar;	// 120 = 0x78
    NSTimer *_controlVisibilityTimer;	// 128 = 0x80
    UIBarButtonItem *_previousButton;	// 136 = 0x88
    UIBarButtonItem *_nextButton;	// 144 = 0x90
    UIBarButtonItem *_actionButton;	// 152 = 0x98
    UIBarButtonItem *_doneButton;	// 160 = 0xa0
    MBProgressHUD *_progressHUD;	// 168 = 0xa8
    MWGridViewController *_gridController;	// 176 = 0xb0
    UIBarButtonItem *_gridPreviousLeftNavItem;	// 184 = 0xb8
    UIBarButtonItem *_gridPreviousRightNavItem;	// 192 = 0xc0
    _Bool _previousNavBarHidden;	// 200 = 0xc8
    _Bool _previousNavBarTranslucent;	// 201 = 0xc9
    long long _previousNavBarStyle;	// 208 = 0xd0
    long long _previousStatusBarStyle;	// 216 = 0xd8
    UIColor *_previousNavBarTintColor;	// 224 = 0xe0
    UIColor *_previousNavBarBarTintColor;	// 232 = 0xe8
    UIBarButtonItem *_previousViewControllerBackButton;	// 240 = 0xf0
    UIImage *_previousNavigationBarBackgroundImageDefault;	// 248 = 0xf8
    UIImage *_previousNavigationBarBackgroundImageLandscapePhone;	// 256 = 0x100
    MPMoviePlayerViewController *_currentVideoPlayerViewController;	// 264 = 0x108
    unsigned long long _currentVideoIndex;	// 272 = 0x110
    UIActivityIndicatorView *_currentVideoLoadingIndicator;	// 280 = 0x118
    _Bool _hasBelongedToViewController;	// 288 = 0x120
    _Bool _isVCBasedStatusBarAppearance;	// 289 = 0x121
    _Bool _statusBarShouldBeHidden;	// 290 = 0x122
    _Bool _displayActionButton;	// 291 = 0x123
    _Bool _leaveStatusBarAlone;	// 292 = 0x124
    _Bool _performingLayout;	// 293 = 0x125
    _Bool _rotating;	// 294 = 0x126
    _Bool _viewIsActive;	// 295 = 0x127
    _Bool _didSavePreviousStateOfNavBar;	// 296 = 0x128
    _Bool _skipNextPagingScrollViewPositioning;	// 297 = 0x129
    _Bool _viewHasAppearedInitially;	// 298 = 0x12a
    struct CGPoint _currentGridContentOffset;	// 304 = 0x130
    _Bool _zoomPhotosToFill;	// 320 = 0x140
    _Bool _displayNavArrows;	// 321 = 0x141
    _Bool _displaySelectionButtons;	// 322 = 0x142
    _Bool _alwaysShowControls;	// 323 = 0x143
    _Bool _enableGrid;	// 324 = 0x144
    _Bool _enableSwipeToDismiss;	// 325 = 0x145
    _Bool _startOnGrid;	// 326 = 0x146
    _Bool _autoPlayOnAppear;	// 327 = 0x147
    id <MWPhotoBrowserDelegate> _delegate;	// 328 = 0x148
    unsigned long long _delayToHideElements;	// 336 = 0x150
    NSString *_customImageSelectedIconName;	// 344 = 0x158
    NSString *_customImageSelectedSmallIconName;	// 352 = 0x160
    UIActivityViewController *_activityViewController;	// 360 = 0x168
}

@property(retain, nonatomic) UIActivityViewController *activityViewController; // @synthesize activityViewController=_activityViewController;
@property(retain, nonatomic) NSString *customImageSelectedSmallIconName; // @synthesize customImageSelectedSmallIconName=_customImageSelectedSmallIconName;
@property(retain, nonatomic) NSString *customImageSelectedIconName; // @synthesize customImageSelectedIconName=_customImageSelectedIconName;
@property(nonatomic) unsigned long long delayToHideElements; // @synthesize delayToHideElements=_delayToHideElements;
@property(nonatomic) _Bool autoPlayOnAppear; // @synthesize autoPlayOnAppear=_autoPlayOnAppear;
@property(nonatomic) _Bool startOnGrid; // @synthesize startOnGrid=_startOnGrid;
@property(nonatomic) _Bool enableSwipeToDismiss; // @synthesize enableSwipeToDismiss=_enableSwipeToDismiss;
@property(nonatomic) _Bool enableGrid; // @synthesize enableGrid=_enableGrid;
@property(nonatomic) _Bool alwaysShowControls; // @synthesize alwaysShowControls=_alwaysShowControls;
@property(nonatomic) _Bool displaySelectionButtons; // @synthesize displaySelectionButtons=_displaySelectionButtons;
@property(nonatomic) _Bool displayActionButton; // @synthesize displayActionButton=_displayActionButton;
@property(nonatomic) _Bool displayNavArrows; // @synthesize displayNavArrows=_displayNavArrows;
@property(nonatomic) _Bool zoomPhotosToFill; // @synthesize zoomPhotosToFill=_zoomPhotosToFill;
@property(nonatomic) __weak id <MWPhotoBrowserDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showProgressHUDCompleteMessage:(id)arg1;
- (void)hideProgressHUD:(_Bool)arg1;
- (void)showProgressHUDWithMessage:(id)arg1;
- (id)progressHUD;
- (void)actionButtonPressed:(id)arg1;
- (void)doneButtonPressed:(id)arg1;
- (void)setCurrentPhotoIndex:(unsigned long long)arg1;
- (void)toggleControls;
- (void)showControls;
- (void)hideControls;
- (_Bool)areControlsHidden;
- (void)hideControlsAfterDelay;
- (void)cancelControlHiding;
- (long long)preferredStatusBarUpdateAnimation;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)setControlsHidden:(_Bool)arg1 animated:(_Bool)arg2 permanent:(_Bool)arg3;
- (void)hideGrid;
- (void)showGrid:(_Bool)arg1;
- (void)showGridAnimated;
- (void)positionVideoLoadingIndicator;
- (void)setVideoLoadingIndicatorVisible:(_Bool)arg1 atPageIndex:(unsigned long long)arg2;
- (void)clearCurrentVideo;
- (void)videoFinishedCallback:(id)arg1;
- (void)_playVideo:(id)arg1 atPhotoIndex:(unsigned long long)arg2;
- (void)playVideoAtIndex:(unsigned long long)arg1;
- (void)playButtonTapped:(id)arg1;
- (void)selectedButtonTapped:(id)arg1;
- (void)showNextPhotoAnimated:(_Bool)arg1;
- (void)showPreviousPhotoAnimated:(_Bool)arg1;
- (void)gotoNextPage;
- (void)gotoPreviousPage;
- (void)jumpToPageAtIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)updateNavigation;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGRect)frameForPlayButton:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct CGRect)frameForSelectedButton:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct CGRect)frameForCaptionView:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct CGRect)frameForToolbarAtOrientation:(long long)arg1;
- (struct CGPoint)contentOffsetForPageAtIndex:(unsigned long long)arg1;
- (struct CGSize)contentSizeForPagingScrollView;
- (struct CGRect)frameForPageAtIndex:(unsigned long long)arg1;
- (struct CGRect)frameForPagingScrollView;
- (void)didStartViewingPageAtIndex:(unsigned long long)arg1;
- (id)dequeueRecycledPage;
- (void)configurePage:(id)arg1 forIndex:(unsigned long long)arg2;
- (id)pageDisplayingPhoto:(id)arg1;
- (id)pageDisplayedAtIndex:(unsigned long long)arg1;
- (_Bool)isDisplayingPageForIndex:(unsigned long long)arg1;
- (void)updateVisiblePageStates;
- (void)tilePages;
- (void)handleMWPhotoLoadingDidEndNotification:(id)arg1;
- (void)loadAdjacentPhotosIfNecessary:(id)arg1;
- (id)imageForPhoto:(id)arg1;
- (void)setPhotoSelected:(_Bool)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)photoIsSelectedAtIndex:(unsigned long long)arg1;
- (id)captionViewForPhotoAtIndex:(unsigned long long)arg1;
- (id)thumbPhotoAtIndex:(unsigned long long)arg1;
- (id)photoAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfPhotos;
- (void)reloadData;
@property(readonly, nonatomic) unsigned long long currentIndex;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)layoutVisiblePages;
- (void)viewWillLayoutSubviews;
- (void)restorePreviousNavBarAppearance:(_Bool)arg1;
- (void)storePreviousNavBarAppearance;
- (void)setNavBarAppearance:(_Bool)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)presentingViewControllerPrefersStatusBarHidden;
- (void)viewDidUnload;
- (void)performLayout;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)savePicture:(id)arg1;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)releaseAllUnderlyingPhotos:(_Bool)arg1;
- (void)dealloc;
- (void)_initialisation;
- (id)initWithCoder:(id)arg1;
- (id)initWithPhotos:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
