/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:04 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/AKJiggling.h>

@class AKCodeEntryView, AKBasicLoginContentViewController, AKAppleIDAuthenticationContext, NSArray, NSString;

@interface AKSecondFactorCodeEntryContentViewController : UIViewController <AKJiggling> {

	AKCodeEntryView* _codeGeneratorView;
	AKBasicLoginContentViewController* _titleHeaderViewController;
	AKAppleIDAuthenticationContext* _authenticationContext;
	NSArray* _activeConstraints;

}

@property (nonatomic,copy) NSString * reason; 
@property (nonatomic,readonly) NSString * generatedCode; 
@property (nonatomic,retain) AKCodeEntryView * codeGeneratorView;                                        //@synthesize codeGeneratorView=_codeGeneratorView - In the implementation block
@property (nonatomic,retain) AKBasicLoginContentViewController * titleHeaderViewController;              //@synthesize titleHeaderViewController=_titleHeaderViewController - In the implementation block
@property (nonatomic,retain) AKAppleIDAuthenticationContext * authenticationContext;                     //@synthesize authenticationContext=_authenticationContext - In the implementation block
@property (nonatomic,retain) NSArray * activeConstraints;                                                //@synthesize activeConstraints=_activeConstraints - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)updateViewConstraints;
-(NSString *)reason;
-(NSString *)generatedCode;
-(void)_configureTitleHeaderView;
-(void)_configureCodeGenView;
-(void)_updateFontContstraints:(id)arg1 ;
-(void)jiggleAView;
-(AKCodeEntryView *)codeGeneratorView;
-(void)setCodeGeneratorView:(AKCodeEntryView *)arg1 ;
-(AKBasicLoginContentViewController *)titleHeaderViewController;
-(void)setTitleHeaderViewController:(AKBasicLoginContentViewController *)arg1 ;
-(AKAppleIDAuthenticationContext *)authenticationContext;
-(void)setAuthenticationContext:(AKAppleIDAuthenticationContext *)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(void)setActiveConstraints:(NSArray *)arg1 ;
-(NSArray *)activeConstraints;
@end
