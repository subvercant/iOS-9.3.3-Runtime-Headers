/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:44 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommunicationsSetupUI/CNFRegAccountWebViewController.h>

@protocol CNFRegAccountAuthorizationDelegate;
@class NSString;

@interface CNFRegAccountAuthorizationController : CNFRegAccountWebViewController {

	NSString* _authID;
	NSString* _authToken;
	id<CNFRegAccountAuthorizationDelegate> _delegate;

}

@property (nonatomic,copy) NSString * authID;                                              //@synthesize authID=_authID - In the implementation block
@property (nonatomic,copy) NSString * authToken;                                           //@synthesize authToken=_authToken - In the implementation block
@property (assign,nonatomic) id<CNFRegAccountAuthorizationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<CNFRegAccountAuthorizationDelegate>)arg1 ;
-(void)dealloc;
-(id<CNFRegAccountAuthorizationDelegate>)delegate;
-(NSString *)authToken;
-(void)setAuthToken:(NSString *)arg1 ;
-(id)initWithRegController:(id)arg1 authID:(id)arg2 token:(id)arg3 ;
-(id)logName;
-(void)cancelTapped;
-(void)completeHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4 ;
-(id)authIdHeaderValue;
-(id)authTokenHeaderValue;
-(void)setAuthID:(NSString *)arg1 ;
-(NSString *)authID;
-(id)bagKey;
@end
