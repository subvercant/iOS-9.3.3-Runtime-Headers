/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:42 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKeyCommandDiscoverabilityHUDVisualStyle.h>
@class UIFont, UIColor;


@protocol UIKeyCommandDiscoverabilityHUDVisualStyle <NSObject>
@property (nonatomic,readonly) UIEdgeInsets HUDViewInsets; 
@property (nonatomic,readonly) double HUDPageControlBottomMargin; 
@property (nonatomic,readonly) double columnDividerWidth; 
@property (nonatomic,readonly) double summaryXPadding; 
@property (nonatomic,readonly) double summaryYPadding; 
@property (nonatomic,readonly) double summaryDescriptionToModifiersSpacing; 
@property (nonatomic,readonly) double summaryModifiersSpacing; 
@property (nonatomic,readonly) UIFont * summaryFont; 
@property (nonatomic,readonly) double summaryLineHeight; 
@property (nonatomic,readonly) double summaryLineSpacing; 
@property (nonatomic,readonly) double minimumFontScaleBeforeTruncation; 
@property (nonatomic,readonly) UIColor * titleColor; 
@property (nonatomic,readonly) UIColor * inputColor; 
@property (nonatomic,readonly) UIColor * dividerColor; 
@required
-(double)minimumFontScaleBeforeTruncation;
-(double)maxHUDWidthForWidth:(double)arg1;
-(double)maxHUDHeightForHeight:(double)arg1;
-(UIEdgeInsets)HUDViewInsets;
-(double)summaryLineSpacing;
-(double)summaryLineHeight;
-(double)columnDividerWidth;
-(double)HUDPageControlBottomMargin;
-(UIColor *)dividerColor;
-(double)columnDividerHeightForHUDHeight:(double)arg1;
-(UIColor *)inputColor;
-(double)summaryXPadding;
-(double)summaryYPadding;
-(double)summaryDescriptionToModifiersSpacing;
-(double)summaryModifiersSpacing;
-(UIFont *)summaryFont;
-(UIColor *)titleColor;

@end


@class UIFont, UIColor, NSString;

@interface UIKeyCommandDiscoverabilityHUDVisualStyle : NSObject <UIKeyCommandDiscoverabilityHUDVisualStyle>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIEdgeInsets HUDViewInsets; 
@property (nonatomic,readonly) double HUDPageControlBottomMargin; 
@property (nonatomic,readonly) double columnDividerWidth; 
@property (nonatomic,readonly) double summaryXPadding; 
@property (nonatomic,readonly) double summaryYPadding; 
@property (nonatomic,readonly) double summaryDescriptionToModifiersSpacing; 
@property (nonatomic,readonly) double summaryModifiersSpacing; 
@property (nonatomic,readonly) UIFont * summaryFont; 
@property (nonatomic,readonly) double summaryLineHeight; 
@property (nonatomic,readonly) double summaryLineSpacing; 
@property (nonatomic,readonly) double minimumFontScaleBeforeTruncation; 
@property (nonatomic,readonly) UIColor * titleColor; 
@property (nonatomic,readonly) UIColor * inputColor; 
@property (nonatomic,readonly) UIColor * dividerColor; 
+(id)visualStyleForTraitCollection:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(double)maxHUDWidthForWidth:(double)arg1 ;
-(double)maxHUDHeightForHeight:(double)arg1 ;
-(double)columnDividerHeightForHUDHeight:(double)arg1 ;
@end

