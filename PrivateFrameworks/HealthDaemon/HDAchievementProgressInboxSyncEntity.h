/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:43 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDKeyValueSyncEntity.h>

@interface HDAchievementProgressInboxSyncEntity : HDKeyValueSyncEntity
+(int)nanoSyncObjectType;
+(unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1 ;
+(long long)category;
+(long long)syncEntityType;
+(long long)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 healthDaemon:(id)arg3 error:(id*)arg4 ;
+(id)syncEntityDependencies;
+(id)_allowableCategories;
@end

