/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:41 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface DADataHandler : NSObject {

	void* _container;
	NSString* _changeTrackingID;

}

@property (assign,nonatomic) void* container;                        //@synthesize container=_container - In the implementation block
@property (nonatomic,copy) NSString * changeTrackingID;              //@synthesize changeTrackingID=_changeTrackingID - In the implementation block
+(id)newDataHandlerForDataclass:(long long)arg1 container:(void*)arg2 changeTrackingID:(id)arg3 ;
-(void)dealloc;
-(void*)container;
-(void)setContainer:(void*)arg1 ;
-(id)initWithContainer:(void*)arg1 changeTrackingID:(id)arg2 ;
-(int)getIdFromLocalObject:(void*)arg1 ;
-(void*)copyLocalObjectFromId:(int)arg1 ;
-(BOOL)saveContainer;
-(id)copyOfAllLocalObjectsInContainer;
-(void)drainContainer;
-(BOOL)wipeServerIds;
-(void)drainSuperfluousChanges;
-(void)openDB;
-(BOOL)closeDBAndSave:(BOOL)arg1 ;
-(id)getDAObjectWithLocalItem:(void*)arg1 serverId:(id)arg2 account:(id)arg3 ;
-(id)getDAExceptionObjectWithLocalItem:(void*)arg1 originalEvent:(id)arg2 account:(id)arg3 ;
-(void)setChangeTrackingID:(NSString *)arg1 ;
-(long long)dataclass;
-(NSString *)changeTrackingID;
@end
