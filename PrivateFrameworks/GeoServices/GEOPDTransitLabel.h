/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:08 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitLabelItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPBTransitArtwork, NSString;

@interface GEOPDTransitLabel : PBCodable <GEOTransitLabelItem, NSCopying> {

	GEOPBTransitArtwork* _labelArtwork;
	NSString* _labelTextString;
	int _labelType;
	SCD_Struct_GE3 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) NSString * labelString; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> labelArtwork; 
@property (assign,nonatomic) BOOL hasLabelType; 
@property (assign,nonatomic) int labelType;                                               //@synthesize labelType=_labelType - In the implementation block
@property (nonatomic,readonly) BOOL hasLabelTextString; 
@property (nonatomic,retain) NSString * labelTextString;                                  //@synthesize labelTextString=_labelTextString - In the implementation block
@property (nonatomic,readonly) BOOL hasLabelArtwork; 
@property (nonatomic,retain) GEOPBTransitArtwork * labelArtwork;                          //@synthesize labelArtwork=_labelArtwork - In the implementation block
-(long long)type;
-(NSString *)labelString;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id<GEOTransitArtworkDataSource>)labelArtwork;
-(void)setLabelTextString:(NSString *)arg1 ;
-(NSString *)labelTextString;
-(BOOL)hasLabelArtwork;
-(void)setHasLabelType:(BOOL)arg1 ;
-(void)setLabelArtwork:(id<GEOTransitArtworkDataSource>)arg1 ;
-(int)labelType;
-(BOOL)hasLabelType;
-(BOOL)hasLabelTextString;
-(void)setLabelType:(int)arg1 ;
@end

