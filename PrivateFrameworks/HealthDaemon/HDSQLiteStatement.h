/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:43 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HDSQLiteDatabase, NSString;

@interface HDSQLiteStatement : NSObject {

	HDSQLiteDatabase* _database;
	NSString* _sql;
	BOOL _cache;

}

@property (nonatomic,readonly) HDSQLiteDatabase * database;              //@synthesize database=_database - In the implementation block
-(id)description;
-(void)finish;
-(HDSQLiteDatabase *)database;
-(id)initWithSQL:(id)arg1 database:(id)arg2 ;
-(BOOL)performStatementWithError:(id*)arg1 bindingHandler:(/*^block*/id)arg2 ;
-(BOOL)enumerateStatementWithError:(id*)arg1 bindingHandler:(/*^block*/id)arg2 block:(/*^block*/id)arg3 ;
@end

