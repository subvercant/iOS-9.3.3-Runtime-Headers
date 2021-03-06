/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:26 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSQLStatement;

@interface NSCachedFetchRequestThunk : NSObject {

	NSSQLStatement* _limitedStatement;
	NSSQLStatement* _unlimitedStatement;
	long long _refCount;

}

@property (nonatomic,retain) NSSQLStatement * limitedStatement;                //@synthesize limitedStatement=_limitedStatement - In the implementation block
@property (nonatomic,retain) NSSQLStatement * unlimitedStatement;              //@synthesize unlimitedStatement=_unlimitedStatement - In the implementation block
@property (readonly) long long inUseCounter;                                   //@synthesize refCount=_refCount - In the implementation block
-(void)clearCaches;
-(void)incrementInUseCounter;
-(void)decrementInUseCounter;
-(NSSQLStatement *)limitedStatement;
-(void)setLimitedStatement:(NSSQLStatement *)arg1 ;
-(NSSQLStatement *)unlimitedStatement;
-(void)setUnlimitedStatement:(NSSQLStatement *)arg1 ;
-(long long)inUseCounter;
-(void)dealloc;
-(id)init;
@end

