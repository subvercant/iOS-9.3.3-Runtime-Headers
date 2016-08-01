/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:53 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AddressBook/ABPredicate.h>

@protocol NSObject;
@class NSArray, NSObject;

@interface ABValuePredicate : ABPredicate {

	int _property;
	long long _comparison;
	id<NSObject> _value;
	NSArray* _orderedKeys;
	BOOL _dictionaryValue;

}

@property (assign,nonatomic) int property;                      //@synthesize property=_property - In the implementation block
@property (assign,nonatomic) long long comparison;              //@synthesize comparison=_comparison - In the implementation block
@property (nonatomic,copy) NSObject * value;                    //@synthesize value=_value - In the implementation block
+(id)stringForComparison:(id)arg1 withComparision:(long long)arg2 ;
-(id)predicateFormat;
-(void)dealloc;
-(id)init;
-(BOOL)isValid;
-(NSObject *)value;
-(void)setValue:(NSObject *)arg1 ;
-(id)queryWhereStringForPredicateIdentifier:(int)arg1 ;
-(void)ab_bindWhereClauseComponentOfStatement:(CPSqliteStatement*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3 ;
-(id)querySelectPropertiesForPredicateIdentifier:(int)arg1 ;
-(id)queryJoinsInCompound:(BOOL)arg1 predicateIdentifier:(int)arg2 ;
-(BOOL)_shouldConsultIndexForKey:(id)arg1 ;
-(BOOL)_supportsFTSSearch;
-(BOOL)_allowsLaxCheckingForFTS;
-(id)_ftsTermStringForString:(id)arg1 ;
-(id)stringForComparison:(id)arg1 ;
-(id)_ftsAllQueryStrings;
-(id)_ftsTokenizedTermStringForString:(id)arg1 ;
-(long long)comparison;
-(void)setComparison:(long long)arg1 ;
-(void)setProperty:(int)arg1 ;
-(int)property;
@end
