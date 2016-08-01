/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:26 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSManagedObjectContext;

@interface _PFManagedObjectReferenceQueue : NSObject {

	int _cd_rc;
	int _spinLock;
	int _flags;
	int _signalRunloop;
	NSManagedObjectContext* _context;
	CFArrayRef _queue;
	CFRunLoopObserverRef _rlObserver;
	int _processing;

}
-(void)_processReferenceQueue:(BOOL)arg1 ;
-(BOOL)_queueForDealloc:(id)arg1 ;
-(BOOL)_GC_queueForDealloc:(id)arg1 ;
-(void)_unregisterRunloopObservers;
-(void)_contextDidDealloc;
-(id)initForContext:(id)arg1 ;
-(long long)_queueCount;
-(BOOL)_signal;
-(BOOL)_queueBatchForDealloc:(CFArrayRef)arg1 ;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(void)finalize;
@end
