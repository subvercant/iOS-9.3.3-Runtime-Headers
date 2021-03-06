/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:55 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSNumber;

@interface HMMsgHandler : NSObject {

	NSObject*<OS_dispatch_queue> _receiverQueue;
	/*^block*/id _messageHandler;
	NSNumber* _token;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> receiverQueue;              //@synthesize receiverQueue=_receiverQueue - In the implementation block
@property (nonatomic,copy) id messageHandler;                                         //@synthesize messageHandler=_messageHandler - In the implementation block
@property (nonatomic,retain) NSNumber * token;                                        //@synthesize token=_token - In the implementation block
+(id)msgHandler:(/*^block*/id)arg1 token:(id)arg2 receiverQueue:(id)arg3 ;
-(NSNumber *)token;
-(void)setToken:(NSNumber *)arg1 ;
-(id)initWithMessageHandler:(/*^block*/id)arg1 token:(id)arg2 receiverQueue:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)receiverQueue;
-(void)setReceiverQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)messageHandler;
-(void)setMessageHandler:(id)arg1 ;
@end

