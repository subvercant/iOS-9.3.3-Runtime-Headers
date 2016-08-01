/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:21 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface AAUIDeviceLocatorService : NSObject {

	unsigned long long _lastKnownState;
	BOOL _hasAttemptedToFetchState;
	BOOL _wantsToEnable;
	NSObject*<OS_dispatch_queue> _stateUpdateQueue;

}
+(id)sharedInstance;
-(id)init;
-(BOOL)isEnabled;
-(void)_updateStateAndNotify:(BOOL)arg1 ;
-(BOOL)isStateKnown;
-(void)enableInContext:(unsigned long long)arg1 ;
-(void)setShouldEnable:(BOOL)arg1 ;
-(BOOL)shouldEnable;
-(BOOL)isChangingState;
-(void)disableInContext:(unsigned long long)arg1 withWipeToken:(id)arg2 ;
@end
