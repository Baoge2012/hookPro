//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MBProgressHUD, MDGroupApi, NSArray, NSString, UITableView;

@interface MDRecommendGroupViewController : MDViewController <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_recommendTableView;
    NSArray *_recommendArray;
    MDGroupApi *_groupApi;
    NSString *_currentGroupId;
    MBProgressHUD *_hud;
}

@property(retain, nonatomic) MBProgressHUD *hud; // @synthesize hud=_hud;
@property(retain, nonatomic) NSString *currentGroupId; // @synthesize currentGroupId=_currentGroupId;
@property(retain, nonatomic) MDGroupApi *groupApi; // @synthesize groupApi=_groupApi;
@property(retain, nonatomic) NSArray *recommendArray; // @synthesize recommendArray=_recommendArray;
@property(retain, nonatomic) UITableView *recommendTableView; // @synthesize recommendTableView=_recommendTableView;
- (void)removeHud;
- (void)showHud;
- (void)getRecommendGroupError:(id)arg1;
- (void)getRecommendGroupFail:(id)arg1;
- (void)getRecommendGroupSuccess:(id)arg1;
- (void)sendRecommendGroupListRequest;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)didReceiveMemoryWarning;
- (void)gotoBack;
- (void)viewDidLoad;
- (id)initWithCurrentGroupid:(id)arg1;
- (id)initWithRecommendArray:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
