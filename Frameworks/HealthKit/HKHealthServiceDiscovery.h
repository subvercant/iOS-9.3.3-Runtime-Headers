/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:43 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HKHealthServiceDiscovery : NSObject {

	long long _serviceType;
	unsigned long long _discoveryIdentifier;
	/*^block*/id _discoveryHandler;

}

@property (nonatomic,readonly) long long serviceType;                             //@synthesize serviceType=_serviceType - In the implementation block
@property (assign,nonatomic) unsigned long long discoveryIdentifier;              //@synthesize discoveryIdentifier=_discoveryIdentifier - In the implementation block
@property (nonatomic,copy) id discoveryHandler;                                   //@synthesize discoveryHandler=_discoveryHandler - In the implementation block
-(id)initWithType:(long long)arg1 ;
-(long long)serviceType;
-(id)initForAllTypes;
-(void)setDiscoveryHandler:(id)arg1 ;
-(void)setDiscoveryIdentifier:(unsigned long long)arg1 ;
-(id)discoveryHandler;
-(unsigned long long)discoveryIdentifier;
@end

