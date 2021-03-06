/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:13:06 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, HKValueRange;

@interface HKGraphSeriesDataBlock : NSObject {

	NSArray* _chartPoints;
	HKValueRange* _yValueRange;

}

@property (nonatomic,copy) NSArray * chartPoints;                       //@synthesize chartPoints=_chartPoints - In the implementation block
@property (nonatomic,readonly) HKValueRange * yValueRange;              //@synthesize yValueRange=_yValueRange - In the implementation block
-(void)setChartPoints:(NSArray *)arg1 ;
-(NSArray *)chartPoints;
-(HKValueRange *)yValueRange;
@end

