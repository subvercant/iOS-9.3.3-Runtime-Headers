/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:53 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogAccounting/PLAccountingRuleEntry.h>

@class NSNumber;

@interface PLAccountingQualificationRuleEntry : PLAccountingRuleEntry

@property (nonatomic,readonly) NSNumber * rootNodeID; 
@property (nonatomic,readonly) NSNumber * qualificationID; 
+(void)load;
+(id)entryKey;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSNumber *)qualificationID;
-(NSNumber *)rootNodeID;
-(id)initWithRootNodeID:(id)arg1 withQualificationID:(id)arg2 withEntryDate:(id)arg3 ;
@end

