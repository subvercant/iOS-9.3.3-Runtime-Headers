/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:50 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, NSArray, NSIndexSet;

@interface TSUCustomFormatData : NSObject <NSCopying, NSMutableCopying> {

	unsigned char mMinimumIntegerWidth;
	unsigned char mDecimalWidth;
	unsigned char mNumberOfNonSpaceIntegerPlaceholderDigits;
	unsigned char mNumberOfNonSpaceDecimalPlaceholderDigits;
	unsigned char mIndexFromRightOfLastDigitPlaceholder;
	unsigned char mNumberOfHashDecimalPlaceholders;
	unsigned char mTotalNumberOfDecimalPlaceholdersInFormat;
	BOOL mShowThousandsSeparator;
	BOOL mUseAccountingStyle;
	BOOL mRequiresFractionReplacement;
	BOOL mIsConditional;
	BOOL mFormatContainsIntegerToken;
	BOOL mIsComplexFormat;
	unsigned short mCurrencyCodeIndex;
	int mFractionAccuracy;
	NSString* mFormatString;
	NSArray* mInterstitialStrings;
	NSIndexSet* mInterstitialStringInsertionIndexes;
	double mScaleFactor;

}

@property (nonatomic,copy) NSString * formatString; 
@property (nonatomic,copy) NSArray * interstitialStrings; 
@property (nonatomic,copy) NSIndexSet * interstitialStringInsertionIndexes; 
@property (assign,nonatomic) double scaleFactor; 
@property (assign,nonatomic) int fractionAccuracy; 
@property (assign,nonatomic) unsigned char minimumIntegerWidth; 
@property (assign,nonatomic) unsigned char decimalWidth; 
@property (assign,nonatomic) unsigned char numberOfNonSpaceIntegerPlaceholderDigits; 
@property (assign,nonatomic) unsigned char numberOfNonSpaceDecimalPlaceholderDigits; 
@property (assign,nonatomic) unsigned char indexFromRightOfLastDigitPlaceholder; 
@property (assign,nonatomic) unsigned char numberOfHashDecimalPlaceholders; 
@property (assign,nonatomic) unsigned char totalNumberOfDecimalPlaceholdersInFormat; 
@property (assign,nonatomic) unsigned short currencyCodeIndex; 
@property (assign,nonatomic) BOOL showThousandsSeparator; 
@property (assign,nonatomic) BOOL useAccountingStyle; 
@property (assign,nonatomic) BOOL requiresFractionReplacement; 
@property (assign,nonatomic) BOOL isConditional; 
@property (assign,nonatomic) BOOL formatContainsIntegerToken; 
@property (assign,nonatomic) BOOL isComplexFormat; 
+(id)customFormatData;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)scaleFactor;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setScaleFactor:(double)arg1 ;
-(NSString *)formatString;
-(void)setFormatString:(NSString *)arg1 ;
-(BOOL)showThousandsSeparator;
-(int)fractionAccuracy;
-(void)setShowThousandsSeparator:(BOOL)arg1 ;
-(void)setFractionAccuracy:(int)arg1 ;
-(void)setUseAccountingStyle:(BOOL)arg1 ;
-(void)p_copySelfTo:(id)arg1 ;
-(NSArray *)interstitialStrings;
-(void)setInterstitialStrings:(NSArray *)arg1 ;
-(NSIndexSet *)interstitialStringInsertionIndexes;
-(void)setInterstitialStringInsertionIndexes:(NSIndexSet *)arg1 ;
-(unsigned char)minimumIntegerWidth;
-(void)setMinimumIntegerWidth:(unsigned char)arg1 ;
-(unsigned char)decimalWidth;
-(void)setDecimalWidth:(unsigned char)arg1 ;
-(unsigned char)numberOfNonSpaceIntegerPlaceholderDigits;
-(void)setNumberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)arg1 ;
-(unsigned char)numberOfNonSpaceDecimalPlaceholderDigits;
-(void)setNumberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)arg1 ;
-(unsigned char)indexFromRightOfLastDigitPlaceholder;
-(void)setIndexFromRightOfLastDigitPlaceholder:(unsigned char)arg1 ;
-(unsigned char)numberOfHashDecimalPlaceholders;
-(void)setNumberOfHashDecimalPlaceholders:(unsigned char)arg1 ;
-(unsigned char)totalNumberOfDecimalPlaceholdersInFormat;
-(void)setTotalNumberOfDecimalPlaceholdersInFormat:(unsigned char)arg1 ;
-(unsigned short)currencyCodeIndex;
-(void)setCurrencyCodeIndex:(unsigned short)arg1 ;
-(BOOL)useAccountingStyle;
-(BOOL)requiresFractionReplacement;
-(void)setRequiresFractionReplacement:(BOOL)arg1 ;
-(BOOL)isConditional;
-(void)setIsConditional:(BOOL)arg1 ;
-(BOOL)formatContainsIntegerToken;
-(void)setFormatContainsIntegerToken:(BOOL)arg1 ;
-(BOOL)isComplexFormat;
-(void)setIsComplexFormat:(BOOL)arg1 ;
-(id)initWithCustomFormatData:(id)arg1 ;
@end

