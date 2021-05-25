/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlertItem.h"

@class NSString, SBDisplay;

@interface SBLaunchAlertItem : SBAlertItem {
	SBDisplay* _associatedDisplay;
	int _type;
	NSString* _bundleID;
	BOOL _isDataAlert;
	BOOL _usesCellNetwork;
}
-(instancetype)initWithLaunchAlertType:(int)launchAlertType dataAlert:(BOOL)alert usesCellNetwork:(BOOL)network bundleID:(id)anId;
// inherited: -(void)dealloc;
-(void)setAssociatedWithDisplay:(id)display;
-(void)_displayDeactivated:(id)deactivated;
// inherited: -(BOOL)dismissOnLock;
-(id)_customAirplaneModeAlertPrompt;
// inherited: -(id)alertSheet;
-(void)alertSheet:(id)sheet buttonClicked:(int)clicked;
@end

