/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:43 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FTRegUtilities : NSObject
+(id)serviceWithType:(long long)arg1 ;
+(id)standaloneAuthorizationControllerWithRegController:(id)arg1 authID:(id)arg2 token:(id)arg3 ;
+(id)standaloneNewPasswordControllerWithRegController:(id)arg1 appleID:(id)arg2 ;
+(void)changePasswordControllerDidCancel:(id)arg1 ;
+(void)changePasswordControllerDidFinish:(id)arg1 withAppleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4 ;
+(void)authorizationController:(id)arg1 authorizedAccount:(BOOL)arg2 ;
@end

