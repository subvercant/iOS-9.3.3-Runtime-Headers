/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:54 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPNowPlayingObserver.h>

@class RURadioPlaybackCoordinator;

@interface RUNowPlayingObserver : MPNowPlayingObserver {

	RURadioPlaybackCoordinator* _playbackCoordinator;

}
-(void)dealloc;
-(void)_createNowPlayingInfoForItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_itemNotificationIsRelevantToObservedPlayer:(id)arg1 ;
-(void)_radioModelDidChangeNotification:(id)arg1 ;
-(id)initWithPlayer:(id)arg1 ;
-(void)_buyOffersDidChangeNotification:(id)arg1 ;
-(void)_isInWishListDidChangeNotification:(id)arg1 ;
-(id)initWithPlayer:(id)arg1 playbackCoordinator:(id)arg2 ;
@end
