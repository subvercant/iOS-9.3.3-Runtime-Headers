/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:24 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSFormatter.h>
#import <libobjc.A.dylib/NSObservable.h>
#import <libobjc.A.dylib/NSObserver.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSLocale;

@interface NSPersonNameComponentsFormatter : NSFormatter <NSObservable, NSObserver, NSSecureCoding, NSCopying> {

	id _private;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) long long style; 
@property (getter=isPhonetic) BOOL phonetic; 
@property (assign) BOOL _forceFamilyNameFirst; 
@property (assign) BOOL _forceGivenNameFirst; 
@property (assign) NSLocale * _locale; 
@property (assign) BOOL _ignoresFallbacks; 
+(id)__familyNameFirstOrdering;
+(id)__givenNameFirstOrdering;
+(BOOL)__shortStyleRestrictionExistsForComponents:(id)arg1 shortStyle:(long long)arg2 ;
+(id)__inferredDelimiterBetweenStringOne:(id)arg1 andStringTwo:(id)arg2 isPhonetic:(BOOL)arg3 ;
+(BOOL)_shouldPreferNicknames;
+(BOOL)_isCJKScript:(id)arg1 ;
+(BOOL)_isMixedScript:(id)arg1 ;
+(BOOL)_shortNameIsEnabled;
+(id)_formatterWithStyle:(long long)arg1 options:(unsigned long long)arg2 ;
+(id)_styleFormatterForStyle:(long long)arg1 masterFormatter:(id)arg2 ;
+(USetRef)__getCharacterSetWithPattern:(id)arg1 ;
+(BOOL)__contents:(id)arg1 exclusivelyInCharacterSet:(USetRef)arg2 ;
+(void)forEachExistingComponentWithComponents:(id)arg1 performBlock:(/*^block*/id)arg2 ;
+(unsigned long long)__inferredScriptIndexFromString:(id)arg1 ;
+(BOOL)isKatakana:(id)arg1 ;
+(unsigned long long)__inferredScriptIndexForComponents:(id)arg1 ;
+(id)_cjkLanguagesSet;
+(id)__currentLocale;
+(id)_cjkLocaleIdentifiers;
+(long long)__nameOrderForLocale:(id)arg1 usingNativeOrdering:(BOOL)arg2 ;
+(long long)_defaultDisplayNameOrder;
+(long long)_defaultShortNameFormat;
+(BOOL)__style:(long long)arg1 isRestrictedForLocale:(id)arg2 ;
+(BOOL)__shortStyle:(long long)arg1 isRestrictedForLocale:(id)arg2 ;
+(BOOL)__style:(long long)arg1 isRestrictedForScript:(unsigned long long)arg2 ;
+(BOOL)__shortStyle:(long long)arg1 isRestrictedForScript:(unsigned long long)arg2 ;
+(long long)__shortNameFormatForLocale:(id)arg1 ;
+(id)__naiveDelimiterForCombinedNameString:(id)arg1 ;
+(void)__registerDefaults;
+(id)__localizedNameDefaults;
+(id)__supportedNameDefaultsFromLocale:(id)arg1 ;
+(id)__stringValueForStyle:(long long)arg1 ;
+(id)__scriptIdentifierFromIndex:(unsigned long long)arg1 ;
+(id)__supportedScriptDefaultsFromScriptName:(id)arg1 ;
+(id)__stringValueForShortStyle:(long long)arg1 ;
+(id)localizedStringFromPersonNameComponents:(id)arg1 style:(long long)arg2 options:(unsigned long long)arg3 ;
+(id)__longestComponentFromComponents:(id)arg1 ;
+(BOOL)_currentLocaleIsCJK;
+(long long)_nameOrderWithOverridesForComponents:(id)arg1 options:(unsigned long long)arg2 ;
+(id)_localizedDelimiterForComponents:(id)arg1 options:(unsigned long long)arg2 ;
+(id)_relevantKeyPathsForStyle:(long long)arg1 options:(unsigned long long)arg2 ;
+(id)_fallbackDescriptorForStyle:(long long)arg1 options:(unsigned long long)arg2 ;
+(id)_localizedShortNameForComponents:(id)arg1 withStyle:(long long)arg2 options:(unsigned long long)arg3 ;
+(BOOL)supportsSecureCoding;
-(void)receiveObservedValue:(id)arg1 ;
-(id)stringFromPersonNameComponents:(id)arg1 ;
-(void)setPhonetic:(BOOL)arg1 ;
-(BOOL)_forceFamilyNameFirst;
-(BOOL)_forceGivenNameFirst;
-(BOOL)_ignoresFallbacks;
-(BOOL)__localizedRestrictionExistsForStyle:(long long)arg1 ;
-(BOOL)isPhonetic;
-(BOOL)__localizedRestrictionExistsForComponents:(id)arg1 ;
-(long long)__computedNameOrderForComponents:(id)arg1 ;
-(id)annotatedStringFromPersonNameComponents:(id)arg1 ;
-(long long)__computedShortNameFormat;
-(BOOL)__localizedRestrictionExistsForShortStyle:(long long)arg1 ;
-(void)set_forceFamilyNameFirst:(BOOL)arg1 ;
-(void)set_forceGivenNameFirst:(BOOL)arg1 ;
-(long long)__localizedNameOrderUsingNativeOrdering:(BOOL)arg1 ;
-(long long)__localizedShortNameFormat;
-(long long)_nameOrderWithOverridesForComponents:(id)arg1 ;
-(BOOL)isEqualToFormatter:(id)arg1 ;
-(void)set_ignoresFallbacks:(BOOL)arg1 ;
-(void)set_locale:(NSLocale *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSLocale *)_locale;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
@end
