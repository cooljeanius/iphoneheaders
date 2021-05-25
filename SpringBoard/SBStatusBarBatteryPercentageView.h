/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBStatusBarContentView.h"


@interface SBStatusBarBatteryPercentageView : SBStatusBarContentView {
	int _displayedCapacity;
	BOOL _isOnAC;
	BOOL _showBatteryPercentageView;
}
// inherited: -(instancetype)init;
-(void)updateBattery;
-(void)_batteryStatusChanged:(id)changed;
// inherited: -(void)dealloc;
// inherited: -(void)start;
// inherited: -(void)stop;
// inherited: -(int)priority;
-(void)drawRect:(CGRect)rect;
// inherited: -(void)setVisible:(BOOL)visible;
// inherited: -(BOOL)isVisible;
// inherited: -(float)padding;
@end

