/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:49 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _UIAsyncInvocationObserver;

@interface _UIAsyncInvocation : NSObject {

	_UIAsyncInvocationObserver* _observer;
	/*^block*/id _invocationBlock;
	BOOL _invocationBlockHasBeenCalled;

}
+(id)invocationWithBlock:(/*^block*/id)arg1 ;
+(id)emptyInvocation;
-(id)invoke;
@end

