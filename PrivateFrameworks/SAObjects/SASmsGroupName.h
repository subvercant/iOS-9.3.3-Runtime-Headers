/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:18 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SASmsGroupName : SADomainObject

@property (nonatomic,copy) NSString * groupName; 
@property (nonatomic,copy) NSString * groupNameId; 
+(id)groupName;
+(id)groupNameWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setGroupName:(NSString *)arg1 ;
-(NSString *)groupName;
-(id)groupIdentifier;
-(NSString *)groupNameId;
-(void)setGroupNameId:(NSString *)arg1 ;
-(id)encodedClassName;
@end
