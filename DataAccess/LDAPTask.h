/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>

@class LDAPTaskManager;

@interface LDAPTask : NSObject {
	LDAPTaskManager* _taskManager;
	int _taskID;
	id _delegate;
}
+(unsigned)uniqueQueryID;
// inherited: -(instancetype)init;
-(void)setTaskManager:(id)manager;
-(id)taskManager;
-(void)performTask;
-(int)taskID;
-(void)setDelegate:(id)delegate;
-(id)delegate;
-(void)finishWithError:(id)error;
-(BOOL)shouldHoldPowerAssertion;
-(int)taskStatusForError:(id)error;
@end

