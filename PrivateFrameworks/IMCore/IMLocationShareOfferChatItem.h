/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:09 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMTranscriptChatItem.h>
#import <IMCore/IMMessageChatItem.h>

@class IMHandle, NSString, NSDate;

@interface IMLocationShareOfferChatItem : IMTranscriptChatItem <IMMessageChatItem> {

	IMHandle* _sender;
	BOOL _actionableEclipsed;

}

@property (nonatomic,readonly) long long offerState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isFromMe; 
@property (nonatomic,readonly) BOOL failed; 
@property (nonatomic,retain,readonly) NSDate * time; 
@property (nonatomic,retain,readonly) IMHandle * sender;              //@synthesize sender=_sender - In the implementation block
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(IMHandle *)sender;
-(NSDate *)time;
-(id)_initWithItem:(id)arg1 sender:(id)arg2 ;
-(void)_setActionableEclipsed:(BOOL)arg1 ;
-(BOOL)_isActionableEclipsed;
-(BOOL)isFromMe;
-(long long)offerState;
-(BOOL)failed;
@end

