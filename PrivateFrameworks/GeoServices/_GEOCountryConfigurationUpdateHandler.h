/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:01 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface _GEOCountryConfigurationUpdateHandler : NSObject {

	/*^block*/id _callback;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (nonatomic,copy) id callback;                                               //@synthesize callback=_callback - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(id)callback;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCallback:(id)arg1 ;
@end
