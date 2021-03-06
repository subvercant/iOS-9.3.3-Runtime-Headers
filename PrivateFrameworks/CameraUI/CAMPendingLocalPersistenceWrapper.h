/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:31 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CAMCaptureRequest;

@interface CAMPendingLocalPersistenceWrapper : NSObject {

	CAMCaptureRequest* _request;
	id _result;

}

@property (nonatomic,readonly) CAMCaptureRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) id result;                                //@synthesize result=_result - In the implementation block
-(CAMCaptureRequest *)request;
-(id)result;
-(id)initWithRequest:(id)arg1 result:(id)arg2 ;
@end

