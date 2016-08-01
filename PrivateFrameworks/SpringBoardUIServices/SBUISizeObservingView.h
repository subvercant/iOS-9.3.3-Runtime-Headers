/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:59 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKit/UIView.h>

@protocol SBUISizeObservingViewDelegate;
@interface SBUISizeObservingView : UIView {

	BOOL _delegateInterestedInSizeChanges;
	id<SBUISizeObservingViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBUISizeObservingViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<SBUISizeObservingViewDelegate>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id<SBUISizeObservingViewDelegate>)delegate;
@end
