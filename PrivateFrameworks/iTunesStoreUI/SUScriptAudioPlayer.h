/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:14 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SUPlayerStatus, NSURL, NSString;

@interface SUScriptAudioPlayer : SUScriptObject {

	SUPlayerStatus* _playerStatus;
	NSURL* _url;
	NSURL* _keyUrl;
	NSURL* _certificateUrl;

}

@property (readonly) double currentTime; 
@property (readonly) double duration; 
@property (readonly) long long state; 
@property (readonly) NSString * URL; 
@property (readonly) NSString * keyURL; 
@property (readonly) NSString * certificateURL; 
@property (readonly) NSString * nowPlayingKeyAlbumTitle; 
@property (readonly) NSString * nowPlayingKeyAlbumTrackCount; 
@property (readonly) NSString * nowPlayingKeyAlbumTrackNumber; 
@property (readonly) NSString * nowPlayingKeyArtist; 
@property (readonly) NSString * nowPlayingKeyArtwork; 
@property (readonly) NSString * nowPlayingKeyComposer; 
@property (readonly) NSString * nowPlayingKeyDiscCount; 
@property (readonly) NSString * nowPlayingKeyDiscNumber; 
@property (readonly) NSString * nowPlayingKeyGenre; 
@property (readonly) NSString * nowPlayingKeyPersistentID; 
@property (readonly) NSString * nowPlayingKeyPlaybackDuration; 
@property (readonly) NSString * nowPlayingKeyTitle; 
@property (readonly) long long playerStateActive; 
@property (readonly) long long playerStateBuffering; 
@property (readonly) long long playerStateFailed; 
@property (readonly) long long playerStateFinished; 
@property (readonly) long long playerStatePaused; 
@property (readonly) long long playerStateUnplayed; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
-(void)dealloc;
-(long long)state;
-(double)duration;
-(void)stop;
-(NSString *)URL;
-(void)pause;
-(id)attributeKeys;
-(NSString *)certificateURL;
-(NSString *)keyURL;
-(void)setValue:(id)arg1 forNowPlayingKey:(id)arg2 ;
-(void)_audioPlayerStateChangeNotification:(id)arg1 ;
-(id)initWithURL:(id)arg1 keyURL:(id)arg2 certificateURL:(id)arg3 ;
-(NSString *)nowPlayingKeyAlbumTitle;
-(NSString *)nowPlayingKeyAlbumTrackCount;
-(NSString *)nowPlayingKeyAlbumTrackNumber;
-(NSString *)nowPlayingKeyArtist;
-(NSString *)nowPlayingKeyArtwork;
-(NSString *)nowPlayingKeyComposer;
-(NSString *)nowPlayingKeyDiscCount;
-(NSString *)nowPlayingKeyDiscNumber;
-(NSString *)nowPlayingKeyGenre;
-(NSString *)nowPlayingKeyPersistentID;
-(NSString *)nowPlayingKeyPlaybackDuration;
-(NSString *)nowPlayingKeyTitle;
-(long long)playerStateActive;
-(long long)playerStateBuffering;
-(long long)playerStateFailed;
-(long long)playerStateFinished;
-(long long)playerStatePaused;
-(long long)playerStateUnplayed;
-(id)scriptAttributeKeys;
-(id)_className;
-(double)currentTime;
-(void)play;
@end

