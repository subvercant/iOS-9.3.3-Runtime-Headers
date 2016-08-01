/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:34 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSHTTPURLResponse, NSString, NSNumber;

@interface SSAuthenticationResponse : NSObject {

	NSDictionary* _responseDictionary;
	long long _urlBagType;
	NSHTTPURLResponse* _urlResponse;

}

@property (assign) long long URLBagType;                                       //@synthesize urlBagType=_urlBagType - In the implementation block
@property (readonly) NSDictionary * responseDictionary;                        //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (readonly) NSHTTPURLResponse * URLResponse; 
@property (readonly) NSString * accountName; 
@property (readonly) long long accountKind; 
@property (readonly) NSNumber * accountUniqueIdentifier; 
@property (readonly) long long availableServiceTypes; 
@property (readonly) NSString * creditsString; 
@property (readonly) long long enabledServiceTypes; 
@property (getter=isManagedStudent,readonly) BOOL managedStudent; 
@property (getter=isNewCustomer,readonly) BOOL newCustomer; 
@property (readonly) NSString * storeFrontIdentifier; 
@property (readonly) NSString * token; 
@property (readonly) NSNumber * failureType; 
@property (readonly) long long responseType; 
@property (readonly) NSString * userMessage; 
-(BOOL)isNewCustomer;
-(long long)availableServiceTypes;
-(id)initWithURLResponse:(id)arg1 dictionary:(id)arg2 ;
-(id)newAccount;
-(NSNumber *)failureType;
-(NSNumber *)accountUniqueIdentifier;
-(BOOL)isManagedStudent;
-(long long)_responseTypeForFailureType:(long long)arg1 ;
-(long long)_responseTypeForErrorNumber:(long long)arg1 ;
-(long long)_responseTypeForStatusValue:(long long)arg1 ;
-(void)dealloc;
-(NSString *)token;
-(NSString *)userMessage;
-(long long)accountKind;
-(long long)enabledServiceTypes;
-(id)_valueForFirstAvailableKey:(id)arg1 ;
-(void)setURLBagType:(long long)arg1 ;
-(long long)URLBagType;
-(NSDictionary *)responseDictionary;
-(NSString *)accountName;
-(NSHTTPURLResponse *)URLResponse;
-(NSString *)storeFrontIdentifier;
-(NSString *)creditsString;
-(long long)responseType;
@end
