/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:54 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CLSilo.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface CLDispatchSilo : CLSilo {

	NSObject*<OS_dispatch_queue> _queue;

}
-(id)debugDescription;
-(id)initWithIdentifier:(id)arg1 ;
-(id)queue;
-(void)assertInside;
-(void)assertOutside;
-(id)newTimer;
-(void)afterInterval:(double)arg1 async:(/*^block*/id)arg2 ;
-(id)initWithUnderlyingQueue:(id)arg1 ;
-(id)initMain;
-(void)sync:(/*^block*/id)arg1 ;
-(void)async:(/*^block*/id)arg1 ;
@end
