/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:48 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NPKTransientPassAssertionConnection, NSString;

@interface NPKTransientPassRequest : NSObject {

	NPKTransientPassAssertionConnection* _owningConnection;
	NSString* _uniqueID;

}

@property (assign,nonatomic,__weak) NPKTransientPassAssertionConnection * owningConnection;              //@synthesize owningConnection=_owningConnection - In the implementation block
@property (nonatomic,retain) NSString * uniqueID;                                                        //@synthesize uniqueID=_uniqueID - In the implementation block
-(void)setUniqueID:(NSString *)arg1 ;
-(NSString *)uniqueID;
-(NPKTransientPassAssertionConnection *)owningConnection;
-(void)setOwningConnection:(NPKTransientPassAssertionConnection *)arg1 ;
@end
