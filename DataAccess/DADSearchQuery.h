/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>
#import "NSCopying.h"
#import "DataAccess-Structs.h"

@class NSString;

@interface DADSearchQuery : NSObject <NSCopying> {
	int _state;
	unsigned _timeLimit;
	NSRange _range;
	NSString* _searchString;
}
@property(assign) NSRange range;
@property(assign) unsigned timeLimit;
@property(readonly, assign) NSString* searchString;
@property(assign) unsigned maxResults;
// inherited: -(id)description;
-(instancetype)initWithSearchString:(id)searchString;
-(instancetype)initWithDictionaryRepresentation:(id)dictionaryRepresentation;
// inherited: -(void)dealloc;
-(void)_copyProperties:(id)properties;
// in a protocol: -(id)copyWithZone:(NSZone*)zone;
-(BOOL)isQueryRunning;
-(BOOL)isEqualToDADSearchQuery:(id)dadsearchQuery;
// inherited: -(BOOL)isEqual:(id)equal;
// inherited: -(unsigned)hash;
-(int)state;
-(void)setState:(int)state;
@end

