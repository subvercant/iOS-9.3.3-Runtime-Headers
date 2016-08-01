/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:48 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSArray, NSObject;

@interface NPKLoyaltyEngine : NSObject {

	NSArray* _storedValueCardDescriptions;
	NSArray* _whitelistedLoyaltyCardDescriptions;
	NSArray* _greylistedLoyaltyCardDescriptions;
	NSObject*<OS_dispatch_queue> _internalQueue;

}

@property (readonly) NSArray * storedValueCardDescriptions; 
@property (readonly) NSArray * whitelistedLoyaltyCardDescriptions; 
@property (readonly) NSArray * greylistedLoyaltyCardDescriptions; 
@property (retain) NSObject*<OS_dispatch_queue> internalQueue;                  //@synthesize internalQueue=_internalQueue - In the implementation block
+(id)shouldAutomaticallyPresentForSettings:(unsigned long long)arg1 ;
+(id)sharedQuickPaymentLoyaltyEngine;
-(id)init;
-(id)_init;
-(void)reset;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)_postLoyaltyEngineConfigurationChanged;
-(NSArray *)storedValueCardDescriptions;
-(NSArray *)greylistedLoyaltyCardDescriptions;
-(NSArray *)whitelistedLoyaltyCardDescriptions;
-(void)moveCardDescriptionFromGreylistToWhitelist:(id)arg1 ;
-(void)removeCardDescriptionFromGreylistAndWhitelist:(id)arg1 ;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
