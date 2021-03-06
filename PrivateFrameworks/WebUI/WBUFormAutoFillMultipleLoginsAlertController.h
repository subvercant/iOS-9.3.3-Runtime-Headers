/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:30 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertController.h>

@class UIAlertAction;

@interface WBUFormAutoFillMultipleLoginsAlertController : UIAlertController {

	UIAlertAction* _cancelAction;
	id _appDidEnterBackgroundObserver;
	BOOL _cancelsWhenAppEntersBackground;

}

@property (assign,nonatomic) BOOL cancelsWhenAppEntersBackground;              //@synthesize cancelsWhenAppEntersBackground=_cancelsWhenAppEntersBackground - In the implementation block
+(id)alertControllerWithMatches:(id)arg1 currentUser:(id)arg2 currentPassword:(id)arg3 lastGeneratedPassword:(id)arg4 formURL:(id)arg5 preferredStyle:(long long)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setCancelsWhenAppEntersBackground:(BOOL)arg1 ;
-(BOOL)cancelsWhenAppEntersBackground;
@end

