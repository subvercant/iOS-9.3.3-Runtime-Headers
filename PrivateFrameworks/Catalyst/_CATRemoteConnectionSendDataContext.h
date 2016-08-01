/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:06 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface _CATRemoteConnectionSendDataContext : NSObject {

	NSData* _data;
	NSData* _encodedData;
	id _userInfo;
	long long _bytesWritten;

}

@property (nonatomic,copy,readonly) NSData * data;                    //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSData * encodedData;                  //@synthesize encodedData=_encodedData - In the implementation block
@property (nonatomic,readonly) id userInfo;                           //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) long long remainingBytes; 
@property (assign,nonatomic) long long bytesWritten;                  //@synthesize bytesWritten=_bytesWritten - In the implementation block
-(id)userInfo;
-(NSData *)data;
-(NSData *)encodedData;
-(long long)bytesWritten;
-(id)initWithData:(id)arg1 userInfo:(id)arg2 ;
-(long long)remainingBytes;
-(id)remainingData;
-(void)setBytesWritten:(long long)arg1 ;
@end
