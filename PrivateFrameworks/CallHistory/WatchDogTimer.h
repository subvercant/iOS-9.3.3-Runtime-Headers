/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:49 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallHistory/CHLogger.h>

@protocol OS_dispatch_source;
@class NSString, NSObject;

@interface WatchDogTimer : CHLogger {

	NSString* _name;
	NSObject*<OS_dispatch_source> _timer;

}
-(void)cancel;
-(void)dealloc;
-(id)initWithQueue:(id)arg1 withName:(id)arg2 withTimeout:(double)arg3 withCallback:(/*^block*/id)arg4 ;
@end

