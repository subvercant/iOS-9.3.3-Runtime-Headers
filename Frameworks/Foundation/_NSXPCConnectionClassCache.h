/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:23 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface _NSXPCConnectionClassCache : NSObject {

	int _lock;
	NSMutableSet* _cache;

}
-(BOOL)containsClass:(Class)arg1 ;
-(void)addClass:(Class)arg1 ;
-(void)dealloc;
-(id)init;
-(void)clear;
@end

