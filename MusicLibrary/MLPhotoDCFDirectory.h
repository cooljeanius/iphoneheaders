/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MLPhotoDCFObject.h"
#import "MusicLibrary-Structs.h"

@class MLPhotoDCIMDirectory;

@interface MLPhotoDCFDirectory : MLPhotoDCFObject {
@private
	MLPhotoDCIMDirectory* _dcimDirectory;
	CFDictionaryRef _fileGroupsByNumber;
	int _maxFileGroupNumber;
	int _lastUsedFileGroupNumber;
}
+(void)initializeFileGroupPrefixAndExtensions;
+(id)fileGroupRequiredEmptyPrefixes;
+(id)fileGroupRequiredEmptyExtensions;
-(id)_lastUsedFileGroupUserInfoKey;
-(instancetype)initWithName:(id)name number:(int)number dcimDirectory:(id)directory;
-(void)dealloc;
-(id)dcimDirectory;
-(unsigned)_calculateBaseDirectoryValue;
-(BOOL)canAddFileGroupWithGroupNumber:(int)groupNumber;
-(BOOL)_canAddItemWithPrefix:(id)prefix minimumFileGroupNumber:(int)number;
-(BOOL)_canAddItemWithPrefix:(id)prefix;
-(BOOL)canAddImage;
-(BOOL)canAddVideo;
-(id)fullPath;
-(void)ensureDirectoryExists;
-(BOOL)isEntensionValid:(id)valid;
-(id)fileGroups;
-(id)_nextAvailableFileGroupWithPrefix:(id)prefix extension:(id)extension;
-(id)nextAvailableFileGroup;
-(id)nextAvailableVideoFileGroupWithExtension:(id)extension;
-(void)removeFileGroup:(id)group;
-(void)setWriteIsPending:(BOOL)pending;
@end

