/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:43 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIBarItemAppearanceStorage.h>

@class NSMutableDictionary, UIColor, NSValue, _UIBarBackButtonItemAppearanceStorage;

@interface _UIBarButtonItemAppearanceStorage : _UIBarItemAppearanceStorage {

	NSMutableDictionary* backgroundImages;
	NSMutableDictionary* miniBackgroundImages;
	UIColor* tintColor;
	NSValue* titlePositionOffset;
	NSValue* miniTitlePositionOffset;
	NSMutableDictionary* backgroundVerticalAdjustmentsForBarMetrics;
	_UIBarBackButtonItemAppearanceStorage* backButtonAppearance;

}

@property (nonatomic,retain) UIColor * tintColor; 
@property (nonatomic,retain) NSValue * titlePositionOffset; 
@property (nonatomic,retain) NSValue * miniTitlePositionOffset; 
@property (nonatomic,retain) NSValue * backButtonTitlePositionOffset; 
@property (nonatomic,retain) NSValue * miniBackButtonTitlePositionOffset; 
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(id)backgroundImageForState:(unsigned long long)arg1 style:(long long)arg2 isMini:(BOOL)arg3 ;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 isMini:(BOOL)arg4 ;
-(id)backButtonBackgroundImageForState:(unsigned long long)arg1 isMini:(BOOL)arg2 ;
-(void)setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 isMini:(BOOL)arg3 ;
-(id)anyBackgroundImage;
-(NSValue *)miniTitlePositionOffset;
-(NSValue *)titlePositionOffset;
-(double)backgroundVerticalAdjustmentForBarMetrics:(long long)arg1 ;
-(void)setBackgroundVerticalAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)setMiniTitlePositionOffset:(NSValue *)arg1 ;
-(void)setTitlePositionOffset:(NSValue *)arg1 ;
-(id)anyBackButtonBackgroundImage;
-(NSValue *)miniBackButtonTitlePositionOffset;
-(NSValue *)backButtonTitlePositionOffset;
-(double)backButtonBackgroundVerticalAdjustmentForBarMetrics:(long long)arg1 ;
-(void)setBackButtonBackgroundVerticalAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)setMiniBackButtonTitlePositionOffset:(NSValue *)arg1 ;
-(void)setBackButtonTitlePositionOffset:(NSValue *)arg1 ;
@end
