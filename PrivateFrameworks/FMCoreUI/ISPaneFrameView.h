/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:52 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class FMSlidingPaneViewController;

@interface ISPaneFrameView : UIView {

	FMSlidingPaneViewController* _owningViewController;

}

@property (assign,nonatomic,__weak) FMSlidingPaneViewController * owningViewController;              //@synthesize owningViewController=_owningViewController - In the implementation block
-(void)layoutSubviews;
-(FMSlidingPaneViewController *)owningViewController;
-(void)setOwningViewController:(FMSlidingPaneViewController *)arg1 ;
@end
