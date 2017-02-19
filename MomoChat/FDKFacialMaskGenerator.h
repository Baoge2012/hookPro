//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageFilter.h"

@class GPUImageFramebuffer, NSArray;

@interface FDKFacialMaskGenerator : GPUImageFilter
{
    _Bool _maskHasPremultipliedAlpha;
    unsigned int _maskOpacityUniform;
    unsigned int _maskHasPremultipliedAlphaUniform;
    GPUImageFramebuffer *_maskTextureFramebuffer;
    NSArray *_maskLandmarks;
    NSArray *_landmarks;
    double _maskOpacity;
}

@property(nonatomic) _Bool maskHasPremultipliedAlpha; // @synthesize maskHasPremultipliedAlpha=_maskHasPremultipliedAlpha;
@property(nonatomic) double maskOpacity; // @synthesize maskOpacity=_maskOpacity;
@property(nonatomic) unsigned int maskHasPremultipliedAlphaUniform; // @synthesize maskHasPremultipliedAlphaUniform=_maskHasPremultipliedAlphaUniform;
@property(nonatomic) unsigned int maskOpacityUniform; // @synthesize maskOpacityUniform=_maskOpacityUniform;
@property(copy) NSArray *landmarks; // @synthesize landmarks=_landmarks;
@property(copy) NSArray *maskLandmarks; // @synthesize maskLandmarks=_maskLandmarks;
@property(retain) GPUImageFramebuffer *maskTextureFramebuffer; // @synthesize maskTextureFramebuffer=_maskTextureFramebuffer;
- (void).cxx_destruct;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (id)init;

@end
