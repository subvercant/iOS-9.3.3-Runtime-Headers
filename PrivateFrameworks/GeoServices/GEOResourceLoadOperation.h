/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:04 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSData;


@protocol GEOResourceLoadOperation <NSObject>
@property (nonatomic,readonly) NSData * data; 
@required
-(void)cancel;
-(NSData *)data;
-(id)initWithResource:(id)arg1 existingPartialData:(id)arg2 auditToken:(id)arg3 baseURLString:(id)arg4;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 callbackQueue:(id)arg2;

@end

