/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:17 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class RWIProtocolRuntimeRemoteObject;

@interface RWIProtocolDebuggerScope : RWIProtocolJSONObject

@property (assign,nonatomic) long long type; 
@property (nonatomic,retain) RWIProtocolRuntimeRemoteObject * object; 
-(id)initWithType:(long long)arg1 object:(id)arg2 ;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(RWIProtocolRuntimeRemoteObject *)object;
-(void)setObject:(RWIProtocolRuntimeRemoteObject *)arg1 ;
@end

