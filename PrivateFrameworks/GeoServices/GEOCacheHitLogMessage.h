/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:07 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOCacheHitLogMessage : PBCodable <NSCopying> {

	unsigned _cacheHitCount;
	unsigned _cacheMissCount;
	int _cacheType;
	int _tileSetStyle;
	SCD_Struct_GE6 _has;

}

@property (assign,nonatomic) BOOL hasCacheType; 
@property (assign,nonatomic) int cacheType;                        //@synthesize cacheType=_cacheType - In the implementation block
@property (assign,nonatomic) BOOL hasTileSetStyle; 
@property (assign,nonatomic) int tileSetStyle;                     //@synthesize tileSetStyle=_tileSetStyle - In the implementation block
@property (assign,nonatomic) BOOL hasCacheHitCount; 
@property (assign,nonatomic) unsigned cacheHitCount;               //@synthesize cacheHitCount=_cacheHitCount - In the implementation block
@property (assign,nonatomic) BOOL hasCacheMissCount; 
@property (assign,nonatomic) unsigned cacheMissCount;              //@synthesize cacheMissCount=_cacheMissCount - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasCacheType:(BOOL)arg1 ;
-(void)setHasTileSetStyle:(BOOL)arg1 ;
-(void)setCacheHitCount:(unsigned)arg1 ;
-(void)setCacheMissCount:(unsigned)arg1 ;
-(unsigned)cacheHitCount;
-(int)tileSetStyle;
-(BOOL)hasTileSetStyle;
-(void)setHasCacheMissCount:(BOOL)arg1 ;
-(void)setHasCacheHitCount:(BOOL)arg1 ;
-(void)setCacheType:(int)arg1 ;
-(unsigned)cacheMissCount;
-(BOOL)hasCacheHitCount;
-(int)cacheType;
-(BOOL)hasCacheMissCount;
-(BOOL)hasCacheType;
-(void)setTileSetStyle:(int)arg1 ;
@end
