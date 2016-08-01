/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:00 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue, OS_dispatch_semaphore;
#import <IMFoundation/IMFoundation-Structs.h>
@class IMMessageContext, NSRecursiveLock, NSObject, NSString, NSProtocolChecker, NSMutableArray, NSLock;

@interface IMLocalObjectInternal : NSObject {

	IMMessageContext* _currentMessageContext;
	NSRecursiveLock* _lock;
	id _target;
	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_semaphore> _deathLock;
	NSString* _portName;
	NSString* _processName;
	NSProtocolChecker* _protocolChecker;
	NSMutableArray* _componentQueue;
	NSLock* _componentQueueLock;
	NSRecursiveLock* _componentQueueProcessingLock;
	CFRunLoopSourceRef _runloopSource;
	BOOL _pendingComponentQueueProcessing;
	BOOL _busyForwarding;
	BOOL _offMainThread;

}
-(void)dealloc;
@end
