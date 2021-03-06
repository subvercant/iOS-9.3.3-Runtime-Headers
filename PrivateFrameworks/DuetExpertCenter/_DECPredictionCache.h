/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:36 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSString, NSObject;

@interface _DECPredictionCache : NSObject {

	NSMutableDictionary* _cache;
	NSString* _restorationPath;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)inMemoryCache;
+(id)diskBackedCacheWithPath:(id)arg1 ;
-(id)init;
-(id)description;
-(void)_loadFromDisk;
-(id)initWithRestorationPath:(id)arg1 ;
-(BOOL)isDiskBacked;
-(void)_saveToDisk;
-(void)cachePredictions:(id)arg1 consumer:(unsigned long long)arg2 ;
-(void)clearCacheForCategory:(unsigned long long)arg1 consumer:(unsigned long long)arg2 ;
-(id)predictionsForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 ;
@end

