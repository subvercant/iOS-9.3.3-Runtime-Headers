/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:02 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GKStrategist <NSObject>
@property (nonatomic,retain) id<GKGameModel> gameModel; 
@property (nonatomic,retain) id<GKRandom> randomSource; 
@required
-(id<GKGameModel>)gameModel;
-(id)bestMoveForActivePlayer;
-(void)setGameModel:(id)arg1;
-(id<GKRandom>)randomSource;
-(void)setRandomSource:(id)arg1;

@end

