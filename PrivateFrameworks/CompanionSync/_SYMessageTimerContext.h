/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:07 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _SYMessageTimerContext : NSObject {

	unsigned long long _seqno;
	NSString* _identifier;

}

@property (assign,nonatomic) unsigned long long seqno;              //@synthesize seqno=_seqno - In the implementation block
@property (nonatomic,copy) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setSeqno:(unsigned long long)arg1 ;
-(unsigned long long)seqno;
@end

