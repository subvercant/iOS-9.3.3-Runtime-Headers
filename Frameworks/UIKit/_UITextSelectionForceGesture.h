/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:39 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UILongPressGestureRecognizer.h>

@class UIKBPanGestureVelocitySample;

@interface _UITextSelectionForceGesture : UILongPressGestureRecognizer {

	BOOL _shouldFailWithoutForce;
	BOOL _didLongPress;
	BOOL _touchEclipsesVelocity;
	UIKBPanGestureVelocitySample* _velocitySample;
	UIKBPanGestureVelocitySample* _previousVelocitySample;
	UIKBPanGestureVelocitySample* _liftOffSample;
	double _increasingForceTimestamp;
	double _lastTouchTime;
	long long _liftOffState;
	long long _increasingForceState;
	CGPoint _lastSceneReferenceLocation;
	CGPoint _lastUnadjustedSceneReferenceLocation;
	CGRect _velocityRange;

}

@property (assign,nonatomic) BOOL shouldFailWithoutForce;                                                                //@synthesize shouldFailWithoutForce=_shouldFailWithoutForce - In the implementation block
@property (assign,nonatomic) BOOL didLongPress;                                                                          //@synthesize didLongPress=_didLongPress - In the implementation block
@property (assign,nonatomic) BOOL touchEclipsesVelocity;                                                                 //@synthesize touchEclipsesVelocity=_touchEclipsesVelocity - In the implementation block
@property (getter=_velocitySample,readonly) UIKBPanGestureVelocitySample * _velocitySample;                              //@synthesize velocitySample=_velocitySample - In the implementation block
@property (getter=_previousVelocitySample,readonly) UIKBPanGestureVelocitySample * _previousVelocitySample;              //@synthesize previousVelocitySample=_previousVelocitySample - In the implementation block
@property (getter=_liftOffSample,readonly) UIKBPanGestureVelocitySample * _liftOffSample;                                //@synthesize liftOffSample=_liftOffSample - In the implementation block
@property (assign,nonatomic) double increasingForceTimestamp;                                                            //@synthesize increasingForceTimestamp=_increasingForceTimestamp - In the implementation block
@property (assign,nonatomic) double lastTouchTime;                                                                       //@synthesize lastTouchTime=_lastTouchTime - In the implementation block
@property (assign,nonatomic) CGPoint lastSceneReferenceLocation;                                                         //@synthesize lastSceneReferenceLocation=_lastSceneReferenceLocation - In the implementation block
@property (assign,nonatomic) CGPoint lastUnadjustedSceneReferenceLocation;                                               //@synthesize lastUnadjustedSceneReferenceLocation=_lastUnadjustedSceneReferenceLocation - In the implementation block
@property (assign,nonatomic) long long liftOffState;                                                                     //@synthesize liftOffState=_liftOffState - In the implementation block
@property (assign,nonatomic) long long increasingForceState;                                                             //@synthesize increasingForceState=_increasingForceState - In the implementation block
@property (assign,nonatomic) CGRect velocityRange;                                                                       //@synthesize velocityRange=_velocityRange - In the implementation block
-(void)dealloc;
-(CGPoint)velocityInView:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(BOOL)_shouldDelayUntilForceLevelRequirementIsMet;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(BOOL)shouldFailWithoutForce;
-(void)setDidLongPress:(BOOL)arg1 ;
-(void)enoughTimeElapsed:(id)arg1 ;
-(UIKBPanGestureVelocitySample *)_velocitySample;
-(UIKBPanGestureVelocitySample *)_previousVelocitySample;
-(UIKBPanGestureVelocitySample *)_liftOffSample;
-(void)setTouchEclipsesVelocity:(BOOL)arg1 ;
-(void)setVelocityRange:(CGRect)arg1 ;
-(void)setLiftOffState:(long long)arg1 ;
-(void)setIncreasingForceState:(long long)arg1 ;
-(void)setIncreasingForceTimestamp:(double)arg1 ;
-(void)_resetVelocitySamples;
-(CGPoint)_convertPoint:(CGPoint)arg1 fromSceneReferenceCoordinatesToView:(id)arg2 ;
-(CGPoint)_convertVelocitySample:(id)arg1 fromSceneReferenceCoordinatesToView:(id)arg2 ;
-(UIOffset)_offsetInViewFromSceneReferenceLocation:(CGPoint)arg1 toSceneReferenceLocation:(CGPoint)arg2 ;
-(CGPoint)_convertPoint:(CGPoint)arg1 toSceneReferenceCoordinatesFromView:(id)arg2 ;
-(CGPoint)_shiftPanLocationToNewSceneReferenceLocation:(CGPoint)arg1 ;
-(CGPoint)_adjustSceneReferenceLocation:(CGPoint)arg1 ;
-(CGPoint)_locationOfTouches:(id)arg1 ;
-(void)_centroidMovedTo:(CGPoint)arg1 atTime:(double)arg2 physicalTouch:(id)arg3 ;
-(BOOL)shouldResetRangeForVelocity:(CGPoint)arg1 previousVelocity:(CGPoint)arg2 ;
-(CGRect)velocityRange;
-(long long)increasingForceState;
-(long long)liftOffState;
-(CGPoint)_centroidInView:(id)arg1 ;
-(double)increasingForceTimestamp;
-(void)_updateLiftOffState;
-(BOOL)forceHasIncreasedForTimeInterval:(double)arg1 ;
-(void)setShouldFailWithoutForce:(BOOL)arg1 ;
-(BOOL)didLongPress;
-(BOOL)touchEclipsesVelocity;
-(double)lastTouchTime;
-(void)setLastTouchTime:(double)arg1 ;
-(CGPoint)lastSceneReferenceLocation;
-(void)setLastSceneReferenceLocation:(CGPoint)arg1 ;
-(CGPoint)lastUnadjustedSceneReferenceLocation;
-(void)setLastUnadjustedSceneReferenceLocation:(CGPoint)arg1 ;
@end

