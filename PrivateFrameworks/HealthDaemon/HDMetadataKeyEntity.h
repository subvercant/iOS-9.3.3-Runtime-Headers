/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:41 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDHealthEntity.h>

@interface HDMetadataKeyEntity : HDHealthEntity
+(id)columnsDefinition;
+(id)databaseTable;
+(long long)protectionClass;
+(id)_entityForKey:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
+(id)_insertEntityWithKey:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
+(id)entityForKey:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(id)insertEntityWithKey:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(id)resultForKeyID:(id)arg1 healthDatabase:(id)arg2 ;
+(id)_keyForPersistentID:(id)arg1 database:(id)arg2 ;
-(id)resultWithDatabase:(id)arg1 ;
@end

