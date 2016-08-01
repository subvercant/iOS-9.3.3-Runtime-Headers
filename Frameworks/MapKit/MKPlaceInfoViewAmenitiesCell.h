/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:03 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <AddressBookUI/ABContactCell.h>

@class NSMutableArray, UIView, NSArray, UIColor, UIFont;

@interface MKPlaceInfoViewAmenitiesCell : ABContactCell {

	NSMutableArray* _labels;
	NSMutableArray* _values;
	UIView* _insetMetricView;
	UIView* _leftMetricView;
	UIView* _rightMetricView;
	NSArray* _keyValues;
	NSMutableArray* _labelConstraints;
	unsigned long long _columnCount;
	UIColor* _keyLabelColor;
	UIFont* _keyLabelFont;
	UIFont* _valueLabelFont;

}

@property (nonatomic,retain) NSArray * keyValues;                            //@synthesize keyValues=_keyValues - In the implementation block
@property (nonatomic,retain) UIColor * keyLabelColor;                        //@synthesize keyLabelColor=_keyLabelColor - In the implementation block
@property (nonatomic,retain) UIFont * valueLabelFont;                        //@synthesize valueLabelFont=_valueLabelFont - In the implementation block
@property (assign,nonatomic) unsigned long long columnCount;                 //@synthesize columnCount=_columnCount - In the implementation block
@property (nonatomic,retain) UIFont * keyLabelFont;                          //@synthesize keyLabelFont=_keyLabelFont - In the implementation block
@property (nonatomic,retain) NSMutableArray * labelConstraints;              //@synthesize labelConstraints=_labelConstraints - In the implementation block
+(id)reuseIdentifier;
+(unsigned long long)requiredNumberOfColumnsForValue:(id)arg1 withColumnCount:(unsigned long long)arg2 andMargins:(UIEdgeInsets)arg3 maxWidth:(double)arg4 ;
+(double)intrinsicContentHeightForValueLabelFont:(id)arg1 ;
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)layoutMarginsDidChange;
-(void)tintColorDidChange;
-(void)prepareForReuse;
-(unsigned long long)columnCount;
-(void)setColumnCount:(unsigned long long)arg1 ;
-(void)contentSizeDidChange;
-(UIFont *)keyLabelFont;
-(void)refreshContent:(BOOL)arg1 ;
-(void)setKeyValues:(NSArray *)arg1 ;
-(void)addConstraintsForKeyLabel:(id)arg1 andMatchingValueLabel:(id)arg2 ;
-(NSMutableArray *)labelConstraints;
-(void)setLabelConstraints:(NSMutableArray *)arg1 ;
-(void)setKeyLabelFont:(UIFont *)arg1 ;
-(void)addWidthAndSideSpacingConstraintsForLabels;
-(void)setValueLabelFont:(UIFont *)arg1 ;
-(void)_setKeyLabelsToColor:(id)arg1 ;
-(id)attributeLabelWithString:(id)arg1 ;
-(NSArray *)keyValues;
-(UIColor *)keyLabelColor;
-(void)setKeyLabelColor:(UIColor *)arg1 ;
-(id)attributeValueWithString:(id)arg1 ;
-(UIFont *)valueLabelFont;
@end
