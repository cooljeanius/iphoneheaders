/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import "TPBottomBar.h"
#import <Availability2.h>

@class TPPushButton;
@class UIImageView, UIView;

@interface TPBottomButtonBar : TPBottomBar {
	id _delegate;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
	UIImageView* _backgroundView;
	UIView* _well;
#endif
	TPPushButton* _button;
}
-(instancetype)initForIncomingCallWaitingWithFrame:(CGRect)frame;
-(instancetype)initForEndCallWithFrame:(CGRect)frame;
-(instancetype)initForTTYWithFrame:(CGRect)frame;
-(instancetype)initForVoiceControlWithFrame:(CGRect)frame;
-(void)setButton:(TPPushButton *)button;
-(TPPushButton *)button;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
// inherited: +(id)_backgroundImage;
-(void)addBackgroundAndWellIfNecessary;
-(instancetype)initForEndVideoWithFrame:(CGRect)frame;
#endif
@end

