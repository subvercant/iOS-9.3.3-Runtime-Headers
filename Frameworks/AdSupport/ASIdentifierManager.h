/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:10 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AdSupport.framework/AdSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID;

@interface ASIdentifierManager : NSObject

@property (nonatomic,readonly) NSUUID * advertisingIdentifier; 
@property (getter=isAdvertisingTrackingEnabled,nonatomic,readonly) BOOL advertisingTrackingEnabled; 
+(id)sharedManager;
-(NSUUID *)advertisingIdentifier;
-(BOOL)isAdvertisingTrackingEnabled;
@end
