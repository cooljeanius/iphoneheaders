/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "DeliveryAccount.h"

@class DAMailAccount;

@interface DADeliveryAccount : DeliveryAccount {
	DAMailAccount* _DAMailAccount;
}
-(instancetype)initWithDAMailAccount:(id)damailAccount;
// inherited: -(Class)deliveryClass;
// inherited: -(id)newDeliveryWithMessage:(id)message;
// inherited: -(id)newDeliveryWithHeaders:(id)headers mixedContent:(id)content textPartsAreHTML:(BOOL)html;
// inherited: -(id)newDeliveryWithHeaders:(id)headers HTML:(id)html plainTextAlternative:(id)alternative other:(id)other;
// inherited: -(void)dealloc;
// inherited: -(id)mailAccountIfAvailable;
@end

