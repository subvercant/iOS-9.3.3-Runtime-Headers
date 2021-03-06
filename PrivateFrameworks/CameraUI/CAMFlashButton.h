/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:32 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CAMExpandableMenuButton.h>

@class UIImageView;

@interface CAMFlashButton : CAMExpandableMenuButton {

	BOOL _allowsAutomaticFlash;
	BOOL _unavailable;
	UIImageView* __glyphView;
	UIImageView* __warningIndicatorView;

}

@property (assign,nonatomic) long long flashMode; 
@property (assign,nonatomic) BOOL allowsAutomaticFlash;                          //@synthesize allowsAutomaticFlash=_allowsAutomaticFlash - In the implementation block
@property (assign,getter=isUnavailable,nonatomic) BOOL unavailable;              //@synthesize unavailable=_unavailable - In the implementation block
@property (nonatomic,readonly) UIImageView * _glyphView;                         //@synthesize _glyphView=__glyphView - In the implementation block
@property (nonatomic,readonly) UIImageView * _warningIndicatorView;              //@synthesize _warningIndicatorView=__warningIndicatorView - In the implementation block
+(long long)torchModeForFlashMode:(long long)arg1 ;
+(long long)flashModeForTorchMode:(long long)arg1 ;
-(void)reloadData;
-(id)headerView;
-(long long)numberOfMenuItems;
-(id)titleForMenuItemAtIndex:(long long)arg1 ;
-(void)setFlashMode:(long long)arg1 ;
-(long long)flashMode;
-(void)setExpansionOrientation:(long long)arg1 ;
-(id)initWithExpansionOrientation:(long long)arg1 ;
-(void)setAllowsAutomaticFlash:(BOOL)arg1 ;
-(BOOL)isUnavailable;
-(void)setUnavailable:(BOOL)arg1 ;
-(UIImageView *)_glyphView;
-(id)hiddenIndexesWhileCollapsed;
-(void)_commonCAMFlashButtonInitialization;
-(long long)modeForIndex:(long long)arg1 ;
-(long long)indexForMode:(long long)arg1 ;
-(void)_updateCurrentGlyphImage;
-(BOOL)allowsAutomaticFlash;
-(UIImageView *)_warningIndicatorView;
-(BOOL)wantsSelectedItemToBeVisible;
-(id)_currentGlyphImage;
-(double)collapsedSelectedLabelHorizontalMargin;
-(void)prepareHeaderViewForExpanding:(BOOL)arg1 ;
-(BOOL)shouldIgnoreMenuInteraction;
@end

