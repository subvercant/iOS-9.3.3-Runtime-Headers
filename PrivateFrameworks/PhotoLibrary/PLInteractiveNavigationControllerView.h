/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:12 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UINavigationBarDelegate.h>

@class UIView, UINavigationBar, NSString;

@interface PLInteractiveNavigationControllerView : UIView <UINavigationBarDelegate> {

	UIView* _top;
	UIView* _bottom;
	UIView* _interactive;
	UIView* _overlay;
	UINavigationBar* _navBar;
	UIView* _header;
	UIView* _footer;
	long long _orientation;
	struct {
		unsigned transitioning : 1;
		unsigned headerViewIsVisible : 1;
		unsigned footerViewIsVisible : 1;
	}  _controllerViewFlags;

}

@property (nonatomic,retain,readonly) UINavigationBar * navigationBar;                     //@synthesize navBar=_navBar - In the implementation block
@property (nonatomic,retain) UIView * topView;                                             //@synthesize top=_top - In the implementation block
@property (nonatomic,retain) UIView * bottomView;                                          //@synthesize bottom=_bottom - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                          //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) UIView * footerView;                                          //@synthesize footer=_footer - In the implementation block
@property (assign,getter=headerViewIsHidden,nonatomic) BOOL headerViewHidden; 
@property (assign,getter=footerViewIsHidden,nonatomic) BOOL footerViewHidden; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(UINavigationBar *)navigationBar;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(UIView *)topView;
-(UIView *)bottomView;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
-(void)setHeaderViewHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setFooterViewHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_adjustViewFrame:(id)arg1 ;
-(BOOL)headerViewIsHidden;
-(BOOL)footerViewIsHidden;
-(void)setInteractiveView:(id)arg1 removePrevious:(BOOL)arg2 ;
-(void)setHeaderViewHidden:(BOOL)arg1 ;
-(void)setFooterViewHidden:(BOOL)arg1 ;
-(void)transitionDidEnd;
-(void)setTopView:(UIView *)arg1 ;
-(void)setBottomView:(UIView *)arg1 ;
-(void)setInteractiveView:(id)arg1 ;
-(id)interactiveView;
-(void)setTopViewAlpha:(double)arg1 ;
-(void)setOverlayView:(id)arg1 ;
-(void)transitionWillBegin;
@end
