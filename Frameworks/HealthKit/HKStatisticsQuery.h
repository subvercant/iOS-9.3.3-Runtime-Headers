/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:43 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKQuery.h>

@interface HKStatisticsQuery : HKQuery {

	/*^block*/id _completionHandler;
	unsigned long long _options;
	unsigned long long _mergeStrategy;

}

@property (nonatomic,readonly) id completionHandler;                        //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                  //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) unsigned long long mergeStrategy;              //@synthesize mergeStrategy=_mergeStrategy - In the implementation block
+(Class)_queryServerDataObjectClass;
-(id)completionHandler;
-(unsigned long long)options;
-(void)_queue_cleanupAfterDeactivation;
-(void)_queue_configureQueryServerDataObject:(id)arg1 ;
-(void)_queue_validate;
-(/*^block*/id)_queue_errorHandler;
-(id)initWithQuantityType:(id)arg1 quantitySamplePredicate:(id)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(unsigned long long)mergeStrategy;
-(void)deliverStatistics:(id)arg1 forQuery:(id)arg2 ;
-(void)setMergeStrategy:(unsigned long long)arg1 ;
@end
