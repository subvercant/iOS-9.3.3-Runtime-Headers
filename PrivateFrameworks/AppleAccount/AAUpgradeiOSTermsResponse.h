/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:22 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSData;

@interface AAUpgradeiOSTermsResponse : AAResponse {

	NSData* _xmlUIData;

}

@property (nonatomic,readonly) NSData * xmlUIData;              //@synthesize xmlUIData=_xmlUIData - In the implementation block
-(NSData *)xmlUIData;
-(id)responseXMLData;
-(BOOL)bodyIsPlist;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
@end
