/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:49 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIPopoverBackgroundView.h>

@class UIView, _UIBackdropView, NSArray, UIColor;

@interface _UIPopoverStandardChromeView : UIPopoverBackgroundView {

	UIView* _arrowView;
	UIView* _leftCapView;
	UIView* _rightCapView;
	_UIBackdropView* _blurView;
	NSArray* _dimmingViews;
	UIColor* _popoverBackgroundColor;
	double _arrowOffset;
	unsigned long long _arrowDirection;
	long long _backgroundStyle;
	BOOL _arrowVisible;
	BOOL useShortMode;
	BOOL _debugMode;
	double _dimmingViewTopEdgeInset;

}

@property (assign,nonatomic) long long backgroundStyle; 
@property (assign,getter=isArrowVisible,nonatomic) BOOL arrowVisible; 
@property (assign,nonatomic) double dimmingViewTopEdgeInset;                               //@synthesize dimmingViewTopEdgeInset=_dimmingViewTopEdgeInset - In the implementation block
@property (assign,nonatomic) BOOL useShortMode; 
@property (assign,getter=isDebugModeEnabled,nonatomic) BOOL debugModeEnabled;              //@synthesize debugMode=_debugMode - In the implementation block
@property (nonatomic,copy) UIColor * popoverBackgroundColor; 
+(double)arrowHeight;
+(double)arrowBase;
+(UIEdgeInsets)contentViewInsets;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(long long)backgroundStyle;
-(void)setBackgroundStyle:(long long)arg1 ;
-(void)motionEnded:(long long)arg1 withEvent:(id)arg2 ;
-(BOOL)isPinned;
-(double)_shadowRadius;
-(double)_shadowOpacity;
-(void)motionBegan:(long long)arg1 withEvent:(id)arg2 ;
-(void)motionCancelled:(long long)arg1 withEvent:(id)arg2 ;
-(CGSize)_shadowOffset;
-(unsigned long long)arrowDirection;
-(void)setArrowDirection:(unsigned long long)arg1 ;
-(void)_loadNecessaryViews;
-(double)minNonPinnedOffset;
-(double)maxNonPinnedOffset;
-(BOOL)isRightArrowPinnedToTop;
-(BOOL)isRightArrowPinnedToBottom;
-(BOOL)useShortMode;
-(void)_layoutArrowViewsUpOrDown;
-(void)_layoutArrowViewsLeftOrRight;
-(void)_layoutArrowViewsNone;
-(UIEdgeInsets)_shadowInsets;
-(id)_shadowPath;
-(BOOL)hasComponentViews;
-(BOOL)wouldPinForOffset:(double)arg1 ;
-(void)setArrowOffset:(double)arg1 ;
-(double)arrowOffset;
-(void)setDimmingViewTopEdgeInset:(double)arg1 ;
-(void)setBackgroundStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(UIColor *)popoverBackgroundColor;
-(void)setPopoverBackgroundColor:(UIColor *)arg1 ;
-(BOOL)isArrowVisible;
-(void)setArrowVisible:(BOOL)arg1 ;
-(void)setArrowVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setUseShortMode:(BOOL)arg1 ;
-(BOOL)isDebugModeEnabled;
-(void)setDebugModeEnabled:(BOOL)arg1 ;
-(double)dimmingViewTopEdgeInset;
@end

