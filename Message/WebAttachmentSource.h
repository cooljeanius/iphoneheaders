/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "WebAttachmentSource.h"
#import <MIME/WRObject.h>

@class NSURL;

@interface WebAttachmentSource : WRObject {
	NSURL* _baseURL;
	unsigned _uniqueId : 30;
}
+(id)invalidBaseURL;
// inherited: -(void)dealloc;
// inherited: -(instancetype)init;
-(id)baseURL;
-(unsigned)uniqueIdentifier;
-(id)attachmentForURL:(id)url;
@end

@interface WebAttachmentSource (Mail)
-(int)priority;
@end

