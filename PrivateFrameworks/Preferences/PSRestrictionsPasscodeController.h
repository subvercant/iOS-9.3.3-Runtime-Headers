/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:26 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PSRestrictionsPasscodeController : NSObject
+(BOOL)validatePIN:(id)arg1 ;
+(void)setPIN:(id)arg1 ;
+(id)_keychainPasswordForRestrictions;
+(void)_removeKeychainPasswordForRestrictions;
+(id)_restrictionPasswordDictionary;
+(id)_generateSalt;
+(id)newHashDataForPassword:(id)arg1 andSalt:(id)arg2 ;
+(void)setPasswordForRestrictions:(id)arg1 ;
+(void)removePasswordForRestrictions;
+(id)passwordForRestrictions;
+(BOOL)legacyRestrictionsInEffect;
+(void)migrateRestrictionsPasscode;
+(id)saltForRestrictions;
+(BOOL)settingEnabled;
@end

