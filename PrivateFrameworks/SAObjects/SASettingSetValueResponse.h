/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:18 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SASettingResponse.h>
#import <SAObjects/SASettingSupplier.h>

@class SASettingEntity, NSString;

@interface SASettingSetValueResponse : SASettingResponse <SASettingSupplier>

@property (nonatomic,retain) SASettingEntity * setting; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)setValueResponse;
+(id)setValueResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SASettingEntity *)setting;
-(void)setSetting:(SASettingEntity *)arg1 ;
-(id)encodedClassName;
@end
