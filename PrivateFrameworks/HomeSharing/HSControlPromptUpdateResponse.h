/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:41 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeSharing/HSResponse.h>

@class HSControlPrompt, NSDictionary;

@interface HSControlPromptUpdateResponse : HSResponse {

	unsigned _nextPromptID;
	HSControlPrompt* _prompt;
	NSDictionary* _promptDictionary;

}

@property (assign,nonatomic) unsigned nextPromptID;                      //@synthesize nextPromptID=_nextPromptID - In the implementation block
@property (nonatomic,retain) HSControlPrompt * prompt;                   //@synthesize prompt=_prompt - In the implementation block
@property (nonatomic,copy) NSDictionary * promptDictionary;              //@synthesize promptDictionary=_promptDictionary - In the implementation block
-(HSControlPrompt *)prompt;
-(void)setPrompt:(HSControlPrompt *)arg1 ;
-(void)setNextPromptID:(unsigned)arg1 ;
-(void)setPromptDictionary:(NSDictionary *)arg1 ;
-(unsigned)nextPromptID;
-(NSDictionary *)promptDictionary;
@end

