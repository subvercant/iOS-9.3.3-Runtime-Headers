/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:57 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestions/SGObject.h>
#import <libobjc.A.dylib/SGEventForGeocode.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, NSDate, NSTimeZone, NSArray;

@interface SGEvent : SGObject <SGEventForGeocode> {

	NSObject*<OS_dispatch_queue> _geocodeQueue;
	SGEvent* _geocoded;
	BOOL _isAllDay;
	NSString* _title;
	NSString* _notes;
	NSDate* _start;
	NSTimeZone* _startTimeZone;
	NSDate* _end;
	NSTimeZone* _endTimeZone;
	NSDate* _creationDate;
	NSDate* _lastModifiedDate;
	NSArray* _locations;
	NSString* _opaqueKey;
	NSString* _uniqueKey;
	NSArray* _tags;

}

@property (nonatomic,readonly) NSString * title;                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * notes;                                             //@synthesize notes=_notes - In the implementation block
@property (nonatomic,readonly) NSDate * start;                                               //@synthesize start=_start - In the implementation block
@property (nonatomic,readonly) NSTimeZone * startTimeZone;                                   //@synthesize startTimeZone=_startTimeZone - In the implementation block
@property (nonatomic,readonly) NSDate * end;                                                 //@synthesize end=_end - In the implementation block
@property (nonatomic,readonly) NSTimeZone * endTimeZone;                                     //@synthesize endTimeZone=_endTimeZone - In the implementation block
@property (nonatomic,readonly) BOOL isAllDay;                                                //@synthesize isAllDay=_isAllDay - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                                        //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) NSDate * lastModifiedDate;                                    //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
@property (nonatomic,readonly) NSArray * locations;                                          //@synthesize locations=_locations - In the implementation block
@property (nonatomic,readonly) NSString * opaqueKey;                                         //@synthesize opaqueKey=_opaqueKey - In the implementation block
@property (nonatomic,readonly) NSString * uniqueKey;                                         //@synthesize uniqueKey=_uniqueKey - In the implementation block
@property (nonatomic,readonly) NSArray * tags;                                               //@synthesize tags=_tags - In the implementation block
@property (getter=isGeocodeCandidate,nonatomic,readonly) BOOL geocodeCandidate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)eventWithRecordId:(id)arg1 origin:(id)arg2 uniqueKey:(id)arg3 opaqueKey:(id)arg4 title:(id)arg5 notes:(id)arg6 start:(id)arg7 startTimeZone:(id)arg8 end:(id)arg9 endTimeZone:(id)arg10 isAllDay:(BOOL)arg11 creationDate:(id)arg12 lastModifiedDate:(id)arg13 locations:(id)arg14 tags:(id)arg15 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)title;
-(NSDate *)start;
-(NSDate *)end;
-(NSArray *)tags;
-(NSArray *)locations;
-(NSString *)opaqueKey;
-(id)startDateComponents;
-(NSDate *)lastModifiedDate;
-(NSString *)uniqueKey;
-(NSString *)notes;
-(NSTimeZone *)startTimeZone;
-(NSTimeZone *)endTimeZone;
-(BOOL)isAllDay;
-(BOOL)isEqualToEvent:(id)arg1 ;
-(NSDate *)creationDate;
-(id)dateForUTCDate:(id)arg1 withTimeZone:(id)arg2 ;
-(id)firstLocationForType:(unsigned long long)arg1 ;
-(id)initWithRecordId:(id)arg1 origin:(id)arg2 uniqueKey:(id)arg3 opaqueKey:(id)arg4 title:(id)arg5 notes:(id)arg6 start:(id)arg7 startTimeZone:(id)arg8 end:(id)arg9 endTimeZone:(id)arg10 isAllDay:(BOOL)arg11 creationDate:(id)arg12 lastModifiedDate:(id)arg13 locations:(id)arg14 tags:(id)arg15 ;
-(void)mergeIntoEKEvent:(id)arg1 withStore:(id)arg2 ;
-(id)endDateComponents;
-(void)geocodeWithCallback:(/*^block*/id)arg1 ;
-(BOOL)isGeocodeCandidate;
-(void)_applyTimeRangeToEKEvent:(id)arg1 ;
-(id)_componentsForDate:(id)arg1 timeZone:(id)arg2 isEnd:(BOOL)arg3 ;
-(void)mergeIntoEKEvent:(id)arg1 ;
-(id)geocodeLocations;
-(id)geocodedEventWithStartDate:(id)arg1 startTimeZone:(id)arg2 endDate:(id)arg3 endTimeZone:(id)arg4 locations:(id)arg5 ;
-(id)geocodeStartDate;
-(id)geocodeStartTimeZone;
-(id)geocodeEndDate;
-(id)geocodeEndTimeZone;
-(id)toEKEventWithStore:(id)arg1 ;
-(void)mergeIntoEKEvent:(id)arg1 withStore:(id)arg2 preservingValuesDifferentFrom:(id)arg3 ;
@end
