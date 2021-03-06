/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:59 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicEntityVerticalLockupView.h>

@class UIView, MusicNowPlayingFloatingButton;

@interface MusicEntityEditableVerticalLockupView : MusicEntityVerticalLockupView {

	UIView* _artworkEditingOverlayView;
	MusicNowPlayingFloatingButton* _cameraButton;
	BOOL _editing;

}

@property (assign,nonatomic,__weak) id<MusicEntityEditableVerticalLockupViewDelegate> delegate; 
@property (assign,getter=isEditing,nonatomic) BOOL editing;                                                  //@synthesize editing=_editing - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setEditing:(BOOL)arg1 ;
-(void)_layoutEditingSubviews;
-(void)_layoutEditingSubviewsForEditing:(BOOL)arg1 editingViewsAlpha:(double)arg2 ;
-(void)_cameraButtonTapped:(id)arg1 ;
@end

