/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:53 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogAccounting/PLAccountingEventEntry.h>

@class NSDictionary, NSNumber;

@interface PLAccountingDistributionEventEntry : PLAccountingEventEntry {

	NSDictionary* _childNodeIDToWeight;

}

@property (nonatomic,readonly) NSNumber * distributionID; 
@property (nonatomic,readonly) NSDictionary * childNodeIDToWeight;                //@synthesize childNodeIDToWeight=_childNodeIDToWeight - In the implementation block
@property (nonatomic,readonly) NSDictionary * childNodeNameToWeight; 
+(void)load;
-(id)subEntryKey;
-(id)initWithDistributionID:(id)arg1 withChildNodeIDToWeight:(id)arg2 withRange:(id)arg3 ;
-(int)instanceDirectionality;
-(NSNumber *)distributionID;
-(id)initWithDistributionID:(id)arg1 withChildNodeNameToWeight:(id)arg2 withRange:(id)arg3 ;
-(NSDictionary *)childNodeNameToWeight;
-(BOOL)isEqualContentsWithEvent:(id)arg1 ;
-(BOOL)isEmptyEvent;
-(NSDictionary *)childNodeIDToWeight;
@end
