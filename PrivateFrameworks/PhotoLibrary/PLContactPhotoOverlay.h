/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:12 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView;

@interface PLContactPhotoOverlay : UIView {

	UILabel* _titleLabel;
	UIImageView* __avatarPreview;

}

@property (nonatomic,readonly) UILabel * titleLabel;                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets overlayEdgeInsets; 
@property (nonatomic,readonly) UIImageView * _avatarPreview;                //@synthesize _avatarPreview=__avatarPreview - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(UIEdgeInsets)overlayEdgeInsets;
-(CGRect)inscribingBounds;
-(void)_commonPLContactPhotoOverlayInitialization;
-(void)beginAvatarTrackingFromImageView:(id)arg1 ;
-(void)endAvatarTracking;
-(UIImageView *)_avatarPreview;
@end
