/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:22 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ContentIndex.framework/ContentIndex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
#import <ContentIndex/ContentIndex-Structs.h>
@class CXIndex, NSArray, NSObject;

@interface CXQuery : NSObject {

	BOOL _started;
	BOOL _complete;
	BOOL _canceled;
	BOOL _waiting;
	CXIndex* _index;
	SIQueryRef _siQuery;
	SIResultQueueRef _resultQueue;
	SIJobRefRef _job;
	SCD_Struct_CX9* _batch;
	long long _batchOffset;
	NSArray* _batchValues;
	NSObject*<OS_dispatch_semaphore> _semaphore;

}

@property (nonatomic,readonly) CXIndex * index;                                         //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) SIQueryRef siQuery;                                      //@synthesize siQuery=_siQuery - In the implementation block
@property (nonatomic,readonly) SIResultQueueRef resultQueue;                            //@synthesize resultQueue=_resultQueue - In the implementation block
@property (nonatomic,readonly) SIJobRefRef job;                                         //@synthesize job=_job - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CX9* batch;                                   //@synthesize batch=_batch - In the implementation block
@property (nonatomic,readonly) long long batchOffset;                                   //@synthesize batchOffset=_batchOffset - In the implementation block
@property (nonatomic,readonly) NSArray * batchValues;                                   //@synthesize batchValues=_batchValues - In the implementation block
@property (nonatomic,readonly) BOOL started;                                            //@synthesize started=_started - In the implementation block
@property (nonatomic,readonly) BOOL complete;                                           //@synthesize complete=_complete - In the implementation block
@property (nonatomic,readonly) BOOL canceled;                                           //@synthesize canceled=_canceled - In the implementation block
@property (nonatomic,readonly) BOOL waiting;                                            //@synthesize waiting=_waiting - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_semaphore> semaphore;              //@synthesize semaphore=_semaphore - In the implementation block
+(void)initialize;
-(void)cancel;
-(void)dealloc;
-(BOOL)start;
-(CXIndex *)index;
-(BOOL)complete;
-(void)processResults:(BOOL)arg1 ;
-(BOOL)canceled;
-(unsigned)getResults:(unsigned*)arg1 docNames:(id*)arg2 valueLists:(id*)arg3 maxCount:(unsigned)arg4 ;
-(id)initWithSting:(id)arg1 forIndex:(id)arg2 withOptions:(id)arg3 ;
-(BOOL)findDocuments:(unsigned*)arg1 docNames:(id*)arg2 valueLists:(id*)arg3 maxCount:(unsigned)arg4 timeOut:(double)arg5 foundCount:(unsigned*)arg6 ;
-(SIQueryRef)siQuery;
-(long long)batchOffset;
-(NSArray *)batchValues;
-(BOOL)waiting;
-(SCD_Struct_CX9*)batch;
-(NSObject*<OS_dispatch_semaphore>)semaphore;
-(SIResultQueueRef)resultQueue;
-(SIJobRefRef)job;
-(BOOL)started;
@end

