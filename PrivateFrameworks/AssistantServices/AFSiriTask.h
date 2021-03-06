/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:21 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AFSiriRequest, NSXPCListenerEndpoint, NSString;

@interface AFSiriTask : NSObject <BSXPCCoding, NSSecureCoding> {

	AFSiriRequest* _request;
	NSXPCListenerEndpoint* _remoteResponseListenerEndpoint;
	NSXPCListenerEndpoint* _usageResultListenerEndpoint;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(void)initialize;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)request;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)_initWithRequest:(id)arg1 remoteResponseListenerEndpoint:(id)arg2 usageResultListenerEndpoint:(id)arg3 ;
-(id)_responseHandlerConnection;
-(id)_usageResultHandlerConnection;
-(void)completeWithResponse:(id)arg1 ;
-(void)reportUsageResult:(id)arg1 ;
-(void)failWithError:(id)arg1 ;
@end

