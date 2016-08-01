/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:31 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMDPersistence/IMDPersistence-Structs.h>
#import <IMDPersistence/IMAbstractDatabaseTrimmer.h>

@interface IMTrimDatabaseToMessageCount : IMAbstractDatabaseTrimmer {

	long long _messageCount;

}

@property (nonatomic,readonly) long long messageCount;              //@synthesize messageCount=_messageCount - In the implementation block
-(long long)messageCount;
-(id)initWithSourceDatabasePath:(id)arg1 destinationDatabasePath:(id)arg2 messageCount:(long long)arg3 ;
-(void)performMessageSelectionWithOperation:(IMDSqlOperation*)arg1 ;
@end
