/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:05 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_GEONetworkDefaultsServerProxyDelegate.h>

@protocol _GEONetworkDefaultsServerProxy;
@class NSMutableArray, NSDictionary, NSLock, NSString;

@interface GEONetworkDefaults : NSObject <_GEONetworkDefaultsServerProxyDelegate> {

	id<_GEONetworkDefaultsServerProxy> _serverProxy;
	NSMutableArray* _completionHandlers;
	NSDictionary* _networkDefaults;
	NSLock* _networkDefaultsLock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setUseLocalProxy:(BOOL)arg1 ;
+(id)sharedNetworkDefaults;
-(id)valueForKey:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)allKeys;
-(void)updateIfNecessary:(/*^block*/id)arg1 ;
-(void)updateNetworkDefaults:(/*^block*/id)arg1 ;
-(void)serverProxy:(id)arg1 networkDefaultsDidChange:(id)arg2 ;
-(BOOL)_needsUpdate;
@end

