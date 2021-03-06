/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:15 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKEventDetailCell.h>

@class UILabel;

@interface EKEventDetailTwoValueCell : EKEventDetailCell {

	int _style;
	UILabel* _titleView;
	UILabel* _valueView;
	UILabel* _value2View;
	int _twoValueCellStyle;

}

@property (nonatomic,readonly) unsigned visibleItems; 
-(id)titleView;
-(BOOL)update;
-(id)valueView;
-(void)layoutForWidth:(double)arg1 position:(int)arg2 ;
-(id)value2View;
-(unsigned)visibleItems;
-(id)initWithEvent:(id)arg1 editable:(BOOL)arg2 platformStyle:(int)arg3 ;
-(int)twoValueCellStyle;
@end

