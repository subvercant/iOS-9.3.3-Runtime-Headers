/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:33 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SSVURLCacheConfiguration : NSObject {

	BOOL _supportsProcessSharing;
	NSString* _sessionIdentifier;

}

@property (nonatomic,copy) NSString * sessionIdentifier;               //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (assign,nonatomic) BOOL supportsProcessSharing;              //@synthesize supportsProcessSharing=_supportsProcessSharing - In the implementation block
-(BOOL)supportsProcessSharing;
-(void)setSupportsProcessSharing:(BOOL)arg1 ;
-(NSString *)sessionIdentifier;
-(void)setSessionIdentifier:(NSString *)arg1 ;
@end

