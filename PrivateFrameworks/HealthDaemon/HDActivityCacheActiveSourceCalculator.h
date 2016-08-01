/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:42 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HealthDaemon/HealthDaemon-Structs.h>
@interface HDActivityCacheActiveSourceCalculator : NSObject {

	vector<HDActivityCacheStatisticsBuilderSample, std::__1::allocator<HDActivityCacheStatisticsBuilderSample> >* _workouts;
	vector<HDActivityCacheActiveSource, std::__1::allocator<HDActivityCacheActiveSource> >* _activationLogEntries;

}
-(void)setWorkouts:(vector<HDActivityCacheStatisticsBuilderSample, std::__1::allocator<HDActivityCacheStatisticsBuilderSample> >*)arg1 ;
-(HDActivityCacheActiveSourceCalculatorSourceEvent)_baseSourceEvent;
-(void)setActivationLogEntries:(vector<HDActivityCacheActiveSource, std::__1::allocator<HDActivityCacheActiveSource> >*)arg1 ;
-(vector<HDActivityCacheActiveSource, std::__1::allocator<HDActivityCacheActiveSource> >*)createActiveSourceLog;
-(HDActivityCacheActiveSource*)_baseActiveSource;
@end
