/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:24 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, BSDispatchSource, BSMachPortSendRight;

@interface BSPortDeathWatcher : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	BSDispatchSource* _source;
	BSMachPortSendRight* _sendRight;
	/*^block*/id _handler;

}

@property (nonatomic,copy,readonly) BSMachPortSendRight * sendRight;              //@synthesize sendRight=_sendRight - In the implementation block
-(id)initWithSendRight:(id)arg1 queue:(id)arg2 deathHandler:(/*^block*/id)arg3 ;
-(void)queue_handlePortDeathEvent;
-(id)initWithPort:(unsigned)arg1 queue:(id)arg2 deathHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)invalidate;
-(BSMachPortSendRight *)sendRight;
@end

