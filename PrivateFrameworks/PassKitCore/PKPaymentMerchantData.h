/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:42 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData;

@interface PKPaymentMerchantData : NSObject {

	NSString* _merchantIdentifier;
	NSData* _applicationData;

}

@property (nonatomic,retain) NSString * merchantIdentifier;              //@synthesize merchantIdentifier=_merchantIdentifier - In the implementation block
@property (nonatomic,retain) NSData * applicationData;                   //@synthesize applicationData=_applicationData - In the implementation block
-(void)dealloc;
-(void)setMerchantIdentifier:(NSString *)arg1 ;
-(void)setApplicationData:(NSData *)arg1 ;
-(id)encode;
-(NSString *)merchantIdentifier;
-(NSData *)applicationData;
@end

