/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:37 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class CKDClientContext, NSObject, NSOperationQueue, NSMutableArray;

@interface CKDPCSFetchAggregator : NSObject {

	CKDClientContext* _context;
	NSObject*<OS_dispatch_queue> _opQueue;
	NSOperationQueue* _queue;
	NSMutableArray* _queuedFetches;
	NSMutableArray* _runningFetches;
	NSObject*<OS_dispatch_source> _timerSource;

}

@property (assign,nonatomic,__weak) CKDClientContext * context;                      //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> opQueue;                   //@synthesize opQueue=_opQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * queue;                               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableArray * queuedFetches;                         //@synthesize queuedFetches=_queuedFetches - In the implementation block
@property (nonatomic,retain) NSMutableArray * runningFetches;                        //@synthesize runningFetches=_runningFetches - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timerSource;              //@synthesize timerSource=_timerSource - In the implementation block
-(void)dealloc;
-(id)init;
-(CKDClientContext *)context;
-(id)initWithContext:(id)arg1 ;
-(void)setContext:(CKDClientContext *)arg1 ;
-(NSOperationQueue *)queue;
-(void)setQueue:(NSOperationQueue *)arg1 ;
-(void)requestFetchOfRecordWithID:(id)arg1 forOperation:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)requestFetchOfShareWithID:(id)arg1 forOperation:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_lockedRescheduleQueuedFetchesTimer;
-(NSObject*<OS_dispatch_queue>)opQueue;
-(void)setOpQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_lockedFireReadyQueuedFetches;
-(NSMutableArray *)runningFetches;
-(NSMutableArray *)queuedFetches;
-(id)_lockedGetQueuedFetchForOperation:(id)arg1 ofClass:(Class)arg2 ;
-(void)setQueuedFetches:(NSMutableArray *)arg1 ;
-(void)setRunningFetches:(NSMutableArray *)arg1 ;
-(NSObject*<OS_dispatch_source>)timerSource;
-(void)setTimerSource:(NSObject*<OS_dispatch_source>)arg1 ;
@end

