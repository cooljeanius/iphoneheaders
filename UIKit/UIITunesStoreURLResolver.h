/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <Foundation/NSObject.h>
#import <Availability2.h>

@class NSArray;

typedef enum {
	UIITunesStoreURLTypeInvalid,
	UIITunesStoreURLTypeMusicStore,
	UIITunesStoreURLTypeAppStore,
} UIITunesStoreURLType;

__attribute__((visibility("hidden")))
@interface UIITunesStoreURLResolver : NSObject {
	NSArray* _appStoreHostPatterns;
	NSArray* _appStorePathPatterns;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
	NSArray* _bookStoreHostPatterns;
	NSArray* _bookStorePathPatterns;
#endif
	NSArray* _hostWhiteList;
	NSArray* _musicStoreHostPatterns;
	NSArray* _musicStorePathPatterns;
}
+(void)invalidate;
+(UIITunesStoreURLResolver*)sharedResolver;
// inherited: -(instancetype)init;
// inherited: -(void)dealloc;
-(UIITunesStoreURLType)urlTypeForURL:(NSURL*)url;
-(id)_copyRegularExpressionsFromArray:(id)array;
-(BOOL)_string:(id)string matchesPatterns:(id)patterns;
-(BOOL)_url:(id)url matchesHostPatterns:(id)patterns pathPatterns:(id)patterns3;
@end

