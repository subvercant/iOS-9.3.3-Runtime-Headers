/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:29 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <StoreKitUI/StoreKitUI-Structs.h>
@class NSString;

@interface SKUIRunLoopDelay : NSObject {

	NSString* _mode;
	CFRunLoopRef _runLoop;
	CFRunLoopSourceRef _runLoopSource;
	double _timeout;

}
-(void)dealloc;
-(id)initWithRunLoopMode:(id)arg1 timeout:(double)arg2 ;
-(void)delayRunLoop;
-(void)endDelay;
@end

