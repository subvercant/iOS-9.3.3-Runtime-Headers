/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:46 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIStatusBarLayoutManager, NSMutableArray, UIStatusBarComposedData, UIStatusBarForegroundStyleAttributes;

@interface UIStatusBarForegroundView : UIView {

	BOOL _usesVerticalLayout;
	BOOL _itemIsEnabled[36];
	UIStatusBarLayoutManager* _layoutManagers[3];
	int _ignoreDataLevel;
	NSMutableArray* _actionAnimationStack;
	UIStatusBarComposedData* _currentData;
	UIStatusBarComposedData* _pendedData;
	int _pendedActions;
	long long _idiom;
	UIStatusBarForegroundStyleAttributes* _foregroundStyle;

}

@property (assign,nonatomic) long long idiom;                                                       //@synthesize idiom=_idiom - In the implementation block
@property (nonatomic,readonly) UIStatusBarForegroundStyleAttributes * foregroundStyle;              //@synthesize foregroundStyle=_foregroundStyle - In the implementation block
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)didMoveToWindow;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(UIStatusBarForegroundStyleAttributes *)foregroundStyle;
-(long long)idiom;
-(void)startIgnoringData;
-(void)_cleanUpAfterDataChange;
-(void)_reflowItemViewsWithDuration:(double)arg1 preserveHistory:(BOOL)arg2 ;
-(BOOL)ignoringData;
-(void)_setStatusBarData:(id)arg1 actions:(int)arg2 animated:(BOOL)arg3 ;
-(void)stopIgnoringData:(BOOL)arg1 ;
-(void)_reflowItemViewsCrossfadingCenterWithDuration:(double)arg1 ;
-(id)_computeVisibleItemsPreservingHistory:(BOOL)arg1 ;
-(void)_cleanUpAfterSimpleReflow;
-(void)setStatusBarData:(id)arg1 actions:(int)arg2 animated:(BOOL)arg3 ;
-(void)reflowItemViews:(BOOL)arg1 ;
-(double)edgePadding;
-(BOOL)_tryToPlaceItem:(id)arg1 inItemArray:(id)arg2 layoutManager:(id)arg3 roomRemaining:(double*)arg4 allowSwap:(BOOL)arg5 swappedItem:(id*)arg6 ;
-(void)setPersistentAnimationsEnabled:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 foregroundStyle:(id)arg2 usesVerticalLayout:(BOOL)arg3 ;
-(BOOL)willChangeNavigationItemDisplayWithSystemNavigationAction:(id)arg1 ;
-(void)reflowItemViewsCrossfadingCenter:(id)arg1 duration:(double)arg2 ;
-(void)reflowItemViewsForgettingEitherSideItemHistory;
-(void)setIdiom:(long long)arg1 ;
@end

