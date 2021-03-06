/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:50 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIDatePickerMode.h>

@class NSString;

@interface _UIDatePickerMode_Date : _UIDatePickerMode {

	double _dateYearWidth;
	double _dateMonthWidth;
	double _dateDayWidth;
	NSString* _yearFormat;
	NSString* _monthFormat;
	NSString* _dayFormat;

}
+(long long)datePickerMode;
+(unsigned long long)extractableCalendarUnits;
-(void)noteCalendarChanged;
-(long long)displayedCalendarUnits;
-(void)resetComponentWidths;
-(void)_shouldReset:(id)arg1 ;
-(id)dateFormatForCalendarUnit:(unsigned long long)arg1 ;
-(double)widthForCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3 ;
-(id)localizedFormatString;
-(long long)numberOfRowsForCalendarUnit:(unsigned long long)arg1 ;
-(unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)arg1 ;
-(unsigned long long)nextUnitLargerThanUnit:(unsigned long long)arg1 ;
-(id)_dateForYearRow:(long long)arg1 ;
-(long long)rowForDate:(id)arg1 dateComponents:(id)arg2 component:(long long)arg3 currentRow:(long long)arg4 ;
-(BOOL)_shouldEnableValueForRow:(long long)arg1 inComponent:(long long)arg2 calendarUnit:(unsigned long long)arg3 ;
@end

