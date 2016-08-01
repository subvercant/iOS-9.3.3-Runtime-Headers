/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:56 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface _CDEventStreams : NSObject {

	NSDictionary* _allKBEventStreams;
	NSDictionary* _eventEphemeralitySchedule;
	NSDictionary* _rateLimitPolicy;
	NSDictionary* _privacyPolicy;
	NSDictionary* _allEventStreams;

}

@property (nonatomic,readonly) NSDictionary * allEventStreams;              //@synthesize allEventStreams=_allEventStreams - In the implementation block
+(id)sharedInstance;
+(id)eventStreamForName:(id)arg1 ;
+(id)eventStreamPropertiesForName:(id)arg1 ;
+(id)eventStreamPropertiesForKBName:(id)arg1 ;
+(id)ephemeralitySchedule;
+(id)rateLimitPolicy;
+(id)privacyPolicy;
-(NSDictionary *)allEventStreams;
@end
