/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:11 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibrary/PhotoLibrary-Structs.h>
@class UIScrollView, NSTimer;

@interface PLAutoScroller : NSObject {

	UIScrollView* _targetScrollView;
	CGPoint _targetPoint;
	double _thresholdDistance;
	NSTimer* _autoscrollTimer;

}

@property (assign,nonatomic) CGPoint targetPoint;              //@synthesize targetPoint=_targetPoint - In the implementation block
@property (readonly) double thresholdDistance;                 //@synthesize thresholdDistance=_thresholdDistance - In the implementation block
-(void)dealloc;
-(id)init;
-(void)_stopAutoscrollTimer;
-(CGPoint)targetPoint;
-(void)setTargetPoint:(CGPoint)arg1 ;
-(void)_updateAutoscrollTimer:(id)arg1 ;
-(id)initWithTargetScrollView:(id)arg1 thresholdDistance:(double)arg2 ;
-(double)thresholdDistance;
-(void)stopAndInvalidate;
@end

