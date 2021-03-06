/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:27 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <CalendarDaemon/CADOperationGroup.h>
#import <libobjc.A.dylib/CADSourceInterface.h>

@interface CADSourceOperationGroup : CADOperationGroup <CADSourceInterface>
+(BOOL)requiresEventAccess;
+(BOOL)requiresReminderAccess;
+(BOOL)requiresEventOrReminderAccess;
-(void)CADDatabaseGetSources:(/*^block*/id)arg1 ;
-(void)CADSourceGetConstraints:(SCD_Struct_CA1)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADSourceRefresh:(SCD_Struct_CA1)arg1 isUserRequested:(BOOL)arg2 reply:(/*^block*/id)arg3 ;
@end

