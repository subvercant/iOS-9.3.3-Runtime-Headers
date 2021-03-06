/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:23 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class Protocol;

@interface NSXPCInterface : NSObject {

	Protocol* _protocol;
	CFDictionaryRef _methods2;
	id _reserved1;

}

@property (assign) Protocol * protocol; 
+(id)signatureForBlock:(id)arg1 ;
+(id)interfaceWithProtocol:(id)arg1 ;
-(id)_verifiedMethodSignatureForReplyBlockOfSelector:(SEL)arg1 ;
-(id)_interfaceForArgument:(unsigned long long)arg1 ofSelector:(SEL)arg2 reply:(BOOL)arg3 ;
-(id)_allowedClassesForSelector:(SEL)arg1 reply:(BOOL)arg2 ;
-(id)_verifiedMethodSignatureForSelector:(SEL)arg1 ;
-(id)classesForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(BOOL)arg3 ;
-(id)interfaceForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(BOOL)arg3 ;
-(void)setClass:(Class)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(BOOL)arg4 ;
-(Class)classForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(BOOL)arg3 ;
-(void)setReplyBlockSignature:(id)arg1 forSelector:(SEL)arg2 ;
-(id)replyBlockSignatureForSelector:(SEL)arg1 ;
-(void)dealloc;
-(id)init;
-(id)debugDescription;
-(void)setClasses:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(BOOL)arg4 ;
-(void)setInterface:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(BOOL)arg4 ;
-(Protocol *)protocol;
-(void)setProtocol:(Protocol *)arg1 ;
-(void)finalize;
@end

