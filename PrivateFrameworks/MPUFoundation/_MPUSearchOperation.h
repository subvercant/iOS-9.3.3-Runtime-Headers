/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:32 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class MPMediaQuery, MPUSearchDataSource, NSString;

@interface _MPUSearchOperation : NSOperation {

	long long _entityType;
	MPMediaQuery* _query;
	MPUSearchDataSource* _dataSource;
	NSString* _searchString;

}

@property (nonatomic,__weak,readonly) MPUSearchDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,copy,readonly) NSString * searchString;                         //@synthesize searchString=_searchString - In the implementation block
-(id)description;
-(MPUSearchDataSource *)dataSource;
-(NSString *)searchString;
-(void)main;
-(id)initWithSearchDataSource:(id)arg1 searchString:(id)arg2 ;
-(void)executeSearch;
@end

