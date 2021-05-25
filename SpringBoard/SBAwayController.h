/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBAlert.h"
#import <Availability2.h>

@class SBUIController, NSTimer, NSDictionary, NSTimeZone, NSString, SBAwayModel, NSMutableArray, SBSleepProofTimer, SBSlidingAlertDisplay, NSMutableDictionary, SBAwayView, SBAlertItem;

@interface SBAwayController : SBAlert {
	SBUIController* _uiController;
	SBAwayModel* _model;
	SBAwayView* _awayView;
	NSTimer* _dimTimer;
	unsigned _isLocked : 1;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
	unsigned _isUnlocking : 1;
#endif
	unsigned _isDeviceLocked : 1;
	unsigned _isDeviceLockedInitialized : 1;
	unsigned _isDimmed : 1;
	unsigned _isDimming : 1;
	unsigned _orderedOutDimmed : 1;
	unsigned _frontDimmed : 1;
	unsigned _isPermanentlyBlocked : 1;
	unsigned _makingEmergencyCall : 1;
	unsigned _appRequestedPasscodeEntry : 1;
	unsigned _isSyncing : 1;
	unsigned _relockAfterUnlock : 1;
	unsigned _wasLockedOrMakingEmergencyCallBeforeSync : 1;
	unsigned _wasDeviceLockedBeforeSync : 1;
	unsigned _showOverheatUI : 1;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
	unsigned _performingAutoUnlock : 1;
#endif
	NSDictionary* _nowPlayingInfo;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
	NSNumber* _iPodNowPlayingPID;
	BOOL _iPodIsPlaying;
#endif
	SBSlidingAlertDisplay* _deviceUnlockDisplay;
	double _deviceLockBlockTime;
	double _lastLockWallTime;
	NSTimeZone* _lastLockTimeZone;
	double _lastLockSecondsSinceBoot;
	NSTimer* _deviceLockTimer;
	BOOL _devicePasscodeLoaded;
	NSString* _devicePasscode;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
	BOOL _chargingViewHasFadedOut;
#endif
	NSMutableArray* _pendingAlertItems;
	SBAlertItem* _currentAlertItem;
	NSMutableDictionary* _awayViewPluginControllers;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
	NSString* _alwaysFullscreenAwayPluginName;
#endif
	SBSleepProofTimer* _smsSoundWakeTimers[2];
}
+(id)sharedAwayController;
// inherited: +(void)registerForAlerts;
-(instancetype)initWithUIController:(id)uicontroller;
-(id)awayModel;
// inherited: -(CGRect)alertWindowRect;
// inherited: -(float)finalAlpha;
// inherited: -(BOOL)undimsDisplay;
-(id)awayView;
// inherited: -(id)alertDisplayViewWithSize:(CGSize)size;
-(void)alertDisplayWillBecomeVisible;
// inherited: -(void)dealloc;
-(void)_releaseAwayView;
-(void)reactivatePendingAlertItems;
-(void)playLockSound;
-(void)_sendLockStateChangedNotification;
-(BOOL)showOverheatUI;
-(void)setShowOverheatUI:(BOOL)ui;
-(void)_pendAlertItem:(id)item;
-(void)lock;
-(id)pendingAlertItems;
-(void)unlockWithSound:(BOOL)sound;
-(void)unlockWithSound:(BOOL)sound alertDisplay:(id)display;
-(void)loadPasscode;
-(id)devicePasscode;
-(BOOL)isPasswordProtected;
-(void)activationChanged:(id)changed;
-(BOOL)isDeviceLockedOrBlocked;
-(void)setDeviceLocked:(BOOL)locked;
-(int)_getGracePeriod;
-(void)_markLockTime;
-(void)_updateDeviceLockedState;
-(void)clearDeviceLockedTimer;
-(void)applicationRequestedDeviceUnlock;
-(void)cancelApplicationRequestedDeviceLockEntry;
-(void)_clearBlockedState;
-(BOOL)isBlocked;
-(BOOL)isPermanentlyBlocked:(double*)blocked;
-(void)noteSyncStateChanged;
-(BOOL)isSyncing;
-(void)noteResetRestoreStateChanged;
-(BOOL)isLocked;
-(BOOL)shouldShowLockStatusBarTime;
-(void)lockBarStartedTracking:(id)tracking;
-(void)lockBarStoppedTracking:(id)tracking;
-(void)resetAwayItems;
-(void)frontLockedAnimationFinished;
-(BOOL)shouldAnimateOtherDisplaysSuspension;
-(BOOL)shouldAnimateOtherDisplaysResumption;
-(void)printLockLog;
-(void)frontLocked:(BOOL)locked animate:(BOOL)animate automatically:(BOOL)automatically;
-(void)attemptUnlock;
-(BOOL)isAttemptingUnlock;
-(void)_finishedUnlockAttemptWithStatus:(BOOL)status;
-(BOOL)attemptDeviceUnlockWithPassword:(id)password alertDisplay:(id)display;
-(void)cancelDimTimer;
-(void)restartDimTimer:(float)timer;
-(id)dimTimer;
-(BOOL)isDimmed;
-(void)finishedDimmingScreen;
-(BOOL)moveAlertItemToAwayView:(id)awayView;
-(void)cleansePendingQueueOfAwayItems;
-(void)smsMessageReceived;
-(void)cancelScheduledSMSSounds;
-(void)_smsSoundWakeTimerFired:(id)fired;
-(void)dimTimerFired;
-(void)relockForButtonPress:(BOOL)buttonPress afterCall:(BOOL)call;
-(void)relockForButtonPress:(BOOL)buttonPress afterCall:(BOOL)call dimmed:(BOOL)dimmed;
-(void)allowIdleSleep;
-(void)preventIdleSleep;
-(void)preventIdleSleepForNumberOfSeconds:(float)seconds;
-(void)dimScreen:(BOOL)screen;
-(void)_undimScreen;
-(void)undimScreen;
-(void)userEventOccurred;
// inherited: -(void)activate;
// inherited: -(void)deactivate;
// inherited: -(BOOL)allowsStackingOfAlert:(id)alert;
// inherited: -(BOOL)allowsDoubleHeightStatusBar:(BOOL)bar;
// inherited: -(int)statusBarMode;
-(void)orderOut;
// inherited: -(void)didFinishAnimatingOut;
-(void)handleRequestedAlbumArt:(id)art;
-(void)updateClockFormat;
-(void)makeEmergencyCall;
-(void)emergencyCallWasDisplayed;
-(void)emergencyCallWasRemoved;
-(BOOL)isMakingEmergencyCall;
// inherited: -(void)didAnimateLockKeypadIn;
// inherited: -(void)didAnimateLockKeypadOut;
-(id)currentAlertItem;
-(void)pendOrDeactivateCurrentAlertItem;
-(BOOL)isCurrentAlertItemRinging;
-(BOOL)attemptSnoozeRingingAlertItem;
-(void)stopRingingAlertItem;
-(void)snoozeOrStopRingingAlertItem;
-(BOOL)activateAlertItem:(id)item;
-(BOOL)wantsToHandleAlert:(id)handleAlert;
-(void)deactivateAlertItem:(id)item;
-(void)updateInCallUI;
-(BOOL)isShowingMediaControls;
-(void)hideMediaControls;
-(BOOL)toggleMediaControls;
-(void)toggleShowsIMEIandICCID:(id)iccid;
-(BOOL)isAwayPluginViewVisible;
-(id)highestPriorityAwayPluginController;
-(void)enableLockScreenBundleWithName:(id)name;
-(void)disableLockScreenBundleWithName:(id)name;
-(void)disablePluginContainerNotification:(id)notification;
-(BOOL)awayPluginControllerShouldAnimateOthersResumption;
-(BOOL)handleMenuButtonTap;
-(BOOL)handleMenuButtonDoubleTap;
-(BOOL)handleMenuButtonHeld;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
@property(assign, nonatomic) BOOL chargingViewHasFadedOut;
-(void)_unlockWithSound:(BOOL)sound isAutoUnlock:(BOOL)unlock;
-(void)screensaverDidFadeToBlack:(id)screensaver finished:(id)finished context:(void*)context;
-(void)unlockWithSound:(BOOL)sound alertDisplay:(id)display isAutoUnlock:(BOOL)unlock;
-(void)unlockWithSound:(BOOL)sound isAutoUnlock:(BOOL)unlock;
-(BOOL)deviceHasPhotos;
-(BOOL)hasPhotosDevicesAttached;
-(BOOL)shouldShowSlideshowButton;
-(void)frontLocked:(BOOL)locked withAnimation:(int)animation automatically:(BOOL)automatically disableLockSound:(BOOL)sound;
-(void)attemptUnlockWithHardwareKeyPress:(BOOL)hardwareKeyPress;
-(BOOL)handleKeyEvent:(GSEventRef)event;
-(void)updateNowPlayingInfo:(id)info fromiPod:(BOOL)pod;
-(void)updateiPodNowPlayingInfo:(id)info;
-(void)updateiPodPlaybackState:(id)state;
-(void)updateAwayViewNowPlayingInfo;
-(void)_fetchiPodNowPlayingInfo:(id)info;
-(void)_handleFetchediPodNowPlayingInfo:(id)info;
-(void)_batteryStatusChanged;
-(id)activeAwayPluginController;
-(id)interfaceControllingAwayPluginController;
-(id)nameOfPluginController:(id)pluginController;
-(void)pluginVisiblityStateChanged:(id)changed;
-(void)_disablePluginControllersForLock;
-(void)_disablePluginControllersForUnlock;
-(void)pluginFullscreenNotification:(id)notification;
-(void)hardwareKeyboardAvailabilityChanged;
-(BOOL)handleSlideshowHardwareButton;
-(void)setAlwaysFullscreenAwayPluginName:(id)name;
-(BOOL)isAlwaysFullscreenAwayPluginEnabled;
-(void)enableAlwaysFullscreenAwayPlugin;
-(void)unlockAlwaysFullscreenAwayView;
#endif
#if __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE_3_2
-(void)_unlockWithSound:(BOOL)sound;
-(void)updateNowPlayingInfo:(id)info;
#endif
@end

