/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBIcon.h"
#import "SpringBoard-Structs.h"
#import "ISDownloadDelegate.h"
#import <Availability2.h>

@class NSString, ISDownload, ISDownloadStatus, SBDownloadingProgressBar;
@class SSDownload, SSDownloadStatus;

@interface SBDownloadingIcon : SBIcon
#if __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE_3_2
<ISDownloadDelegate> 
#endif
{
	NSString* _displayID;
	NSString* _bundleID;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
	ISDownload* _download;
#else
	SSDownload* _download;
#endif
	SBDownloadingProgressBar* _progressView;
	float _progress;
	BOOL _installing;
	BOOL _wasUninstalledByUser;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
	ISDownloadStatus* _lastStatus;
#else
	SSDownloadStatus* _lastStatus;
#endif
}
+(NSString *)displayIdentifierForDownloadUniqueID:(id)downloadUniqueID;
+(NSString *)displayIdentifierForDownload:(id)download;
-(instancetype)initWithDisplayIdentifier:(NSString *)displayIdentifier;
-(instancetype)initWithDownload:(id)download;
// inherited: -(void)dealloc;
// in a protocol: -(id)description;
-(void)setDisplayIdentifier:(NSString *)displayIdentifier;
// inherited: -(id)icon;
// inherited: -(id)modificationDate:(BOOL)date;
// inherited: -(void)setDisplayedIcon:(id)icon;
-(void)updateDisplayName;
// inherited: -(BOOL)shouldEllipsizeLabel;
// inherited: -(BOOL)shouldKernLabel;
// inherited: -(id)displayName;
// inherited: -(id)displayIdentifier;
// inherited: -(void)launch;
// inherited: -(BOOL)allowsCloseBox;
// inherited: -(void)closeBoxClicked:(id)clicked;
// inherited: -(void)completeUninstall;
// in a protocol: -(void)download:(id)download encounteredError:(id)error;
// in a protocol: -(void)download:(id)download loadedArtworkImage:(CGImageRef)image;
// in a protocol: -(void)downloadStatusChanged:(id)changed;
-(id)bundleID;
-(void)setBundleID:(id)anId;
-(void)setDownload:(id)download;
-(id)download;
-(void)retry;
-(void)remove;
// inherited: -(id)uninstallAlertTitle;
// inherited: -(id)uninstallAlertBody;
// inherited: -(id)uninstallAlertConfirmTitle;
// inherited: -(id)uninstallAlertCancelTitle;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
-(void)reloadForStatusChange;
#endif
#if __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE_3_2
-(void)_reloadIcon;
-(void)_thumbnailAvailableNotification:(id)notification;
#endif
-(void)_showAlertForError:(id)error;
@end

