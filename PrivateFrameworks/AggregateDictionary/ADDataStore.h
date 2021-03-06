/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:25 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AggregateDictionary.framework/AggregateDictionary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AggregateDictionary/AggregateDictionary-Structs.h>
@class NSString;

@interface ADDataStore : NSObject {

	Database* _database;
	NSString* _path;

}

@property (nonatomic,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
-(BOOL)scalarsForKeyPrefix:(id)arg1 minDaysSince1970:(int)arg2 maxDaysSince1970:(int)arg3 withConsumer:(id)arg4 ;
-(BOOL)distributionsForKeyPrefix:(id)arg1 minDaysSince1970:(int)arg2 maxDaysSince1970:(int)arg3 withConsumer:(id)arg4 ;
-(void)dealloc;
-(NSString *)path;
-(id)initWithPath:(id)arg1 ;
-(id)initWithDefaultPath;
-(BOOL)scalarsForKeyPrefix:(id)arg1 minDaysSince1970:(int)arg2 maxDaysSince1970:(int)arg3 rowHandler:(/*^block*/id)arg4 ;
-(BOOL)distributionsForKeyPrefix:(id)arg1 minDaysSince1970:(int)arg2 maxDaysSince1970:(int)arg3 rowHandler:(/*^block*/id)arg4 ;
@end

