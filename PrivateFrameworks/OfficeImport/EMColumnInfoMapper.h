/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:50 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CMMapper.h>

@class EDColumnInfo;

@interface EMColumnInfoMapper : CMMapper {

	EDColumnInfo* edColumnInfo;
	double columnWidth;
	unsigned long long columnSpan;

}
-(double)columnWidth;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithEDColumnInfo:(id)arg1 maxSpan:(unsigned long long)arg2 parent:(id)arg3 ;
-(id)initWithDefaultWidth:(double)arg1 span:(unsigned long long)arg2 parent:(id)arg3 ;
@end
