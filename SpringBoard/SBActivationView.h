/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIView.h>

@class SBStatusBarBatteryView;

@interface SBActivationView : UIView {
	UIView* _backgroundView;
	SBStatusBarBatteryView* _batteryView;
	int _mode;
}
-(instancetype)initWithFrame:(CGRect)frame mode:(int)mode;
-(int)mode;
// inherited: -(void)dealloc;
@end

