/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:59 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPMusicPlayerControllerServerDelegate <NSObject>
@required
-(void)musicPlayerServer:(id)arg1 registerForRepeatModeChangesWithChangeHandler:(/*^block*/id)arg2;
-(void)musicPlayerServer:(id)arg1 registerForShuffleModeChangesWithChangeHandler:(/*^block*/id)arg2;
-(id)playerForMusicPlayerServer:(id)arg1 usingApplicationSpecificQueue:(BOOL)arg2;
-(long long)playbackSpeedForMusicPlayerServer:(id)arg1;
-(void)musicPlayerServer:(id)arg1 setPlaybackSpeed:(long long)arg2;
-(id)nowPlayingItemForMusicPlayerServer:(id)arg1;
-(void)musicPlayerServer:(id)arg1 setNowPlayingItem:(id)arg2;
-(unsigned long long)indexOfNowPlayingItemForMusicPlayerServer:(id)arg1;
-(unsigned long long)unshuffledIndexOfNowPlayingItemForMusicPlayerServer:(id)arg1;
-(BOOL)isNowPlayingItemFromGeniusMixForMusicPlayerServer:(id)arg1;
-(id)currentMediaQueryForMusicPlayerServer:(id)arg1;
-(id)currentRadioStationForMusicPlayerServer:(id)arg1;
-(void)musicPlayerServer:(id)arg1 setFirstItem:(id)arg2;
-(void)musicPlayerServer:(id)arg1 setShuffleMode:(long long)arg2;
-(void)musicPlayerServer:(id)arg1 prepareQueueWithQuery:(id)arg2;
-(void)musicPlayerServer:(id)arg1 prepareQueueWithGeniusMixPlaylist:(id)arg2;
-(void)musicPlayerServer:(id)arg1 prepareQueueWithRadioStation:(id)arg2;
-(void)musicPlayerServer:(id)arg1 prepareQueueWithStoreIDs:(id)arg2;
-(BOOL)userQueueModificationsDisabledForMusicPlayerServer:(id)arg1;
-(void)musicPlayerServer:(id)arg1 setUserQueueModificationsDisabled:(BOOL)arg2;

@end

