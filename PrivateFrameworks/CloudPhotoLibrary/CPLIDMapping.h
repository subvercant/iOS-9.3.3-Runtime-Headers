/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:40 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CPLIDMapping : NSObject {

	NSString* _cloudIdentifier;
	NSString* _localIdentifier;
	BOOL _final;

}

@property (nonatomic,readonly) NSString * cloudIdentifier;              //@synthesize cloudIdentifier=_cloudIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * localIdentifier;              //@synthesize localIdentifier=_localIdentifier - In the implementation block
@property (getter=isFinal,nonatomic,readonly) BOOL final;               //@synthesize final=_final - In the implementation block
-(BOOL)isFinal;
-(NSString *)localIdentifier;
-(NSString *)cloudIdentifier;
@end

