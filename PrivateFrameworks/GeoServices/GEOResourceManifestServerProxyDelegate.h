/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:04 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOResourceManifestServerProxyDelegate <NSObject>
@required
-(oneway void)serverProxyWillStartLoadingResources:(id)arg1;
-(oneway void)serverProxyDidStopUpdatingResourceManifest:(id)arg1;
-(oneway void)serverProxy:(id)arg1 didChangeActiveTileGroup:(id)arg2 finishedCallback:(/*^block*/id)arg3;
-(oneway void)serverProxyWillStartUpdatingResourceManifest:(id)arg1;
-(oneway void)serverProxyDidStopLoadingResources:(id)arg1;

@end

