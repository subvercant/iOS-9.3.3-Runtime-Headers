/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:08 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class NSObject, NSMutableDictionary;

@interface GEODiskSpaceManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _freeableClaims;

}
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(unsigned long long)getFreeableSpace;
-(BOOL)_isValidVolume:(CFDictionaryRef)arg1 ;
-(unsigned long long)freeDiskSpaceBy:(unsigned long long)arg1 ;
-(id)_getVolume:(CFDictionaryRef)arg1 ;
-(void)_registerCacheDeleteCallbacks;
-(id)_getPurgeableSpace:(CFDictionaryRef)arg1 ;
@end

