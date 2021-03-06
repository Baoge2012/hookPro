//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "NSURLSessionDelegate.h"

@class NSString, NSURL, NSURLSession, NSURLSessionDownloadTask;

@interface LCNetworkImageView : UIView <NSURLSessionDelegate>
{
    CDUnknownBlockType _downloadImageFinishedBlock;
    NSURLSessionDownloadTask *_task;
    NSURL *_imageURL;
    long long _lecContentMode;
    NSURLSession *_session;
}

@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(nonatomic) long long lecContentMode; // @synthesize lecContentMode=_lecContentMode;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) NSURLSessionDownloadTask *task; // @synthesize task=_task;
@property(copy, nonatomic) CDUnknownBlockType downloadImageFinishedBlock; // @synthesize downloadImageFinishedBlock=_downloadImageFinishedBlock;
- (void).cxx_destruct;
- (id)image;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (_Bool)copyTempFileAtURL:(id)arg1 toDestination:(id)arg2;
- (void)cancelRequest;
- (void)loadImageWithURL:(id)arg1 completed:(CDUnknownBlockType)arg2;
- (void)loadImageViewWithImage:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setContentMode:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

