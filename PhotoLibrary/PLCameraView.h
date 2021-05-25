/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PhotoLibrary-Structs.h"
#import "PLVideoViewDelegate.h"
#import "PLCameraControllerDelegate.h"
#import <UIKit/UIView.h>

@class NSData, PLCameraElapsedTimeView, UIImage, PLVideoView, PLImageTile, UIToolbar, MLPhotoDCFFileGroup, NSString, PLCropOverlay, UIImageView, NSDictionary, PLCameraController, PLPreviewView;

@interface PLCameraView : UIView <PLCameraControllerDelegate, PLVideoViewDelegate> {
	UIToolbar* _cameraButtonBar;
	int _availablePictureCount;
	int _captureOrientation;
	int _photoSavingOptions;
	BOOL _manipulatingCrop;
	NSDictionary* _videoMetadata;
	MLPhotoDCFFileGroup* _videoFileGroup;
	PLCameraController* _cameraController;
	PLCameraElapsedTimeView* _timeView;
	PLPreviewView* _previewView;
	UIView* _animatedCaptureView;
	float _bounceAspectRatio;
	CGRect _bounceDestinationFrame;
	UIView* _irisView;
	UIView* _staticIrisView;
	UIImageView* _shadowView;
	UIImage* _previewWellImage;
	UIImage* _temporaryThumbnailImage;
	BOOL _irisIsClosed;
	SEL _openIrisAnimationFinishedSelector;
	SEL _closeIrisAnimationFinishedSelector;
	PLCropOverlay* _cropOverlay;
	PLImageTile* _imageTile;
	PLVideoView* _videoView;
	NSDictionary* _imagePickerOptions;
	id _delegate;
	int _enabledGestures;
	unsigned _showsCropOverlay : 1;
	unsigned _allowsEditing : 1;
	unsigned _changesStatusBar : 1;
	unsigned _cropOverlayUsesTelephonyUI : 1;
	unsigned _showsCropRegion : 1;
	unsigned _controlsAreVisible : 1;
	unsigned _allowsMultipleModes : 1;
	unsigned _capturePhotoWhenFocusFinished : 1;
	unsigned _dontAnimateVideoPreviewDown : 1;
	unsigned _processVideoAfterBounceAnimation : 1;
	unsigned _capturingPhoto : 1;
	NSString* _cropTitle;
	NSString* _cropButtonTitle;
	NSData* _lastCapturedImageData;
	unsigned _imagePickerWantsImageData : 1;
}
@property(readonly, assign, nonatomic) BOOL isCameraReady;
-(void)_playShutterSound;
-(void)_updateStatusBar;
-(void)setManipulatingCrop:(BOOL)crop;
// in a protocol: -(void)cameraControllerReadyStateChanged:(id)changed;
-(void)_checkDiskSpaceAfterCapture;
-(BOOL)_canEditVideo;
-(void)_previewVideoAtPath:(id)path;
-(void)_processCapturedVideo;
-(void)_videoCaptureCompleted:(id)completed;
// in a protocol: -(void)cameraController:(id)controller tookPicture:(id)picture withPreview:(id)preview jpegData:(CFDataRef)data imageProperties:(id)properties;
-(void)_preparePreviewWellImage:(CGImageRef)image isVideo:(BOOL)video;
-(void)setupAnimateCameraPreviewDown:(id)down;
-(void)setupAnimateVideoPreviewDown:(void*)down;
-(void)animateCameraPreviewDown;
-(void)_animateFinalBounce;
-(void)_bounceAnimationFinished;
-(void)animationDidStop:(id)animation finished:(BOOL)finished;
-(void)_setShadowViewVisible:(BOOL)visible;
// inherited: -(instancetype)initWithFrame:(CGRect)frame;
// inherited: -(void)dealloc;
-(void)setDelegate:(id)delegate;
-(void)setEnabledGestures:(int)gestures;
-(void)setPhotoSavingOptions:(int)options;
-(int)photoSavingOptions;
-(void)_updateImageEditability;
-(void)setImagePickerOptions:(id)options;
-(void)setAllowsImageEditing:(BOOL)editing;
-(void)setChangesStatusBar:(BOOL)bar;
-(void)setShowsCropOverlay:(BOOL)overlay;
-(void)setCropOverlayUsesTelephonyUI:(BOOL)ui;
-(void)setShowsCropRegion:(BOOL)region;
-(void)setCropTitle:(id)title buttonTitle:(id)title2;
-(void)setImagePickerWantsImageData:(BOOL)data;
-(void)setCameraButtonBar:(id)bar;
-(id)buttonBar;
-(id)_bottomBar;
-(id)_modeSwitch;
-(id)_shutterButton;
-(void)setCameraMode:(int)mode;
-(void)setAllowsMultipleCameraModes:(BOOL)modes;
-(id)imageTile;
-(void)_inCallStatusChanged:(id)callStatusChanged;
-(void)_applicationResumed;
-(void)takePictureOpenIrisAnimationFinished;
-(void)takePictureCloseIrisAnimationFinished;
-(int)_getCaptureOrientation;
-(void)_shutterButtonClicked;
// in a protocol: -(void)cameraControllerFocusFinished:(id)finished;
-(void)timeLapseTimerFired;
-(id)_newVideoFileGroup;
-(void)_deleteVideoFileGroup;
-(void)cameraShutterClicked:(id)clicked;
-(void)_performVideoCapture;
-(void)_videoSwitchValueDidChange:(id)_videoSwitchValue;
// in a protocol: -(void)cameraController:(id)controller modeDidChange:(int)mode;
// in a protocol: -(void)cameraControllerVideoCaptureDidStart:(id)cameraControllerVideoCapture;
// in a protocol: -(void)cameraControllerVideoCaptureDidStop:(id)cameraControllerVideoCapture;
-(void)_simpleRemoteActionDidOccur:(id)_simpleRemoteAction;
-(void)_updateModeSwitchVisibility;
-(id)_cropOverlay;
-(void)viewWillBeDisplayed;
-(void)startPreview;
-(void)viewDidAppear;
-(void)viewWillBeRemoved;
-(void)_removeVideoCaptureFileAtPath:(id)path;
-(void)cropOverlayWasCancelled:(id)cancelled;
-(void)cropOverlayWasOKed:(id)ked;
-(void)cropOverlayPlay:(id)play;
-(void)cropOverlayPause:(id)pause;
-(void)cropOverlay:(id)overlay didFinishSaving:(id)saving;
-(BOOL)imageViewIsDisplayingLandscape:(id)landscape;
-(void)willStartGesture:(int)gesture inView:(id)view forEvent:(GSEventRef)event;
-(void)tearDownIris;
-(void)primeStaticClosedIris;
-(void)showStaticClosedIris;
-(void)hideStaticClosedIris;
-(BOOL)irisIsClosed;
-(void)_closeIrisAnimationFinished;
-(void)closeIris:(BOOL)iris didFinishSelector:(SEL)selector;
-(void)_openIrisAnimationFinished;
-(void)openIrisWithDidFinishSelector:(SEL)openIrisWith;
-(void)openIrisAnimationFinished;
-(void)closeIrisAnimationFinished;
-(void)animateIrisForSuspension;
// in a protocol: -(BOOL)videoViewShouldDisplayScrubber:(id)videoView;
// in a protocol: -(BOOL)videoViewShouldDisplayOverlay:(id)videoView;
// in a protocol: -(float)videoViewScrubberYOrigin:(id)origin;
// in a protocol: -(BOOL)videoViewCanBeginPlayback:(id)playback;
// in a protocol: -(void)videoViewIsReadyToBeginPlayback:(id)beginPlayback;
// in a protocol: -(void)videoViewDidBeginPlayback:(id)videoView;
// in a protocol: -(void)videoViewDidPausePlayback:(id)videoView;
// in a protocol: -(void)videoViewDidEndPlayback:(id)videoView didFinish:(BOOL)finish;
-(void)setControlsAreVisible:(BOOL)visible;
-(BOOL)controlsAreVisible;
-(void)setPreviewViewTransform:(CGAffineTransform)transform;
-(id)overlayView;
-(void)setOverlayView:(id)view;
-(void)pressShutterButton;
-(id)_scriptingInfo;
@end

