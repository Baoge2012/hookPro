//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDViewController.h"

#import "UISearchBarDelegate.h"
#import "UISearchDisplayDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class ClickMoreView, MDFeedApi, NSMutableArray, NSString, UIActivityIndicatorView, UILabel, UISearchBar, UISearchDisplayController, UITableView;

@interface MDFeedSiteListViewController : MDViewController <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, UISearchDisplayDelegate>
{
    UISearchBar *searchBar;
    int pageIndex;
    _Bool isHasMore;
    _Bool isLoading;
    CDUnknownBlockType _siteChangeHandleBlock;
    NSString *_currentSiteID;
    NSMutableArray *_listArray;
    NSMutableArray *_circleListArray;
    NSMutableArray *_searchArray;
    NSMutableArray *_circleSearchArray;
    UISearchDisplayController *_searchController;
    UITableView *_listTableView;
    UIActivityIndicatorView *_activityIndicator;
    UILabel *_noResultTipLabel;
    ClickMoreView *_loadMoreView;
    MDFeedApi *_feedApi;
}

@property(retain, nonatomic) MDFeedApi *feedApi; // @synthesize feedApi=_feedApi;
@property(retain, nonatomic) ClickMoreView *loadMoreView; // @synthesize loadMoreView=_loadMoreView;
@property(retain, nonatomic) UILabel *noResultTipLabel; // @synthesize noResultTipLabel=_noResultTipLabel;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UITableView *listTableView; // @synthesize listTableView=_listTableView;
@property(retain, nonatomic) UISearchDisplayController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) NSMutableArray *circleSearchArray; // @synthesize circleSearchArray=_circleSearchArray;
@property(retain, nonatomic) NSMutableArray *searchArray; // @synthesize searchArray=_searchArray;
@property(retain, nonatomic) NSMutableArray *circleListArray; // @synthesize circleListArray=_circleListArray;
@property(retain, nonatomic) NSMutableArray *listArray; // @synthesize listArray=_listArray;
@property(copy, nonatomic) NSString *currentSiteID; // @synthesize currentSiteID=_currentSiteID;
@property(copy, nonatomic) CDUnknownBlockType siteChangeHandleBlock; // @synthesize siteChangeHandleBlock=_siteChangeHandleBlock;
- (void)didReceiveMemoryWarning;
- (void)checkIsHasMore:(id)arg1;
- (void)refreshLoadMoreButtonState;
- (void)loadMoreData;
- (void)hideHud;
- (void)showHud;
- (_Bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)filterContentForSearchText:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)closeAction;
- (void)cancelAction;
- (void)chooseSuccess:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)requestFailed:(id)arg1;
- (void)requestError:(id)arg1;
- (void)keywordRequestSuccess:(id)arg1;
- (void)requestSuccess:(id)arg1;
- (void)startRequest:(id)arg1;
- (void)locationDidFail:(id)arg1;
- (void)locationDidFinish:(id)arg1;
- (void)startLocation;
- (void)removeLocationObserver;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithSiteID:(id)arg1 selectedSiteChangedHandleBlock:(CDUnknownBlockType)arg2;
- (void)pushToFeedSiteListViewControllerWithParam:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
