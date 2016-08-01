/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:45 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOLatLng, GEOMapItemStorage, NSString;

@interface MSPPlaceBookmark : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOLatLng* _droppedPinCoordinate;
	GEOMapItemStorage* _mapItemStorage;
	int _origin;
	NSString* _title;
	SCD_Struct_MS3 _has;

}

@property (nonatomic,readonly) BOOL hasMapItemStorage; 
@property (nonatomic,retain) GEOMapItemStorage * mapItemStorage;              //@synthesize mapItemStorage=_mapItemStorage - In the implementation block
@property (assign,nonatomic) BOOL hasOrigin; 
@property (assign,nonatomic) int origin;                                      //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasDroppedPinCoordinate; 
@property (nonatomic,retain) GEOLatLng * droppedPinCoordinate;                //@synthesize droppedPinCoordinate=_droppedPinCoordinate - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)origin;
-(void)setOrigin:(int)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasTitle;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasOrigin;
-(GEOMapItemStorage *)mapItemStorage;
-(void)setMapItemStorage:(GEOMapItemStorage *)arg1 ;
-(BOOL)hasMapItemStorage;
-(void)setHasOrigin:(BOOL)arg1 ;
-(GEOLatLng *)droppedPinCoordinate;
-(void)setDroppedPinCoordinate:(GEOLatLng *)arg1 ;
-(BOOL)hasDroppedPinCoordinate;
@end
