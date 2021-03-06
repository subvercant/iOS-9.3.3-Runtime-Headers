/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:09 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOTimeToLeaveHypothesisLogMessage : PBCodable <NSCopying> {

	double _earliestArrivalOffset;
	double _earliestDepartureOffset;
	double _latestArrivalOffset;
	double _latestDepartureOffset;
	int _arrival;
	int _departure;
	unsigned _numberOfReroutes;
	int _ttlUiNotificationShown;
	SCD_Struct_GE65 _has;

}

@property (assign,nonatomic) BOOL hasDeparture; 
@property (assign,nonatomic) int departure;                                //@synthesize departure=_departure - In the implementation block
@property (assign,nonatomic) BOOL hasArrival; 
@property (assign,nonatomic) int arrival;                                  //@synthesize arrival=_arrival - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfReroutes; 
@property (assign,nonatomic) unsigned numberOfReroutes;                    //@synthesize numberOfReroutes=_numberOfReroutes - In the implementation block
@property (assign,nonatomic) BOOL hasTtlUiNotificationShown; 
@property (assign,nonatomic) int ttlUiNotificationShown;                   //@synthesize ttlUiNotificationShown=_ttlUiNotificationShown - In the implementation block
@property (assign,nonatomic) BOOL hasEarliestDepartureOffset; 
@property (assign,nonatomic) double earliestDepartureOffset;               //@synthesize earliestDepartureOffset=_earliestDepartureOffset - In the implementation block
@property (assign,nonatomic) BOOL hasLatestDepartureOffset; 
@property (assign,nonatomic) double latestDepartureOffset;                 //@synthesize latestDepartureOffset=_latestDepartureOffset - In the implementation block
@property (assign,nonatomic) BOOL hasEarliestArrivalOffset; 
@property (assign,nonatomic) double earliestArrivalOffset;                 //@synthesize earliestArrivalOffset=_earliestArrivalOffset - In the implementation block
@property (assign,nonatomic) BOOL hasLatestArrivalOffset; 
@property (assign,nonatomic) double latestArrivalOffset;                   //@synthesize latestArrivalOffset=_latestArrivalOffset - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)ttlUiNotificationShown;
-(void)setHasArrival:(BOOL)arg1 ;
-(void)setHasEarliestDepartureOffset:(BOOL)arg1 ;
-(double)latestArrivalOffset;
-(void)setHasDeparture:(BOOL)arg1 ;
-(unsigned)numberOfReroutes;
-(BOOL)hasEarliestArrivalOffset;
-(void)setHasEarliestArrivalOffset:(BOOL)arg1 ;
-(int)arrival;
-(void)setHasNumberOfReroutes:(BOOL)arg1 ;
-(void)setDeparture:(int)arg1 ;
-(void)setArrival:(int)arg1 ;
-(void)setEarliestDepartureOffset:(double)arg1 ;
-(BOOL)hasNumberOfReroutes;
-(double)earliestDepartureOffset;
-(BOOL)hasDeparture;
-(void)setEarliestArrivalOffset:(double)arg1 ;
-(int)departure;
-(BOOL)hasLatestDepartureOffset;
-(BOOL)hasLatestArrivalOffset;
-(BOOL)hasTtlUiNotificationShown;
-(void)setHasLatestDepartureOffset:(BOOL)arg1 ;
-(void)setLatestDepartureOffset:(double)arg1 ;
-(void)setHasTtlUiNotificationShown:(BOOL)arg1 ;
-(double)latestDepartureOffset;
-(void)setHasLatestArrivalOffset:(BOOL)arg1 ;
-(BOOL)hasArrival;
-(void)setTtlUiNotificationShown:(int)arg1 ;
-(void)setNumberOfReroutes:(unsigned)arg1 ;
-(BOOL)hasEarliestDepartureOffset;
-(void)setLatestArrivalOffset:(double)arg1 ;
-(double)earliestArrivalOffset;
@end

