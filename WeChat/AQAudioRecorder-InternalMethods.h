//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AQAudioRecorder.h"

@interface AQAudioRecorder (InternalMethods)
- (void)setMagicCookieToAudioFile:(struct OpaqueAudioFileID *)arg1;
- (void)prepareBuffers;
- (void)setDataFormat_PCM;
- (void)createAudioFile_WAVE:(id)arg1 Fd:(struct OpaqueAudioFileID **)arg2;
- (void)setDataFormat_iLBC;
- (void)createAudioFile_CAF:(id)arg1;
@end
