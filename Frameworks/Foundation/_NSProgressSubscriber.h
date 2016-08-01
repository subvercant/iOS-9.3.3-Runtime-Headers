/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:23 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSProgressSubscriber.h>

@class NSString, NSMutableDictionary, NSXPCConnection, NSLock;

@interface _NSProgressSubscriber : NSObject <NSProgressSubscriber> {

	/*^block*/id _publishingHandler;
	NSString* _subscriberID;
	NSMutableDictionary* _proxiesByPublisherID;
	NSXPCConnection* _connection;
	NSLock* _lock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(oneway void)observePublisherForID:(id)arg1 value:(id)arg2 forKey:(id)arg3 inUserInfo:(BOOL)arg4 ;
-(oneway void)removePublisherForID:(id)arg1 ;
-(id)initWithPublishingHandler:(/*^block*/id)arg1 ;
-(void)startForFileURL:(id)arg1 ;
-(void)startForCategory:(id)arg1 ;
-(oneway void)addPublisher:(id)arg1 forID:(id)arg2 withValues:(id)arg3 isOld:(BOOL)arg4 ;
-(void)dealloc;
-(void)stop;
@end
