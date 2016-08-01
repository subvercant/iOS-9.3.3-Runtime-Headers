/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:35 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/APSConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, APSConnection, NSObject, NSMutableDictionary, NSMapTable, NSMutableSet;

@interface CKDPushConnection : NSObject <APSConnectionDelegate> {

	BOOL _darkWakeEnabled;
	NSString* _apsEnvironmentString;
	APSConnection* _apsConnection;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _tokensCache;
	NSMapTable* _callbacks;
	NSMutableSet* _enabledTopics;
	NSMutableDictionary* _topicsToWaitingAppContainerTuples;
	NSMutableSet* _topicsAwaitingPublicToken;
	NSMutableSet* _topicsAwaitingPrivateToken;

}

@property (nonatomic,retain) NSString * apsEnvironmentString;                                      //@synthesize apsEnvironmentString=_apsEnvironmentString - In the implementation block
@property (nonatomic,retain) APSConnection * apsConnection;                                        //@synthesize apsConnection=_apsConnection - In the implementation block
@property (assign,nonatomic) BOOL darkWakeEnabled;                                                 //@synthesize darkWakeEnabled=_darkWakeEnabled - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                   //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * tokensCache;                                    //@synthesize tokensCache=_tokensCache - In the implementation block
@property (nonatomic,retain) NSMapTable * callbacks;                                               //@synthesize callbacks=_callbacks - In the implementation block
@property (nonatomic,retain) NSMutableSet * enabledTopics;                                         //@synthesize enabledTopics=_enabledTopics - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * topicsToWaitingAppContainerTuples;              //@synthesize topicsToWaitingAppContainerTuples=_topicsToWaitingAppContainerTuples - In the implementation block
@property (nonatomic,retain) NSMutableSet * topicsAwaitingPublicToken;                             //@synthesize topicsAwaitingPublicToken=_topicsAwaitingPublicToken - In the implementation block
@property (nonatomic,retain) NSMutableSet * topicsAwaitingPrivateToken;                            //@synthesize topicsAwaitingPrivateToken=_topicsAwaitingPrivateToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedConnectionForAPSEnvironmentString:(id)arg1 darkWakeEnabled:(BOOL)arg2 ;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSMapTable *)callbacks;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setAPSEnvironmentString:(id)arg1 ;
-(void)setDarkWakeEnabled:(BOOL)arg1 ;
-(BOOL)darkWakeEnabled;
-(NSString *)apsEnvironmentString;
-(id)initWithEnvironment:(id)arg1 darkWakeEnabled:(BOOL)arg2 ;
-(NSMutableDictionary *)topicsToWaitingAppContainerTuples;
-(void)_addWaitingAppContainerTuple:(id)arg1 forTopic:(id)arg2 ;
-(APSConnection *)apsConnection;
-(NSMutableSet *)enabledTopics;
-(NSMutableDictionary *)tokensCache;
-(void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4 ;
-(NSMutableSet *)topicsAwaitingPrivateToken;
-(NSMutableSet *)topicsAwaitingPublicToken;
-(id)_waitingAppContainerTuplesForTopic:(id)arg1 ;
-(void)_removeWaitingAppContainerTuplesForTopic:(id)arg1 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didChangeConnectedStatus:(BOOL)arg2 ;
-(void)connectionDidReconnect:(id)arg1 ;
-(void)requestTokenForAppContainerTuple:(id)arg1 useAPSPublicToken:(BOOL)arg2 ;
-(void)revokeTokenForAppContainerTuple:(id)arg1 ;
-(void)setApsConnection:(APSConnection *)arg1 ;
-(void)setTokensCache:(NSMutableDictionary *)arg1 ;
-(void)setCallbacks:(NSMapTable *)arg1 ;
-(void)setEnabledTopics:(NSMutableSet *)arg1 ;
-(void)setTopicsToWaitingAppContainerTuples:(NSMutableDictionary *)arg1 ;
-(void)setTopicsAwaitingPublicToken:(NSMutableSet *)arg1 ;
-(void)setTopicsAwaitingPrivateToken:(NSMutableSet *)arg1 ;
@end
