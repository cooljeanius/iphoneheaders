/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBPlatformController.h"
#import "SpringBoard-Structs.h"
#import <Foundation/NSObject.h>
#import <Availability2.h>

@class NSMutableDictionary, NSString;

@interface SBPlatformController : NSObject {
	NSString* _currentConfigurationName;
	NSMutableDictionary* _currentConfiguration;
	NSMutableDictionary* _currentCapabilities;
}
+(SBPlatformController *)sharedInstance;
// inherited: -(instancetype)init;
// inherited: -(void)dealloc;
-(NSString *)systemBuildVersion;
-(id)infoForCapability:(NSString *)capability;
-(void)setInfo:(id)info forCapability:(NSString *)capability;
-(void)addCapabilities:(NSArray *)capabilitiesToAdd removeCapabilities:(NSArray *)capabilitiesToRemove;
-(BOOL)hasCapability:(NSString *)capability;
-(NSArray *)enabledCapabilities;
-(BOOL)hasRestriction:(NSString *)restriction;
-(BOOL)canTakePhoto;
-(NSString *)platformName;
-(id)iconState;
-(BOOL)matchesPlatforms:(NSArray *)platforms;
-(NSString *)localizedPlatformName;
-(BOOL)isInternalInstall;
-(void)noteITunesStoreCapabilityChanged;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
-(void)_addIconListIdentifiers:(id)identifiers toSet:(id)set;
-(NSArray *)defaultDisplayIdentifiers;
-(BOOL)isCarrierInstall;
#endif
@end

@interface SBPlatformController (Private)	// the actual category name is (private), but C++ rejects this.
-(NSString *)currentConfigurationName;
-(void)postCurrentConfiguration;
-(void)_mergeDictionary:(id)dictionary intoDictionary:(id)dictionary2;
-(void)_addConfigurationNamed:(id)named toCompositeDictionary:(id)compositeDictionary;
-(BOOL)allowSensitiveUI:(BOOL)ui hasInternalBundle:(BOOL)bundle;
-(BOOL)isCarrierInstall:(BOOL)install hasInternalBundle:(BOOL)bundle;
-(id)_macAddress;
-(BOOL)allowYouTube;
-(BOOL)allowYouTubePlugin;
-(BOOL)allowWiFi;
-(void)discoverCurrentConfiguration;
-(CFBooleanRef)currentITunesStoreCapability;
-(void)noteConfigurationChanged:(id)changed;
@end

