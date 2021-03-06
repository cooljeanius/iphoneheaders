/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PLPhotosDefaults : NSObject {
	BOOL _shouldRepeat;
	BOOL _shouldShuffle;
	int _transition;
	int _secondsPerSlide;
	NSString* _musicForSlideshow;
}
+(id)sharedInstance;
+(int)randomTransition;
// inherited: -(instancetype)init;
-(BOOL)shouldRepeat;
-(BOOL)shouldShuffle;
-(int)secondsPerSlide;
-(int)transitionForAnimationMovingForward:(BOOL)animationMovingForward;
-(int)transition;
-(int)smoothScrollBehavior;
-(BOOL)shouldPlayMusic;
-(id)musicForSlideshow;
@end

