/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:44 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAVItem.h>

@class NSString;

@interface MPPlaceholderAVItem : MPAVItem {

	NSString* _album;
	NSString* _artist;
	double _durationFromExternalMetadata;
	BOOL _explicitTrack;
	BOOL _likeStateEnabled;
	NSString* _mainTitle;
	BOOL _supportsLikedState;

}

@property (nonatomic,retain) NSString * album;                                               //@synthesize album=_album - In the implementation block
@property (nonatomic,retain) NSString * artist;                                              //@synthesize artist=_artist - In the implementation block
@property (assign,nonatomic) double durationFromExternalMetadata;                            //@synthesize durationFromExternalMetadata=_durationFromExternalMetadata - In the implementation block
@property (assign,getter=isExplicitTrack,nonatomic) BOOL explicitTrack;                      //@synthesize explicitTrack=_explicitTrack - In the implementation block
@property (assign,getter=isLikedStateEnabled,nonatomic) BOOL likedStateEnabled;              //@synthesize likeStateEnabled=_likeStateEnabled - In the implementation block
@property (nonatomic,retain) NSString * mainTitle;                                           //@synthesize mainTitle=_mainTitle - In the implementation block
@property (assign,nonatomic) BOOL supportsLikedState;                                        //@synthesize supportsLikedState=_supportsLikedState - In the implementation block
-(void)loadAssetAndPlayerItem;
-(double)durationFromExternalMetadata;
-(BOOL)supportsSkip;
-(void)setDurationFromExternalMetadata:(double)arg1 ;
-(void)setExplicitTrack:(BOOL)arg1 ;
-(NSString *)album;
-(void)setAlbum:(NSString *)arg1 ;
-(void)setArtist:(NSString *)arg1 ;
-(void)setMainTitle:(NSString *)arg1 ;
-(NSString *)mainTitle;
-(NSString *)artist;
-(BOOL)supportsSettingCurrentTime;
-(BOOL)supportsLikedState;
-(BOOL)isLikedStateEnabled;
-(BOOL)isExplicitTrack;
-(BOOL)isValidPlayerSubstituteForItem:(id)arg1 ;
-(void)setSupportsLikedState:(BOOL)arg1 ;
-(void)setLikedStateEnabled:(BOOL)arg1 ;
@end

