/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:28 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber, NSString, NSSet, ACDManagedAccountType;

@interface ACDManagedAccount : NSManagedObject

@property (nonatomic,retain) NSDate * lastCredentialRenewalRejectionDate; 
@property (nonatomic,retain) id dataclassProperties; 
@property (nonatomic,retain) NSNumber * active; 
@property (nonatomic,retain) NSNumber * authenticated; 
@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSDate * date; 
@property (nonatomic,retain) NSString * authenticationType; 
@property (nonatomic,retain) NSString * accountDescription; 
@property (nonatomic,retain) NSNumber * supportsAuthentication; 
@property (nonatomic,retain) NSString * owningBundleID; 
@property (nonatomic,retain) NSString * username; 
@property (nonatomic,retain) NSString * credentialType; 
@property (nonatomic,retain) NSSet * childAccounts; 
@property (nonatomic,retain) NSSet * provisionedDataclasses; 
@property (nonatomic,retain) ACDManagedAccount * parentAccount; 
@property (nonatomic,retain) ACDManagedAccountType * accountType; 
@property (nonatomic,retain) NSSet * customProperties; 
@property (nonatomic,retain) NSSet * enabledDataclasses; 
@property (nonatomic,retain) NSNumber * visible; 
@end

