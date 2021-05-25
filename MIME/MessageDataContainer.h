/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface MessageDataContainer : NSObject {
	NSData* _data;
	BOOL _partial;
	BOOL _incomplete;
}
-(instancetype)initWithData:(id)data partial:(BOOL)partial incomplete:(BOOL)incomplete;
-(instancetype)initWithData:(id)data;
-(id)data;
// inherited: -(void)dealloc;
@end

