//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDMainPageFloorAnimationModel.h"

@class NSMutableArray;

@interface JDMainPageFloorAnimationRandomModel : JDMainPageFloorAnimationModel
{
    NSMutableArray *_steps;
    long long _subViewCount;
    NSMutableArray *_array1;
    NSMutableArray *_array2;
}

@property(retain, nonatomic) NSMutableArray *array2; // @synthesize array2=_array2;
@property(retain, nonatomic) NSMutableArray *array1; // @synthesize array1=_array1;
@property(nonatomic) long long subViewCount; // @synthesize subViewCount=_subViewCount;
@property(retain, nonatomic) NSMutableArray *steps; // @synthesize steps=_steps;
- (void).cxx_destruct;
- (id)obj:(id)arg1 changeX:(_Bool)arg2 add:(_Bool)arg3 times:(long long)arg4;
- (void)moveOnceWithTimes:(long long)arg1;
- (id)allStepsWithAnimationSubView:(id)arg1 stepCount:(long long)arg2 animationIndex:(long long)arg3 reverseIndex:(long long)arg4 pathsPoints:(id)arg5;
- (id)pathsWithAnimationView:(id)arg1 subViewCount:(long long)arg2;

@end
