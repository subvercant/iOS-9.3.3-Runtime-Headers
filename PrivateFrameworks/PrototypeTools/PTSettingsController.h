/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:50 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@class UIBarButtonItem;

@interface PTSettingsController : UINavigationController {

	UIBarButtonItem* _dismissButton;

}

@property (nonatomic,retain) UIBarButtonItem * dismissButton;              //@synthesize dismissButton=_dismissButton - In the implementation block
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_dismiss;
-(id)initWithRootModuleController:(id)arg1 ;
-(id)_defaultDismissButton;
-(id)initWithRootSettings:(id)arg1 ;
-(void)setDismissButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)dismissButton;
@end

