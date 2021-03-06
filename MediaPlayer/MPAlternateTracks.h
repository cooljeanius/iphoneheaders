/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSDictionary, MPItem, NSMutableDictionary;

@interface MPAlternateTracks : NSObject {
	MPItem* _item;
	NSDictionary* _alternateTracks;
	NSMutableDictionary* _trackChangeDictionary;
}
@property(readonly, assign, nonatomic, getter=isLoaded) BOOL loaded;
-(instancetype)initWithItem:(id)item;
-(void)dealloc;
-(void)beginTrackChanges;
-(void)commitTrackChanges;
-(id)currentTrackForType:(unsigned)type;
-(unsigned)indexOfCurrentTrackForType:(unsigned)type;
-(void)setTrack:(id)track forType:(unsigned)type;
-(id)tracksForType:(unsigned)type;
-(BOOL)hasTracksForTypes:(unsigned)types;
-(void)reloadData;
-(id)_keyForTrackType:(unsigned)trackType;
@end

