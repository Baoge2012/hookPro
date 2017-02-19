//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SearchCellController-Protocol.h"

@class NSString, TMViewController, UICollectionView;
@protocol TMSearchResultsVMProtocol;

@interface CustomizeCellController : NSObject <SearchCellController>
{
    id _cellComponentDelegate;	// 8 = 0x8
    id <TMSearchResultsVMProtocol> _viewModel;	// 16 = 0x10
    TMViewController *_contentController;	// 24 = 0x18
    UICollectionView *_collectionView;	// 32 = 0x20
}

@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak TMViewController *contentController; // @synthesize contentController=_contentController;
@property(nonatomic) __weak id <TMSearchResultsVMProtocol> viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)setupDelegateFor:(id)arg1;
- (Class)supportDataType;
- (void)buildViewWithData:(id)arg1 forView:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (id)initWithCellComponentDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
