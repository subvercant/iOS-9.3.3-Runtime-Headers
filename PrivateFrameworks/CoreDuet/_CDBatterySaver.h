/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:56 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface _CDBatterySaver : NSObject {

	NSXPCConnection* _connection;

}
+(id)batterySaver;
-(void)dealloc;
-(id)init;
-(long long)setMode:(long long)arg1 ;
-(long long)getPowerMode;
-(BOOL)setPowerMode:(long long)arg1 error:(id*)arg2 ;
@end

