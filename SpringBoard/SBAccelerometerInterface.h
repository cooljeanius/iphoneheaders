/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <Foundation/NSObject.h>
#import <Availability2.h>

@class NSMutableArray, NSLock;

@interface SBAccelerometerInterface : NSObject {
	NSLock* _lock;
	double _samplingInterval;
	double _topDisplayLastUpdateTime;
	double _topDisplayInterval;
	NSMutableArray* _clients;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
	BOOL _springBoardWantsEvents;
#endif
}
// inherited: +(void)initialize;
+(SBAccelerometerInterface*)sharedInstance;
// inherited: -(instancetype)init;
// inherited: -(void)dealloc;
-(void)updateSettings;

-(void)setSpringBoardWantsEvents:(BOOL)events __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_3_2);

// set up a client to the mach port "port".

-(void)clientRequestedAccelerometerEvents:(mach_port_t)port
						   updateInterval:(NSTimeInterval)interval
							   xThreshold:(float)xThreshold yThreshold:(float)yThreshold zThreshold:(float)zThreshold
							   auditToken:(audit_token_t*)token;
-(void)_clientInvalidated:(id)invalidated;
-(void)accelerometerDataReceived:(double)received x:(float)x y:(float)y z:(float)z type:(unsigned)type;
@end

