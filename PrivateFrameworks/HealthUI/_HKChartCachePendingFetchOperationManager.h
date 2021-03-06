/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:13:06 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface _HKChartCachePendingFetchOperationManager : NSObject {

	NSMutableDictionary* _fetchOperationsByIdentifier;
	NSMutableDictionary* _fetchOperationsByUUID;
	NSMutableDictionary* _retryCountByIdentifier;

}
-(id)init;
-(void)addFetchOperation:(id)arg1 ;
-(void)removeFetchOperation:(id)arg1 ;
-(id)allPendingIdentifiers;
-(id)fetchOperationForIdentifier:(id)arg1 ;
-(void)incrementRetryCountForIdentifier:(id)arg1 ;
-(long long)retryCountForIdentifier:(id)arg1 ;
-(void)resetRetryCountForIdentifier:(id)arg1 ;
@end

