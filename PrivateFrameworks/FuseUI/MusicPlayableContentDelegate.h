/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:00 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPPlayableContentDelegate.h>

@class MusicAVPlayer, NSString;

@interface MusicPlayableContentDelegate : NSObject <MPPlayableContentDelegate> {

	MusicAVPlayer* _player;

}

@property (nonatomic,readonly) MusicAVPlayer * player;              //@synthesize player=_player - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MusicAVPlayer *)player;
-(id)initWithPlayer:(id)arg1 ;
-(void)playableContentManager:(id)arg1 initializePlaybackQueueWithCompletionHandler:(/*^block*/id)arg2 ;
@end
