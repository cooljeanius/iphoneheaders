/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <Foundation/NSObject.h>
#import <CoreFoundation/CoreFoundation.h>
#import <UIKit/UIDevice.h>

@class NSLock, NSThread, SBSAccelerometer;

@protocol SBSAccelerometerDelegate
-(void)accelerometer:(SBSAccelerometer*)accelerometer didAccelerateWithTimeStamp:(NSTimeInterval)timestamp
				   x:(float)x y:(float)y z:(float)z eventType:(unsigned)type;
@optional
-(void)accelerometer:(SBSAccelerometer*)accelerometer didChangeDeviceOrientation:(UIDeviceOrientation)newOrientation;
@end

@interface SBSAccelerometer : NSObject {
	id<SBSAccelerometerDelegate> _delegate;
	CFRunLoopSourceRef _accelerometerEventsSource;
	CFRunLoopRef _accelerometerEventsRunLoop;
	NSTimeInterval _interval;
	NSLock* _lock;
	BOOL _orientationEventsEnabled;
	int _orientationEventsToken;
	NSThread* _orientationEventsThread;
	float _xThreshold;
	float _yThreshold;
	float _zThreshold;
}
@property(assign, nonatomic) id<SBSAccelerometerDelegate> delegate;
@property(assign, nonatomic) BOOL orientationEventsEnabled;
@property(assign, nonatomic) float zThreshold;
@property(assign, nonatomic) float yThreshold;
@property(assign, nonatomic) float xThreshold;
@property(assign, nonatomic) NSTimeInterval updateInterval;
@property(assign, nonatomic) BOOL accelerometerEventsEnabled;
// inherited: -(instancetype)init;
// inherited: -(void)dealloc;
-(void)_checkIn;
-(void)_checkOut;
-(void)_serverWasRestarted;
-(UIDeviceOrientation)currentDeviceOrientation;
-(id)_orientationEventsThread;
-(void)_orientationDidChange;
@end

