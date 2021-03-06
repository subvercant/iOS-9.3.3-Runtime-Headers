/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:22 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class NSDictionary, ACAccount;

@interface AALoginDelegatesRequest : AARequest {

	NSDictionary* _loginParameters;
	ACAccount* _account;

}
+(Class)responseClass;
-(id)initWithAccount:(id)arg1 parameters:(id)arg2 ;
-(id)urlRequest;
-(id)urlString;
@end

