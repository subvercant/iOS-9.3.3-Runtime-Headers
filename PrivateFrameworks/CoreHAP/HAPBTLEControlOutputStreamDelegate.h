/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:07 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HAPBTLEControlOutputStreamDelegate <NSObject>
@required
-(void)controlOutputStream:(id)arg1 didReceiveRequestToSendControlPacket:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)controlOutputStreamDidOpen:(id)arg1;
-(void)controlOutputStream:(id)arg1 didCloseWithError:(id)arg2;
-(void)controlOutputStreamDidComplete:(id)arg1;

@end
