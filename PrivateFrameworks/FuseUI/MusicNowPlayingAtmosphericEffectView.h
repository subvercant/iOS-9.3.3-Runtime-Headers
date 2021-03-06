/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:00 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIView.h>

@class _UIBackdropView, UIView;

@interface MusicNowPlayingAtmosphericEffectView : UIView {

	long long _effect;
	_UIBackdropView* _backdropView;
	UIView* _blendModeTintView;
	UIView* _colorTintView;

}

@property (assign,nonatomic) long long effect;                            //@synthesize effect=_effect - In the implementation block
@property (nonatomic,retain) _UIBackdropView * backdropView;              //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,retain) UIView * blendModeTintView;                  //@synthesize blendModeTintView=_blendModeTintView - In the implementation block
@property (nonatomic,retain) UIView * colorTintView;                      //@synthesize colorTintView=_colorTintView - In the implementation block
+(Class)tintViewClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(_UIBackdropView *)backdropView;
-(void)setBackdropView:(_UIBackdropView *)arg1 ;
-(void)setEffect:(long long)arg1 ;
-(long long)effect;
-(UIView *)colorTintView;
-(void)setColorTintView:(UIView *)arg1 ;
-(void)_updateEffect;
-(UIView *)blendModeTintView;
-(void)setBlendModeTintView:(UIView *)arg1 ;
@end

