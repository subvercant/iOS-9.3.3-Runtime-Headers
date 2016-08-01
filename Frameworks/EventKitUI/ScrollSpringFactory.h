/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:15 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/SpringFactory.h>

@interface ScrollSpringFactory : SpringFactory {

	double _initialVelocity;

}

@property (assign,nonatomic) double initialVelocity;              //@synthesize initialVelocity=_initialVelocity - In the implementation block
+(id)sharedFactory;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(void)setInitialVelocity:(double)arg1 ;
-(double)initialVelocity;
@end
