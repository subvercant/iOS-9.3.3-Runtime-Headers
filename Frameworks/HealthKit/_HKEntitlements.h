/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:42 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HealthKit/HealthKit-Structs.h>
@class NSString, NSDictionary;

@interface _HKEntitlements : NSObject {

	NSString* _applicationIdentifier;
	NSDictionary* _entitlementValues;

}

@property (nonatomic,copy,readonly) NSDictionary * entitlementValues;              //@synthesize entitlementValues=_entitlementValues - In the implementation block
+(id)entitlementsForCurrentTask;
+(id)_entitlementsWithSecTask:(SecTaskRef)arg1 valueOverrides:(id)arg2 ;
+(id)_allowedEntitlementsSet;
+(void)_setEntitlementsForCurrentTask:(id)arg1 ;
+(id)entitlementsWithApplicationIdentifier:(id)arg1 ;
+(id)entitlementsWithDictionary:(id)arg1 ;
+(id)entitlementsWithConnection:(id)arg1 ;
-(id)init;
-(id)applicationIdentifier;
-(BOOL)hasEntitlement:(id)arg1 ;
-(id)valueForEntitlement:(id)arg1 ;
-(id)_initWithEntitlementValues:(id)arg1 ;
-(id)stringForEntitlement:(id)arg1 ;
-(NSDictionary *)entitlementValues;
@end

