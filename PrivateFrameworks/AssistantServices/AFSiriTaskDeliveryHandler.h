/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:21 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFSiriTaskDelivering.h>

@protocol OS_dispatch_queue, AFSiriTaskServiceDelegate;
@class AFSiriTaskService, NSObject, NSString;

@interface AFSiriTaskDeliveryHandler : NSObject <AFSiriTaskDelivering> {

	AFSiriTaskService* _service;
	NSObject*<OS_dispatch_queue> _queue;
	id<AFSiriTaskServiceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) AFSiriTaskService * service;                         //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<AFSiriTaskServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<AFSiriTaskServiceDelegate>)arg1 ;
-(id<AFSiriTaskServiceDelegate>)delegate;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)deliverSiriTask:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setService:(AFSiriTaskService *)arg1 ;
-(AFSiriTaskService *)service;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

