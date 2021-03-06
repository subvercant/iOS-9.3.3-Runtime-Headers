/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:42 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDHealthEntity.h>

@interface HDServiceEntity : HDHealthEntity
+(id)columnsDefinition;
+(id)entityEncoderForHealthDaemon:(id)arg1 database:(id)arg2 purpose:(long long)arg3 authorizationFilter:(/*^block*/id)arg4 ;
+(id)databaseTable;
+(long long)protectionClass;
+(id)uniquedColumns;
+(id)tableAliases;
+(id)_servicePredicate:(id)arg1 ;
+(id)_servicesInDatabase:(id)arg1 daemon:(id)arg2 removals:(id*)arg3 ;
+(id)insertOrUpdateService:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(BOOL)deleteService:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(id)allServicesFromHealthDaemon:(id)arg1 error:(id*)arg2 ;
+(BOOL)healthUpdatesEnabledForDevice:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3 ;
+(BOOL)setHealthUpdatesEnabled:(BOOL)arg1 forDevice:(id)arg2 inDatabase:(id)arg3 error:(id*)arg4 ;
@end

